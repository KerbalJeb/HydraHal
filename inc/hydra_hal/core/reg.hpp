/*
 * reg.hpp
 *
 *  Created on: Mar 3, 2020
 *      Author: Ben
 */

#ifndef REG_HPP_
#define REG_HPP_

#include<cstdint>

namespace {
    inline std::uint32_t _read(
            volatile std::uint32_t *reg,
            std::uint32_t mask,
            std::uint32_t offset) {
        return *reg;
    }

    inline void _write(
            volatile std::uint32_t *reg,
            std::uint32_t mask,
            std::uint32_t offset,
            std::uint32_t value) {
        *reg = (*reg & ~(mask << offset)) | ((value & mask) << offset);
    }
}

namespace hydra::core {
    struct ro_t {
        static inline std::uint32_t read(
                volatile std::uint32_t *reg,
                std::uint32_t mask,
                std::uint32_t offset) {
            return _read(reg, mask, offset);
        }
    };

    struct wo_t {
        static inline void write(
                volatile std::uint32_t *reg,
                std::uint32_t mask,
                std::uint32_t offset,
                std::uint32_t value) {
            *reg = (value & mask) << offset;
        }
    };

    struct rw_t {
        static inline void write(
                volatile std::uint32_t *reg,
                std::uint32_t mask,
                std::uint32_t offset,
                std::uint32_t value) {
            _write(reg, mask, offset, value);
        }

        static inline std::uint32_t read(
                volatile std::uint32_t *reg,
                std::uint32_t mask,
                std::uint32_t offset) {
            return ro_t::read(reg, mask, offset);
        }
    };

    template
            <
                    std::uint32_t base_address,
                    std::uint32_t mask,
                    std::uint32_t offset,
                    class mutability_policy
            >
    struct bit_field_t {
        template<typename T>
        inline static void write(T const value) {
            mutability_policy::write(
                    reinterpret_cast<volatile std::uint32_t *>(base_address),
                    mask,
                    offset,
                    static_cast<std::uint32_t>(value));
        }

        inline static std::uint32_t read() {
            return mutability_policy::read(
                    reinterpret_cast<volatile std::uint32_t *>(base_address),
                    mask,
                    offset);
        }
    };

    template
            <
                    std::uint32_t base_address,
                    std::uint32_t width,
                    std::uint32_t offset,
                    std::uint32_t total_fields,
                    class mutability_policy
            >
    struct bit_field_group_t {
        template<typename T>
        inline static void write(std::uint32_t idx, T const value) {
            mutability_policy::write(
                    reinterpret_cast<volatile std::uint32_t *>(base_address) + (idx * width / 32),
                    mask,
                    offset + idx * width,
                    static_cast<std::uint32_t>(value));
        }

        inline static std::uint32_t read(std::uint32_t idx) {
            return mutability_policy::read(
                    reinterpret_cast<volatile std::uint32_t *>(base_address) + (idx * width / 32),
                    mask,
                    offset + idx * width);
        }

    private:
        static constexpr std::uint32_t mask = (1 << width) - 1;
    };
}

#endif /* REG_HPP_ */
