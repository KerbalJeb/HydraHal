#include <gpio.h>

constexpr auto led = hydra::st::gpio::PD15;

static volatile int x = 75;

int main() {
    led.configure_pin_output();
    led.set_pin();

    while (1) {}

    return 0;
}
