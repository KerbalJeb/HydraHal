//
// Created by Ben on 2020-03-25.
//

#ifndef TESTS_PIN_H
#define TESTS_PIN_H

#include <gpio_port.h>

namespace hydra::st::core {
    struct gpio_pin {
        constexpr gpio_pin(gpio_port port, std::size_t pin_id) : port(port), pin_id(pin_id) {}


        inline void configure_pin_input(gpio::pupd pupd = gpio::pupd::none) const {
            port.configure_pin_input(pin_id, pupd);
        }

        inline void configure_pin_output(gpio::pupd pupd = gpio::pupd::none,
                                         gpio::output_type output_type = gpio::output_type::push_pull,
                                         gpio::speed speed = gpio::speed::high) const {
            port.configure_pin_output(pin_id, pupd, output_type, speed);
        }

        inline void configure_pin_alternate(gpio::alt_function alt_function,
                                            gpio::pupd pupd = gpio::pupd::none,
                                            gpio::output_type output_type = gpio::output_type::push_pull,
                                            gpio::speed speed = gpio::speed::high) {
            port.configure_pin_alternate(pin_id, alt_function, pupd, output_type, speed);
        }

        [[nodiscard]] inline bool read_pin() const {
            return port.read_pin(pin_id);
        }

        inline void write_pin(bool value) const {
            port.write_pin(pin_id, value);
        }

        inline void set_pin() const {
            port.set_pin(pin_id);
        }

        inline void clear_pin() const {
            port.clear_pin(pin_id);
        }

        inline void toggle_pin() const {
            port.toggle_pin(pin_id);
        }

    private:
        gpio_port   port;
        std::size_t pin_id;
    public:
        const std::uint32_t id = pin_id | port.id;
    };

}

#endif //TESTS_PIN_H
