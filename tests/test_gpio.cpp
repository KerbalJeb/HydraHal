//
// Created by Ben on 2020-03-25.
//
#include <cstdint>
#include <gtest/gtest.h>
#include <gpio_port.h>

using namespace hydra::st::core;

struct dummy_gpio_port {
    bool operator==(const dummy_gpio_port &rhs) const {
        return MODER == rhs.MODER &&
               OTYPER == rhs.OTYPER &&
               OSPEEDR == rhs.OSPEEDR &&
               PUPDR == rhs.PUPDR &&
               IDR == rhs.IDR &&
               ODR == rhs.ODR &&
               BSRR == rhs.BSRR &&
               LCKR == rhs.LCKR &&
               AFR[0] == rhs.AFR[0] &&
               AFR[1] == rhs.AFR[1];
    }

    std::uint32_t MODER;    /*!< GPIO port mode register,               Address offset: 0x00      */
    std::uint32_t OTYPER;   /*!< GPIO port output type register,        Address offset: 0x04      */
    std::uint32_t OSPEEDR;  /*!< GPIO port output speed register,       Address offset: 0x08      */
    std::uint32_t PUPDR;    /*!< GPIO port pull-up/pull-down register,  Address offset: 0x0C      */
    std::uint32_t IDR;      /*!< GPIO port input data register,         Address offset: 0x10      */
    std::uint32_t ODR;      /*!< GPIO port output data register,        Address offset: 0x14      */
    std::uint32_t BSRR;     /*!< GPIO port bit set/reset register,      Address offset: 0x18      */
    std::uint32_t LCKR;     /*!< GPIO port configuration lock register, Address offset: 0x1C      */
    std::uint32_t AFR[2];   /*!< GPIO alternate function registers,     Address offset: 0x20-0x24 */
};

class GpioPortTest : public testing::Test {
protected:
    void SetUp() override {
        dummy_port    = default_port;
        expected      = default_port;
        rcc_dummy_reg = 0x0;
    }

    dummy_gpio_port           dummy_port{};
    dummy_gpio_port           expected{};
    std::uint32_t             rcc_dummy_reg{};
    hydra::core::rw_bit_field rcc_dummy{reinterpret_cast<std::uintptr_t>(&rcc_dummy_reg), 0x1, 0x0};
    const gpio_port           port{reinterpret_cast<std::uintptr_t>(&dummy_port), rcc_dummy};

    const dummy_gpio_port default_port{
            0xDEADBEEF,
            0xBEEFBABE,
            0xBADDCAFE,
            0xC00010FF,
            0xCAFEBABE,
            0xCAFED00D,
            0xDEADFA11,
            0xFACEFEED,
            {
                    0xFEEDC0DE,
                    0xFFBADD11
            }
    };
};

TEST_F(GpioPortTest, GpioInit) {
    port.init();
    ASSERT_EQ(rcc_dummy_reg, 0x1);
}

TEST_F(GpioPortTest, GpioWrite) {

    port.write_pin(4, true);
    expected.ODR = 0xCAFED01D;
    ASSERT_EQ(expected, dummy_port);
    port.write_pin(4, false);
    expected.ODR = 0xCAFED00D;
    ASSERT_EQ(expected.ODR, dummy_port.ODR);
    ASSERT_EQ(expected, dummy_port);
}

TEST_F(GpioPortTest, GpioSet) {
    port.set_pin(8);
    expected.BSRR = 0x100;
    ASSERT_EQ(expected.BSRR, dummy_port.BSRR);
    ASSERT_EQ(expected, dummy_port);
}

TEST_F(GpioPortTest, GpioClear) {
    port.clear_pin(6);
    expected.BSRR = 0x00400000;
    ASSERT_EQ(expected.BSRR, dummy_port.BSRR);
    ASSERT_EQ(expected, dummy_port);
}

TEST_F(GpioPortTest, GpioToggle) {
    port.toggle_pin(11);
    expected.ODR = 0xCAFED80D;
    ASSERT_EQ(expected.ODR, dummy_port.ODR);
    ASSERT_EQ(expected, dummy_port);
}

TEST_F(GpioPortTest, GpioRead) {
    ASSERT_EQ(port.read_pin(4), true);
    ASSERT_EQ(port.read_pin(8), false);
}
