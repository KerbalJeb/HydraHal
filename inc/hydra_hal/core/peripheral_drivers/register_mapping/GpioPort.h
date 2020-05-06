//
// Created by Ben on 2020-04-05.
//

#ifndef GPIOPORT_H
#define GPIOPORT_H

#include "bit_fields.h"

class GpioPortRegisters {
public:
    /*MODER*/
    enum class mode : std::uint32_t {
        Input = 0x0,
        Output,
        Alternate,
        Analog
    };
    union {
        bit_array<mode, 0x2, 0x10> moder;
        std::uint32_t              raw_moder;
    };

    /*OTYPER*/
    enum class output_type : std::uint32_t {
        PushPull = 0x0,
        OpenDrain
    };
    union {
        bit_array<output_type, 0x1, 0x10> otyper;
        std::uint32_t                     raw_otyper;
    };

    /*OSPEEDR*/
    enum class speed : std::uint32_t {
        Low = 0x0,
        Medium,
        High,
        VeryHigh
    };
    union {
        bit_array<speed, 0x2, 0x10> ospeedr;
        std::uint32_t               raw_ospeedr;
    };

    /*PUPDR*/
    enum class pupd : std::uint32_t {
        None = 0x0,
        PullUp,
        PullDown
    };
    union {
        bit_array<pupd, 0x2, 0x10> pupdr;
        std::uint32_t              raw_pupdr;
    };

    /*IDR*/
    union {
        const bit_array<std::uint32_t, 0x1, 0x10> idr;
        const std::uint32_t                       raw_idr;
    };
    /*ODR*/
    union {
        bit_array<std::uint32_t, 0x1, 0x10> odr;
        std::uint32_t                       raw_odr;
    };

    /*BSSR*/
    union {
        bit_array<std::uint32_t, 0x1, 0x10>       bsr;
        bit_array<std::uint32_t, 0x1, 0x10, 0x10> brr;
        std::uint32_t                             raw_bsrr;
    };

    /*LCKR*/
    enum class Lock : std::uint32_t {
        Unlocked = 0x0,
        Locked
    };
    union {
        bit_array<Lock, 0x1, 0x10> lckk;
        bit_field<Lock, 0x1, 0x10> lcky;
        std::uint32_t              raw_lcker;
    };

    /*AFR*/
    enum class alt_function : std::uint32_t {
        AF0 = 0x0,
        AF1,
        AF2,
        AF3,
        AF4,
        AF5,
        AF6,
        AF7,
        AF8,
        AF9,
        AF10,
        AF11,
        AF12,
        AF13,
        AF14,
        AF15
    };
    union {
        bit_array<alt_function, 0x4, 0x10> afr;
        std::uint32_t                      raw_afr[2];
    };
};

#endif //GPIOPORT_H
