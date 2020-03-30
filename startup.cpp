//
// Created by Ben on 2020-03-29.
//
#include <cstdint>
#include <algorithm>
#include "vectors.cpp"

typedef void(*function_type)();

void init_ctors();

void init_bss();

void init_data();

void __reset_handler() {
    /*Set the stack pointer*/
    asm("ldr   r0, =_estack");
    asm("mov   sp, r0      ");
    init_bss();
    init_ctors();
    init_data();
    asm("b main");

    while (true) {}
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