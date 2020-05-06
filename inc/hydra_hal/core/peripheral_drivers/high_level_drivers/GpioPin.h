//
// Created by Ben on 2020-04-12.
//

#ifndef PIN_H
#define PIN_H

#include <peripheral_drivers/register_mapping/GpioPort.h>

template<std::uintptr_t port_addr, std::size_t pin_idx, typename AF_ENUM=GpioPortRegisters::alt_function>
class GpioPin {
private:
    using reg_names = GpioPortRegisters;
    static inline auto &my_port = *reinterpret_cast<GpioPortRegisters *>(port_addr);
public:
    using alt = AF_ENUM;

    static void configure_output(reg_names::pupd pupd = reg_names::pupd::None,
                                 reg_names::output_type output_type = reg_names::output_type::PushPull,
                                 reg_names::speed speed = reg_names::speed::High) {
        my_port.moder[pin_idx]   = reg_names::mode::Output;
        my_port.pupdr[pin_idx]   = pupd;
        my_port.otyper[pin_idx]  = output_type;
        my_port.ospeedr[pin_idx] = speed;
    }

    static void configure_input(reg_names::pupd pupd = reg_names::pupd::None) {
        my_port.moder[pin_idx] = reg_names::mode::Input;
        my_port.pupdr[pin_idx] = pupd;
    }

    static void configure_alternate(alt alt_function,
                                    reg_names::pupd pupd = reg_names::pupd::None,
                                    reg_names::output_type output_type = reg_names::output_type::PushPull,
                                    reg_names::speed speed = reg_names::speed::High) {
        my_port.moder[pin_idx]   = reg_names::mode::Alternate;
        my_port.afr[pin_idx]     = static_cast<reg_names::alt_function>(static_cast<std::uint32_t>(alt_function));
        my_port.pupdr[pin_idx]   = pupd;
        my_port.otyper[pin_idx]  = output_type;
        my_port.ospeedr[pin_idx] = speed;
    }

    static bool read() {
        return (std::uint32_t) my_port.idr[pin_idx];
    }

    static void set() {
        my_port.bsr[pin_idx] = true;
    }

    static void clear() {
        my_port.brr[pin_idx] = true;
    }

    static void toggle() {
        my_port.odr[pin_idx] = !my_port.odr[pin_idx];
    }

    static void write(bool value) {
        my_port.odr[pin_idx] = value;
    }
};

#endif //TESTS_PIN_H
