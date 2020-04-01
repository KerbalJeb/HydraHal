//
// Created by Ben on 2020-03-28.
//

#ifndef TESTS_CLOCK_CONFIG_H
#define TESTS_CLOCK_CONFIG_H

#include <cstdint>

/*!
 * The desired system clock speed
 */
constexpr std::uint32_t SYSTEM_CLOCK_SPEED = 96e6;

/*!
 * \brief The input clock speed (16e6 if using internal clock)
 */
constexpr std::uint32_t INPUT_CLOCK_SPEED = 8e6;
/*!
 * \brief Pre-scalar for the AHP clock
 */
constexpr std::uint32_t HCLK_PRESCALLER   = 0x00;

/*!
 * \brief Pre-scalar for the AHP1 clock
 */
constexpr std::uint32_t APB1_CLK_PRESCALER = 0x04;
/*!
 * \brief Pre-scalar for the AHP2 clock
 */
constexpr std::uint32_t APB2_CLK_PRESCALER = 0x00;
/*!
 * \brief Max flash latency in cycles, consult datasheet for necessary values (depends of voltage and clk freq.)
 */
constexpr std::uint32_t FLASH_WAIT_CYCLES  = 0x3;

constexpr bool USE_EXTERNAL_CLK = true;

#endif //TESTS_CLOCK_CONFIG_H
