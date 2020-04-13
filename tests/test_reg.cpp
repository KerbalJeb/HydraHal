//
// Created by Ben on 2020-03-23.
//

#include <gtest/gtest.h>

using namespace hydra::core;

class BitFieldTest : public testing::Test {
protected:
    void SetUp() override {
        dummy_register = 0xDEADBEEF;
    }

    std::uint32_t dummy_register = 0x00;
    const std::uintptr_t base_addr = reinterpret_cast<std::uintptr_t>(&dummy_register);
    const ro_bit_field read_only{base_addr, 0xf, 0x4};
    const wo_bit_field write_only{base_addr, 0xf, 0x4};
    const rw_bit_field read_write{base_addr, 0xf, 0x4};
};

TEST_F(BitFieldTest, ReadOnly) {
    ASSERT_EQ(read_only, 0xE);
    ASSERT_EQ(dummy_register, 0xdeadbeef);
}

TEST_F(BitFieldTest, WriteOnly) {
    write_only = 0x1;
    ASSERT_EQ(dummy_register, 0x00000010);
}

TEST_F(BitFieldTest, ReadWrite) {
    ASSERT_EQ(read_write, 0xE);
    read_write = 0x1;
    ASSERT_EQ(read_write, 0x1);
    ASSERT_EQ(dummy_register, 0xDEADBE1F);
}

class BitFieldGroupTest : public testing::Test {
protected:
    void SetUp() override {
        dummy_registers[0] = 0xdeadbeef;
        dummy_registers[1] = 0xfacef00d;
        dummy_registers[2] = 0xfeedcafe;
        dummy_registers[3] = 0xdeafdace;
    }

    std::uint32_t dummy_registers[4] = {0xdeadbeef, 0xfacef00d, 0xfeedcafe, 0xdeafdace};
    std::uintptr_t base_addr = reinterpret_cast<std::uintptr_t>(&dummy_registers);
    const rw_bit_field_group<16> read_write{base_addr, 0x8};
    const ro_bit_field_group<16> read_only{base_addr, 0x8};
    const wo_bit_field_group<16> write_only{base_addr, 0x8};
};

TEST_F(BitFieldGroupTest, FirstRegRead) {
    ASSERT_EQ(read_only[0], 0xEF);
    ASSERT_EQ(read_only[1], 0xBE);
    ASSERT_EQ(read_only[2], 0xAD);
    ASSERT_EQ(read_only[3], 0xDE);
    ASSERT_EQ(dummy_registers[0], 0xdeadbeef);
    ASSERT_EQ(dummy_registers[1], 0xfacef00d);
    ASSERT_EQ(dummy_registers[2], 0xfeedcafe);
    ASSERT_EQ(dummy_registers[3], 0xdeafdace);
}

TEST_F(BitFieldGroupTest, FirstRegWrite) {
    write_only[2] = 0x1;
    ASSERT_EQ(dummy_registers[0], 0x00010000);
    ASSERT_EQ(dummy_registers[1], 0xfacef00d);
    ASSERT_EQ(dummy_registers[2], 0xfeedcafe);
    ASSERT_EQ(dummy_registers[3], 0xdeafdace);
}

TEST_F(BitFieldGroupTest, FirstRegReadWrite) {
    read_write[3] = 0x1;
    ASSERT_EQ(read_write[3], 0x1);
    ASSERT_EQ(dummy_registers[0], 0x01adbeef);
    ASSERT_EQ(dummy_registers[1], 0xfacef00d);
    ASSERT_EQ(dummy_registers[2], 0xfeedcafe);
    ASSERT_EQ(dummy_registers[3], 0xdeafdace);
}

TEST_F(BitFieldGroupTest, LastRegRead) {
    ASSERT_EQ(read_write[14], 0xaf);
    ASSERT_EQ(read_write[13], 0xda);
    ASSERT_EQ(dummy_registers[0], 0xdeadbeef);
    ASSERT_EQ(dummy_registers[1], 0xfacef00d);
    ASSERT_EQ(dummy_registers[2], 0xfeedcafe);
    ASSERT_EQ(dummy_registers[3], 0xdeafdace);
}