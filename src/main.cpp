#include <GpioPort.h>
#include "register_defs.h"

auto &gpiod = *reinterpret_cast<GpioPortRegisters *>(0x40020C00);

int main() {
    RCC::AHB1ENR::GPIODEN = true;
    asm("nop");
    gpiod.moder[15] = GpioPortRegisters::mode::Output;
    gpiod.bsr[15]   = true;

    while (1) {}

    return 0;
}
