#include <gpio.h>

auto led = hydra::st::gpio::PD15;

int main() {
    led.configure_pin_output();
    led.set_pin();
    while (1) {

    }
    return 0;
}
