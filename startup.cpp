//
// Created by Ben on 2020-03-29.
//
#include <cstdint>
#include <algorithm>
#include <tuple>
#include "register_defs.h"
#include "vectors.cpp"
#include "clk_utils.h"
#include "clock_config.h"


template<long V1, long V2>
struct StaticAssertEquality {
    static constexpr void *NotEqualError() { return V1 + V2; }
};

template<long V>
struct StaticAssertEquality<V, V> {
    static constexpr bool NotEqualError = true;
};

#define STATIC_ASSERT_LONG_EQUALITY(SET_CLK, BEST_MATCH)                \
  static_assert(                                                        \
    StaticAssertEquality<static_cast<long>(SET_CLK),                    \
                         static_cast<long>(BEST_MATCH)>::NotEqualError, \
    #SET_CLK " != " #BEST_MATCH)

typedef void(*function_type)();

void init_ctors();

void init_bss();

void init_data();

void init_clk();

void __reset_handler() {
    /*Set the stack pointer*/
    asm("ldr   r0, =_estack");
    asm("mov   sp, r0      ");
    init_bss();
    init_ctors();
    init_data();
    init_clk();

    asm("b main");

    while (true) {}
}

void init_clk() {
    constexpr auto clk_tuple = calculate_clk(SYSTEM_CLOCK_SPEED, INPUT_CLOCK_SPEED);

    constexpr unsigned int f_clk = std::get<4>(clk_tuple);
    STATIC_ASSERT_LONG_EQUALITY(SYSTEM_CLOCK_SPEED, f_clk);

    constexpr unsigned int M = std::get<0>(clk_tuple);
    constexpr unsigned int N = std::get<1>(clk_tuple);
    constexpr unsigned int P = std::get<2>(clk_tuple);
    constexpr unsigned int Q = std::get<3>(clk_tuple);

    /*Increase the number of wait cycles for flash to adjust for higher clock speed*/
    FLASH::ACR::LATENCY.write(FLASH_WAIT_CYCLES);

    if (SYSTEM_CLOCK_SPEED <= 64000000) {
        PWR::CR::VOS.write(0x1);
    } else if (SYSTEM_CLOCK_SPEED <= 84000000) {
        PWR::CR::VOS.write(0x2);
    } else {
        PWR::CR::VOS.write(0x3);
    }

    if (USE_EXTERNAL_CLK) {
        /*Enable the external clock and wait for it to be ready*/
        RCC::CR::HSEON.write(true);
        while (!RCC::CR::HSERDY.read()) {}
    }

    RCC::PLLCFGR::raw_pllcfgr = (M | (N << 6U) | (P << 16U) | (Q << 24U));
    RCC::PLLCFGR::PLLSRC.write(USE_EXTERNAL_CLK);
    RCC::CR::PLLON.write(true);
    RCC::CFGR::PPRE1.write(APB1_CLK_PRESCALER);
    RCC::CFGR::PPRE2.write(APB2_CLK_PRESCALER);
    RCC::CFGR::HPRE.write(HCLK_PRESCALLER);

    /*Wait for the PLL clock to stabilize*/
    while (!RCC::CR::PLLRDY.read()) {}

    /*Switch to the PLL clock*/
    RCC::CFGR::SW1.write(true);
}


extern std::uintptr_t _sbss;
extern std::uintptr_t _ebss;

void init_bss() {
// Clear the bss segment.
    std::fill(&_sbss, &_ebss, 0U);
}


extern function_type __init_array_start[];
extern function_type __init_array_end[];

void init_ctors() {
    std::for_each(__init_array_start,
                  __init_array_end,
                  [](const function_type pf) {
                      pf();
                  });
}

extern std::uintptr_t _sidata;
extern std::uintptr_t _sdata;
extern std::uintptr_t _edata;

void init_data() {
// Calculate the size of the data section.
    const std::size_t cnt = (&_edata - &_sdata);
// Copy the rodata section to the data section.
    std::copy(&_sdata,
              &_sdata + cnt,
              &_sidata);
}