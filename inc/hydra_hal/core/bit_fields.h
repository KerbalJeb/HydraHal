//
// Created by Ben on 2020-04-05.
//

#ifndef BIT_FIELDS_H
#define BIT_FIELDS_H

#include <cstdint>
#include <type_traits>

template<typename T, std::size_t width, std::size_t offset, typename reg_type=volatile std::uint32_t>
struct bit_field {
private:
    reg_type                       internal_value;
    static constexpr std::uint32_t mask = ((1UL << width) - 1UL) << offset;
public:
    bit_field &operator=(T val) {
        auto int_val = static_cast<reg_type>(val) << offset;
        internal_value = (int_val & ~mask) | ((int_val & mask));

        return *this;
    }

    operator T() const {
        return static_cast<T>((internal_value & ((1UL << width) - 1UL)) >> offset);
    }
};

template<typename T, std::size_t width, typename reg_type=volatile std::uint32_t>
struct bit_field_ref {
public:
    explicit bit_field_ref(std::size_t offset, std::uintptr_t adder) : internal_value(
            *reinterpret_cast<reg_type *>(adder)),
                                                                       offset(offset), adder(adder) {}

    bit_field_ref &operator=(T val) {
        auto int_val = static_cast<reg_type>(val) << offset;
        internal_value = (int_val & ~mask) | ((int_val & mask));

        return *this;
    }

    operator T() const {
        return static_cast<T>((internal_value & ((1UL << width) - 1UL)) >> offset);
    }

private:
    reg_type       &internal_value;
    std::size_t    offset;
    std::size_t    mask = ((1UL << width) - 1UL) << offset;
    std::uintptr_t adder;
};

template<typename T, std::size_t width, std::size_t n, std::size_t offset = 0x0>
struct bit_array {
private:
    volatile T array[n * width < 32 ? 1 : (n * width / 32)];
public:

    bit_field_ref<T, width> operator[](std::size_t idx) const {
        return bit_field_ref<T, width>{idx * width + offset,
                                       reinterpret_cast<std::uintptr_t>(this) + ((idx * width + offset) / 32) * 4};
    }

    bit_field_ref<T, width> operator[](std::size_t idx) {
//        TODO: Remove code duplication
        return bit_field_ref<T, width>{idx * width + offset,
                                       reinterpret_cast<std::uintptr_t>(this) + ((idx * width + offset) / 32) * 4};
    }
};


#endif //BIT_FIELDS_H
