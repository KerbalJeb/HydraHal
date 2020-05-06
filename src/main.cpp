#include "peripherals.h"
#include "Pins.h"


int main() {
    Rcc.gpioden = true;
    asm("nop");
    PD15::configure_output();
    PD15::set();

    while (1) {}

    return 0;
}
