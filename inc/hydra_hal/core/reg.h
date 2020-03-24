//
// Created by Ben on 2020-03-23.
//

#ifndef REG_H
#define REG_H

#include <cstdint>
#include <array>

namespace hydra::core {
    /*!
     * \brief A read-write bit field (specific segment withing a register)
     * @tparam T The base type of the registers (ex. uint32_t for 32 bit processors)
     */
    template<typename T>
    struct rw_bit_field {
        /*!
         * \brief Used to create constexpr registers so they shouldn't use up any ram to store internal data at runtime
         * @param base_address The address of the memory mapped IO register
         * @param mask The non-offset mask (ie. for a 2 bit wide field wide field this would be set to 0x3 or 0b11)
         * @param offset How many bytes from the lsb the field is
         */
        constexpr rw_bit_field(std::uintptr_t base_address, T mask, T offset) :
                base_address(base_address), mask(mask), offset(offset) {}

        inline void write(T data) const {
            auto reg = reinterpret_cast<volatile T *>(base_address);
            *reg = (*reg & ~(mask << offset)) | ((data & mask) << offset);
        }

        inline T read() const {
            auto reg = reinterpret_cast<volatile T *>(base_address);
            return (*reg & (mask << offset)) >> offset;
        }

    private:
        const std::uintptr_t base_address;
        const T mask;
        const T offset;

    };

    /*!
     * \brief A read only register, does not have a write member function
     * @tparam T
     */
    template<typename T>
    struct ro_bit_field {
        constexpr ro_bit_field(std::uintptr_t base_address, T mask, T offset) :
                base_address(base_address), mask(mask), offset(offset) {}

        T read() const {
            auto reg = reinterpret_cast<volatile T *>(base_address);
            return (*reg & (mask << offset)) >> offset;
        }

    private:
        const std::uintptr_t base_address;
        const T mask;
        const T offset;

    };

    /*!
     * \brief A write only register, does not have a read member function and will not attempt to read
     * from the register when witting to it.
     * @tparam T
     */
    template<typename T>
    struct wo_bit_field {
        constexpr wo_bit_field(std::uintptr_t base_address, T mask, T offset) :
                baseAddress(base_address), mask(mask), offset(offset) {}

        void write(T data) const {
            auto reg = reinterpret_cast<volatile T *>(baseAddress);
            *reg = (data & mask) << offset;
        }


    private:
        const std::uintptr_t baseAddress;
        const T mask;
        const T offset;

    };

    template<typename T, int i>
    using rw_bit_field_array = std::array<const rw_bit_field<T>, i>;

    template<typename T, int i>
    using ro_bit_field_array = std::array<ro_bit_field<T>, i>;

    template<typename T, int i>
    using wo_bit_field_array = std::array<wo_bit_field<T>, i>;
}
#endif //REG_H
