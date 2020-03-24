//
// Created by Ben on 2020-03-23.
//

#include <reg.h>
#include <gtest/gtest.h>

using namespace hydra::core;

class BitFieldTest : public ::testing::Test {
protected:
    void SetUp() override {
        fake_register = 0xDEADBEEF;
    }

    std::uint32_t fake_register = 0x00;
    const std::uintptr_t base_addr = reinterpret_cast<std::uintptr_t>(&fake_register);
    const ro_bit_field<std::uint32_t> read_only{base_addr, 0xf, 0x4};
    const wo_bit_field<std::uint32_t> write_only{base_addr, 0xf, 0x4};
    const rw_bit_field<std::uint32_t> read_write{base_addr, 0xf, 0x4};
};

TEST_F(BitFieldTest, ReadOnly) {
    ASSERT_EQ(read_only.read(), 0xE);
    ASSERT_EQ(fake_register, 0xdeadbeef);
}

TEST_F(BitFieldTest, WriteOnly) {
    write_only.write(0x1);
    ASSERT_EQ(fake_register, 0x00000010);
}

TEST_F(BitFieldTest, ReadWrite) {
    ASSERT_EQ(read_write.read(), 0xE);
    read_write.write(0x1);
    ASSERT_EQ(read_write.read(), 0x1);
    ASSERT_EQ(fake_register, 0xDEADBE1F);
}
