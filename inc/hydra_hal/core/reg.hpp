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
        return (*reg & ~(mask << offset)) >> offset;
    }

    inline void _write(
            volatile std::uint32_t *reg,
            std::uint32_t mask,
            std::uint32_t offset,
            std::uint32_t value) {
        *reg = (*reg & ~(mask << offset)) | ((value & mask) << offset);
    }
}
/*!
 * \brief Contains basic types that should not need to be used directly
 */
namespace hydra::core {
    /*!
     * \brief Read only mutability
     */
    struct ro_t {
        static inline std::uint32_t read(
                volatile std::uint32_t *reg,
                std::uint32_t mask,
                std::uint32_t offset) {
            return _read(reg, mask, offset);
        }
    };

    /*!
     * \brief Write only mutability
     */
    struct wo_t {
        static inline void write(
                volatile std::uint32_t *reg,
                std::uint32_t mask,
                std::uint32_t offset,
                std::uint32_t value) {
            *reg = (value & mask) << offset;
        }
    };

    /*!
     * \brief Read-Write mutability
     */
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

    /*!
     * \brief Represents a single field in a peripheral register
     * @tparam base_address The base address of the register
     * @tparam mask Non offset bit mask
     * @tparam offset Offset of mask from zero bit
     * @tparam mutability_policy Provides read and/or write functions
     */
    template
            <
                    std::uint32_t base_address,
                    std::uint32_t mask,
                    std::uint32_t offset,
                    class mutability_policy
            >
    struct bit_field_t {
        /*!
         * \brief Writes to reg using mutability policy, templated to static cast to uint_32 to simplify writing with enums
         * @tparam T Type of value (must be castable to int)
         * @param value Value to write
         */
        template<typename T>
        inline static void write(T const value) {
            mutability_policy::write(
                    reinterpret_cast<volatile std::uint32_t *>(base_address),
                    mask,
                    offset,
                    static_cast<std::uint32_t>(value));
        }

        /*!
         * \brief Reads from reg using mutability policy
         * @return The value of the bit field (shifted to have zero offset)
         */
        inline static std::uint32_t read() {
            return mutability_policy::read(
                    reinterpret_cast<volatile std::uint32_t *>(base_address),
                    mask,
                    offset);
        }
    };

    /*!
     * \brief Used to represent a series of sequential bit fields (such as those in GPIO registers)
     * @tparam base_address The register base address
     * @tparam width The width of each field
     * @tparam offset The offset of the first field
     * @tparam total_fields The total number of fields
     * @tparam mutability_policy
     */
    template
            <
                    std::uint32_t base_address,
                    std::uint32_t width,
                    std::uint32_t offset,
                    std::uint32_t total_fields,
                    class mutability_policy
            >
    struct bit_field_group_t {
        /*!
         * \brief Writes to a single bit field in a block of sequential bit fields (ie. GPIO mode)
         * @tparam T
         * @param idx The index of the bit field to write to
         * @param value
         */
        template<typename T>
        inline static void write(std::uint32_t idx, T const value) {
            mutability_policy::write(
                    reinterpret_cast<volatile std::uint32_t *>(base_address) + (idx * width / 32),
                    mask,
                    offset + idx * width,
                    static_cast<std::uint32_t>(value));
        }

        /*!
         * \brief Reads from a single bit field in a block of sequential bit fields
         * @param idx The index of the bit field to read from
         * @return
         */
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
