//
// Created by Ben on 2020-03-23.
//

#ifndef REG_H
#define REG_H

#include <cstdint>
#include <array>
/*!
 * \brief Contains core types for the HAL that should be universal for all devices
 */
namespace hydra::core {
    /*!
     * \brief Base bit field class, should NEVER be used directly (does not have any member functions)
     */
    struct bit_field {
        /*!
         * \brief Used to create constexpr registers so they shouldn't use up any ram to store internal data at runtime
         * @param base_address The address of the memory mapped IO register
         * @param mask The non-offset mask (ie. for a 2 bit wide field wide field this would be set to 0x3 or 0b11)
         * @param offset How many bytes from the lsb the field is
         */
        constexpr bit_field(std::uintptr_t base_address, std::uint32_t mask, std::uint32_t offset) :
                base_address(base_address), mask(mask), offset(offset) {}

        /*!
         * \brief Default constructor, used so an 'empty' std::array of bit_fields can be created
         */
        constexpr bit_field() : base_address(0), mask(0), offset(0) {}

    protected:
        std::uintptr_t base_address;
        std::uint32_t mask;
        std::uint32_t offset;
    };

    /*!
     * \brief A read-write bit field (specific segment withing a register)
     */
    struct rw_bit_field : public bit_field {
        using bit_field::bit_field;

        inline void write(std::uint32_t data) const {
            auto reg = reinterpret_cast<volatile std::uint32_t *>(base_address);
            *reg = (*reg & ~(mask << offset)) | ((data & mask) << offset);
        }

        [[nodiscard]] inline std::uint32_t read() const {
            auto reg = reinterpret_cast<volatile std::uint32_t *>(base_address);
            return (*reg & (mask << offset)) >> offset;
        }
    };

    /*!
     * \brief A read only register, does not have a write member function
     */
    struct ro_bit_field : public bit_field {
        using bit_field::bit_field;

        [[nodiscard]] std::uint32_t read() const {
            auto reg = reinterpret_cast<volatile std::uint32_t *>(base_address);
            return (*reg & (mask << offset)) >> offset;
        }
    };

    /*!
     * \brief A write only register, does not have a read member function and will not attempt to read
     * from the register when witting to it.
     */
    struct wo_bit_field : public bit_field {
        using bit_field::bit_field;

        void write(std::uint32_t data) const {
            auto reg = reinterpret_cast<volatile std::uint32_t *>(base_address);
            *reg = (data & mask) << offset;
        }
    };

    /*!
     * \brief A group of sequential bit fields, can cover multiple registers
     * @tparam T Type of bit_field
     * @tparam N Number of bit_fields
     */
    template<typename T, std::size_t N>
    struct bit_field_bit_group {
        /*!
         * \brief Used to create a constexpr bit_field_bit_group so that no RAM is used for it's internal storage
         * @param base_addr The address of the register (will be auto incremented in multiple registers are covered)
         * @param width The number of bits per bit_field
         */
        constexpr bit_field_bit_group(std::uintptr_t base_addr, std::size_t width) {
            std::size_t offset = 0;

            for (auto &field: bit_fields) {
                field = T{base_addr + (offset / 32) * 4, (UINT32_C(1) << width) - 1, offset % 32};
                offset += width;
            }
        }

        /*!
         * \brief Writes to a particular bit field in a group
         * @param idx The index of the bit field to write to (starting from zero)
         * @param data The value to write (masked so bits outside of the register range are discared)
         */
        void write(std::size_t idx, std::uint32_t data) const {
            bit_fields.at(idx).write(data);
        }

        /*!
         * \brief Reads from a particular bit field in a group
         * @param idx The index of the bit field to read from (starting from zero)
         * @return
         */
        [[nodiscard]] std::uint32_t read(std::size_t idx) const {
            return bit_fields.at(idx).read();
        }

    private:
        std::array<T, N> bit_fields{};
    };


    template<std::size_t N>
    using rw_bit_field_group = bit_field_bit_group<rw_bit_field, N>;

    template<std::size_t N>
    using ro_bit_field_group = bit_field_bit_group<ro_bit_field, N>;

    template<std::size_t N>
    using wo_bit_field_group = bit_field_bit_group<wo_bit_field, N>;
}
#endif //REG_H
