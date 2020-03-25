//
// Created by Ben on 2020-03-24.
//

#ifndef TESTS_GPIO_PORT_H
#define TESTS_GPIO_PORT_H

#include <cstdint>
#include <reg.h>

namespace hydra::st {
    namespace gpio {
        enum class mode : std::uint32_t {
            input     = 0x0,
            output    = 0x1,
            alternate = 0x2
        };

        enum class speed : std::uint32_t {
            low       = 0x0,
            medium    = 0x1,
            high      = 0x2,
            very_high = 0x3
        };

        enum class pupd : std::uint32_t {
            none      = 0x0,
            pull_up   = 0x1,
            pull_down = 0x2
        };

        enum class alt_function : std::uint32_t {
            AF0  = 0x0,
            AF1  = 0x1,
            AF2  = 0x2,
            AF3  = 0x3,
            AF4  = 0x4,
            AF5  = 0x5,
            AF6  = 0x6,
            AF7  = 0x7,
            AF8  = 0x8,
            AF9  = 0x9,
            AF10 = 0xA,
            AF11 = 0xB,
            AF12 = 0xC,
            AF13 = 0xD,
            AF14 = 0xE,
            AF15 = 0xF
        };

        enum class output_type : std::uint32_t {
            push_pull  = 0x0,
            open_drain = 0x1
        };
    }

    namespace core {
        struct gpio_port {
            constexpr gpio_port(std::uintptr_t base_address, hydra::core::rw_bit_field rcc_enable) :
                    id(base_address & 0xff0), rcc_enable(rcc_enable), base_address(base_address) {}

            inline void init() const { rcc_enable.write(true); }

            inline void configure_pin_input(std::size_t pin_idx, gpio::pupd pupd = gpio::pupd::none) const {
                init();
                moder.write(pin_idx, 0x0);
                pupdr.write(pin_idx, static_cast<std::uint32_t >(pupd));
            }

            inline void configure_pin_output(std::size_t pin_idx, gpio::pupd pupd = gpio::pupd::none,
                                             gpio::output_type output_type = gpio::output_type::push_pull,
                                             gpio::speed speed = gpio::speed::high) const {
                init();
                moder.write(pin_idx, 0x1);
                pupdr.write(pin_idx, static_cast<std::uint32_t >(pupd));
                otyper.write(pin_idx, static_cast<std::uint32_t >(output_type));
                ospeedr.write(pin_idx, static_cast<std::uint32_t >(speed));
            }

            inline void configure_pin_alternate(std::size_t pin_idx,
                                                gpio::alt_function alt_function,
                                                gpio::pupd pupd = gpio::pupd::none,
                                                gpio::output_type output_type = gpio::output_type::push_pull,
                                                gpio::speed speed = gpio::speed::high) const {
                init();
                moder.write(pin_idx, 0x2);
                afr.write(pin_idx, static_cast<std::uint32_t>(alt_function));
                pupdr.write(pin_idx, static_cast<std::uint32_t>(pupd));
                otyper.write(pin_idx, static_cast<std::uint32_t>(output_type));
                ospeedr.write(pin_idx, static_cast<std::uint32_t>(speed));
            }

            [[nodiscard]] inline bool read_pin(std::size_t pin_idx) const {
                return idr.read(pin_idx);
            }

            inline void write_pin(std::size_t pin_idx, bool value) const {
                odr.write(pin_idx, value);
            }

            inline void set_pin(std::size_t pin_idx) const {
                bsr.write(pin_idx, true);
            }

            inline void clear_pin(std::size_t pin_idx) const {
                brr.write(pin_idx, true);
            }

            inline void toggle_pin(std::size_t pin_idx) const {
                odr.write(pin_idx, !odr.read(pin_idx));
            }

            const std::uint32_t id;
        private:

            hydra::core::rw_bit_field rcc_enable;

            std::uintptr_t base_address;
            std::uintptr_t MODER   = base_address + 0x00;
            std::uintptr_t OTYPER  = base_address + 0x04;
            std::uintptr_t OSPEEDR = base_address + 0x08;
            std::uintptr_t PUPDR   = base_address + 0x0C;
            std::uintptr_t IDR     = base_address + 0x10;
            std::uintptr_t ODR     = base_address + 0x14;
            std::uintptr_t BSRR    = base_address + 0x18;
            std::uintptr_t LCKR    = base_address + 0x1C;
            std::uintptr_t AFR     = base_address + 0x20;

            hydra::core::rw_bit_field_group<0x10> moder{MODER, 0x02};
            hydra::core::rw_bit_field_group<0x10> otyper{OTYPER, 0x01};
            hydra::core::rw_bit_field_group<0x10> ospeedr{OSPEEDR, 0x02};
            hydra::core::rw_bit_field_group<0x10> pupdr{PUPDR, 0x02};
            hydra::core::ro_bit_field_group<0x10> idr{IDR, 0x01};
            hydra::core::rw_bit_field_group<0x10> odr{ODR, 0x01};
            hydra::core::wo_bit_field_group<0x10> bsr{BSRR, 0x01};
            hydra::core::wo_bit_field_group<0x10> brr{BSRR, 0x01, 0x10};
            hydra::core::rw_bit_field_group<0x10> lckr{LCKR, 0x01};
            hydra::core::rw_bit_field_group<0x10> afr{AFR, 0x0F};
        };

    }
}

#endif //TESTS_GPIO_PORT_H
