//
// Created by Ben on 2020-04-13.
//

#ifndef PERPHERAL_MAP_H
#define PERPHERAL_MAP_H

#include <cstdint>
#include "peripheral_drivers/register_mapping/ResetClockControl.h"

constexpr std::uintptr_t gpioa_addr = 0x40020000;
constexpr std::uintptr_t gpiob_addr = 0x40020400;
constexpr std::uintptr_t gpioc_addr = 0x40020800;
constexpr std::uintptr_t gpiod_addr = 0x40020C00;
constexpr std::uintptr_t gpioe_addr = 0x40021000;
constexpr std::uintptr_t gpioh_addr = 0x40021C00;

constexpr std::uint32_t rcc_addr = 0x40023800;

auto &Gpioa = *reinterpret_cast<GpioPortRegisters *>(gpioa_addr);
auto &Gpiob = *reinterpret_cast<GpioPortRegisters *>(gpiob_addr);
auto &Gpioc = *reinterpret_cast<GpioPortRegisters *>(gpioc_addr);
auto &Gpiod = *reinterpret_cast<GpioPortRegisters *>(gpiod_addr);
auto &Gpioe = *reinterpret_cast<GpioPortRegisters *>(gpioe_addr);
auto &Gpioh = *reinterpret_cast<GpioPortRegisters *>(gpioh_addr);

auto &Rcc = *reinterpret_cast<RccRegisters *>(rcc_addr);

#endif //PERPHERAL_MAP_H
