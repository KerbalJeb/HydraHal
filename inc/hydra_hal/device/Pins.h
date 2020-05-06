//
// Created by Ben on 2020-04-13.
//

#ifndef PINMAP_H
#define PINMAP_H

#include "peripheral_drivers/high_level_drivers/GpioPin.h"
#include "peripherals.h"

enum class PA0_AF : std::uint32_t {
    TIM2_CH1   = 0x1,
    TIM2_ETR   = 0x1,
    TIM5_CH1   = 0x2,
    USART2_CTS = 0x7,
};
using PA0  =  GpioPin<gpioa_addr, 0, PA0_AF>;
enum class PA1_AF : std::uint32_t {
    TIM2_CH2   = 0x1,
    TIM5_CH2   = 0x2,
    I2S4_SD    = 0x5,
    SPI4_MOSI  = 0x5,
    USART2_RTS = 0x7,
};
using PA1  =  GpioPin<gpioa_addr, 1, PA1_AF>;
enum class PA2_AF : std::uint32_t {
    TIM2_CH3  = 0x1,
    TIM5_CH3  = 0x2,
    TIM9_CH1  = 0x3,
    I2S_CKIN  = 0x5,
    USART2_TX = 0x7,
};
using PA2  =  GpioPin<gpioa_addr, 2, PA2_AF>;
enum class PA3_AF : std::uint32_t {
    TIM2_CH4  = 0x1,
    TIM5_CH4  = 0x2,
    TIM9_CH2  = 0x3,
    I2S2_MCK  = 0x5,
    USART2_RX = 0x7,
};
using PA3  =  GpioPin<gpioa_addr, 3, PA3_AF>;
enum class PA4_AF : std::uint32_t {
    I2S1_WS   = 0x5,
    SPI1_NSS  = 0x5,
    I2S3_WS   = 0x6,
    SPI3_NSS  = 0x6,
    USART2_CK = 0x7,
};
using PA4  =  GpioPin<gpioa_addr, 4, PA4_AF>;
enum class PA5_AF : std::uint32_t {
    TIM2_CH1 = 0x1,
    TIM2_ETR = 0x1,
    I2S1_CK  = 0x5,
    SPI1_SCK = 0x5,
};
using PA5  =  GpioPin<gpioa_addr, 5, PA5_AF>;
enum class PA6_AF : std::uint32_t {
    TIM1_BKIN = 0x1,
    TIM3_CH1  = 0x2,
    SPI1_MISO = 0x5,
    I2S2_MCK  = 0x6,
};
using PA6  =  GpioPin<gpioa_addr, 6, PA6_AF>;
enum class PA7_AF : std::uint32_t {
    TIM1_CH1N = 0x1,
    TIM3_CH2  = 0x2,
    I2S1_SD   = 0x5,
    SPI1_MOSI = 0x5,
};
using PA7  =  GpioPin<gpioa_addr, 7, PA7_AF>;
enum class PA8_AF : std::uint32_t {
    RCC_MCO_1      = 0x0,
    TIM1_CH1       = 0x1,
    I2C3_SCL       = 0x4,
    USART1_CK      = 0x7,
    USB_OTG_FS_SOF = 0xa,
};
using PA8  =  GpioPin<gpioa_addr, 8, PA8_AF>;
enum class PA9_AF : std::uint32_t {
    TIM1_CH2        = 0x1,
    I2C3_SMBA       = 0x4,
    USART1_TX       = 0x7,
    USB_OTG_FS_VBUS = 0xa,
};
using PA9  =  GpioPin<gpioa_addr, 9, PA9_AF>;
enum class PA10_AF : std::uint32_t {
    TIM1_CH3      = 0x1,
    I2S5_SD       = 0x6,
    SPI5_MOSI     = 0x6,
    USART1_RX     = 0x7,
    USB_OTG_FS_ID = 0xa,
};
using PA10 =  GpioPin<gpioa_addr, 10, PA10_AF>;
enum class PA11_AF : std::uint32_t {
    TIM1_CH4      = 0x1,
    SPI4_MISO     = 0x6,
    USART1_CTS    = 0x7,
    USART6_TX     = 0x8,
    USB_OTG_FS_DM = 0xa,
};
using PA11 =  GpioPin<gpioa_addr, 11, PA11_AF>;
enum class PA12_AF : std::uint32_t {
    TIM1_ETR      = 0x1,
    SPI5_MISO     = 0x6,
    USART1_RTS    = 0x7,
    USART6_RX     = 0x8,
    USB_OTG_FS_DP = 0xa,
};
using PA12 =  GpioPin<gpioa_addr, 12, PA12_AF>;
enum class PA13_AF : std::uint32_t {
    SYS_JTMS_SWDIO = 0x0,
};
using PA13 =  GpioPin<gpioa_addr, 13, PA13_AF>;
enum class PA14_AF : std::uint32_t {
    SYS_JTCK_SWCLK = 0x0,
};
using PA14 =  GpioPin<gpioa_addr, 14, PA14_AF>;
enum class PA15_AF : std::uint32_t {
    SYS_JTDI  = 0x0,
    TIM2_CH1  = 0x1,
    TIM2_ETR  = 0x1,
    I2S1_WS   = 0x5,
    SPI1_NSS  = 0x5,
    I2S3_WS   = 0x6,
    SPI3_NSS  = 0x6,
    USART1_TX = 0x7,
};
using PA15 =  GpioPin<gpioa_addr, 15, PA15_AF>;
enum class PB0_AF : std::uint32_t {
    TIM1_CH2N = 0x1,
    TIM3_CH3  = 0x2,
    I2S5_CK   = 0x6,
    SPI5_SCK  = 0x6,
};
using PB0  =  GpioPin<gpiob_addr, 0, PB0_AF>;
enum class PB1_AF : std::uint32_t {
    TIM1_CH3N = 0x1,
    TIM3_CH4  = 0x2,
    I2S5_WS   = 0x6,
    SPI5_NSS  = 0x6,
};
using PB1  =  GpioPin<gpiob_addr, 1, PB1_AF>;
enum class PB2_AF : std::uint32_t {
};
using PB2  =  GpioPin<gpiob_addr, 2, PB2_AF>;
enum class PB3_AF : std::uint32_t {
    SYS_JTDO_SWO = 0x0,
    TIM2_CH2     = 0x1,
    I2S1_CK      = 0x5,
    SPI1_SCK     = 0x5,
    I2S3_CK      = 0x6,
    SPI3_SCK     = 0x6,
    USART1_RX    = 0x7,
    I2C2_SDA     = 0x9,
};
using PB3  =  GpioPin<gpiob_addr, 3, PB3_AF>;
enum class PB4_AF : std::uint32_t {
    SYS_JTRST   = 0x0,
    TIM3_CH1    = 0x2,
    SPI1_MISO   = 0x5,
    SPI3_MISO   = 0x6,
    I2S3_ext_SD = 0x7,
    I2C3_SDA    = 0x9,
};
using PB4  =  GpioPin<gpiob_addr, 4, PB4_AF>;
enum class PB5_AF : std::uint32_t {
    TIM3_CH2  = 0x2,
    I2C1_SMBA = 0x4,
    I2S1_SD   = 0x5,
    SPI1_MOSI = 0x5,
    I2S3_SD   = 0x6,
    SPI3_MOSI = 0x6,
};
using PB5  =  GpioPin<gpiob_addr, 5, PB5_AF>;
enum class PB6_AF : std::uint32_t {
    TIM4_CH1  = 0x2,
    I2C1_SCL  = 0x4,
    USART1_TX = 0x7,
};
using PB6  =  GpioPin<gpiob_addr, 6, PB6_AF>;
enum class PB7_AF : std::uint32_t {
    TIM4_CH2  = 0x2,
    I2C1_SDA  = 0x4,
    USART1_RX = 0x7,
};
using PB7  =  GpioPin<gpiob_addr, 7, PB7_AF>;
enum class PB8_AF : std::uint32_t {
    TIM4_CH3  = 0x2,
    TIM10_CH1 = 0x3,
    I2C1_SCL  = 0x4,
    I2S5_SD   = 0x6,
    SPI5_MOSI = 0x6,
    I2C3_SDA  = 0x9,
};
using PB8  =  GpioPin<gpiob_addr, 8, PB8_AF>;
enum class PB9_AF : std::uint32_t {
    TIM4_CH4  = 0x2,
    TIM11_CH1 = 0x3,
    I2C1_SDA  = 0x4,
    I2S2_WS   = 0x5,
    SPI2_NSS  = 0x5,
    I2C2_SDA  = 0x9,
};
using PB9  =  GpioPin<gpiob_addr, 9, PB9_AF>;
enum class PB10_AF : std::uint32_t {
    TIM2_CH3 = 0x1,
    I2C2_SCL = 0x4,
    I2S2_CK  = 0x5,
    SPI2_SCK = 0x5,
    I2S3_MCK = 0x6,
};
using PB10 =  GpioPin<gpiob_addr, 10, PB10_AF>;
enum class PB12_AF : std::uint32_t {
    TIM1_BKIN = 0x1,
    I2C2_SMBA = 0x4,
    I2S2_WS   = 0x5,
    SPI2_NSS  = 0x5,
    I2S4_WS   = 0x6,
    SPI4_NSS  = 0x6,
    I2S3_CK   = 0x7,
    SPI3_SCK  = 0x7,
};
using PB12 =  GpioPin<gpiob_addr, 12, PB12_AF>;
enum class PB13_AF : std::uint32_t {
    TIM1_CH1N = 0x1,
    I2S2_CK   = 0x5,
    SPI2_SCK  = 0x5,
    I2S4_CK   = 0x6,
    SPI4_SCK  = 0x6,
};
using PB13 =  GpioPin<gpiob_addr, 13, PB13_AF>;
enum class PB14_AF : std::uint32_t {
    TIM1_CH2N   = 0x1,
    SPI2_MISO   = 0x5,
    I2S2_ext_SD = 0x6,
};
using PB14 =  GpioPin<gpiob_addr, 14, PB14_AF>;
enum class PB15_AF : std::uint32_t {
    RTC_REFIN = 0x0,
    TIM1_CH3N = 0x1,
    I2S2_SD   = 0x5,
    SPI2_MOSI = 0x5,
};
using PB15 =  GpioPin<gpiob_addr, 15, PB15_AF>;
enum class PC0_AF : std::uint32_t {
};
using PC0  =  GpioPin<gpioc_addr, 0, PC0_AF>;
enum class PC1_AF : std::uint32_t {
};
using PC1  =  GpioPin<gpioc_addr, 1, PC1_AF>;
enum class PC2_AF : std::uint32_t {
    SPI2_MISO   = 0x5,
    I2S2_ext_SD = 0x6,
};
using PC2  =  GpioPin<gpioc_addr, 2, PC2_AF>;
enum class PC3_AF : std::uint32_t {
    I2S2_SD   = 0x5,
    SPI2_MOSI = 0x5,
};
using PC3  =  GpioPin<gpioc_addr, 3, PC3_AF>;
enum class PC4_AF : std::uint32_t {
};
using PC4  =  GpioPin<gpioc_addr, 4, PC4_AF>;
enum class PC5_AF : std::uint32_t {
};
using PC5  =  GpioPin<gpioc_addr, 5, PC5_AF>;
enum class PC6_AF : std::uint32_t {
    TIM3_CH1  = 0x2,
    I2S2_MCK  = 0x5,
    USART6_TX = 0x8,
};
using PC6  =  GpioPin<gpioc_addr, 6, PC6_AF>;
enum class PC7_AF : std::uint32_t {
    TIM3_CH2  = 0x2,
    I2S2_CK   = 0x5,
    SPI2_SCK  = 0x5,
    I2S3_MCK  = 0x6,
    USART6_RX = 0x8,
};
using PC7  =  GpioPin<gpioc_addr, 7, PC7_AF>;
enum class PC8_AF : std::uint32_t {
    TIM3_CH3  = 0x2,
    USART6_CK = 0x8,
};
using PC8  =  GpioPin<gpioc_addr, 8, PC8_AF>;
enum class PC9_AF : std::uint32_t {
    RCC_MCO_2 = 0x0,
    TIM3_CH4  = 0x2,
    I2C3_SDA  = 0x4,
    I2S_CKIN  = 0x5,
};
using PC9  =  GpioPin<gpioc_addr, 9, PC9_AF>;
enum class PC10_AF : std::uint32_t {
    I2S3_CK  = 0x6,
    SPI3_SCK = 0x6,
};
using PC10 =  GpioPin<gpioc_addr, 10, PC10_AF>;
enum class PC11_AF : std::uint32_t {
    I2S3_ext_SD = 0x5,
    SPI3_MISO   = 0x6,
};
using PC11 =  GpioPin<gpioc_addr, 11, PC11_AF>;
enum class PC12_AF : std::uint32_t {
    I2S3_SD   = 0x6,
    SPI3_MOSI = 0x6,
};
using PC12 =  GpioPin<gpioc_addr, 12, PC12_AF>;
enum class PC13_AF : std::uint32_t {
};
using PC13 =  GpioPin<gpioc_addr, 13, PC13_AF>;
enum class PC14_AF : std::uint32_t {
};
using PC14 =  GpioPin<gpioc_addr, 14, PC14_AF>;
enum class PC15_AF : std::uint32_t {
};
using PC15 =  GpioPin<gpioc_addr, 15, PC15_AF>;
enum class PD0_AF : std::uint32_t {
};
using PD0  =  GpioPin<gpiod_addr, 0, PD0_AF>;
enum class PD1_AF : std::uint32_t {
};
using PD1  =  GpioPin<gpiod_addr, 1, PD1_AF>;
enum class PD2_AF : std::uint32_t {
    TIM3_ETR = 0x2,
};
using PD2  =  GpioPin<gpiod_addr, 2, PD2_AF>;
enum class PD3_AF : std::uint32_t {
    I2S2_CK    = 0x5,
    SPI2_SCK   = 0x5,
    USART2_CTS = 0x7,
};
using PD3  =  GpioPin<gpiod_addr, 3, PD3_AF>;
enum class PD4_AF : std::uint32_t {
    USART2_RTS = 0x7,
};
using PD4  =  GpioPin<gpiod_addr, 4, PD4_AF>;
enum class PD5_AF : std::uint32_t {
    USART2_TX = 0x7,
};
using PD5  =  GpioPin<gpiod_addr, 5, PD5_AF>;
enum class PD6_AF : std::uint32_t {
    I2S3_SD   = 0x5,
    SPI3_MOSI = 0x5,
    USART2_RX = 0x7,
};
using PD6  =  GpioPin<gpiod_addr, 6, PD6_AF>;
enum class PD7_AF : std::uint32_t {
    USART2_CK = 0x7,
};
using PD7  =  GpioPin<gpiod_addr, 7, PD7_AF>;
enum class PD8_AF : std::uint32_t {
};
using PD8  =  GpioPin<gpiod_addr, 8, PD8_AF>;
enum class PD9_AF : std::uint32_t {
};
using PD9  =  GpioPin<gpiod_addr, 9, PD9_AF>;
enum class PD10_AF : std::uint32_t {
};
using PD10 =  GpioPin<gpiod_addr, 10, PD10_AF>;
enum class PD11_AF : std::uint32_t {
};
using PD11 =  GpioPin<gpiod_addr, 11, PD11_AF>;
enum class PD12_AF : std::uint32_t {
    TIM4_CH1 = 0x2,
};
using PD12 =  GpioPin<gpiod_addr, 12, PD12_AF>;
enum class PD13_AF : std::uint32_t {
    TIM4_CH2 = 0x2,
};
using PD13 =  GpioPin<gpiod_addr, 13, PD13_AF>;
enum class PD14_AF : std::uint32_t {
    TIM4_CH3 = 0x2,
};
using PD14 =  GpioPin<gpiod_addr, 14, PD14_AF>;
enum class PD15_AF : std::uint32_t {
    TIM4_CH4 = 0x2,
};
using PD15 =  GpioPin<gpiod_addr, 15, PD15_AF>;
enum class PE0_AF : std::uint32_t {
    TIM4_ETR = 0x2,
};
using PE0  =  GpioPin<gpioe_addr, 0, PE0_AF>;
enum class PE1_AF : std::uint32_t {
};
using PE1  =  GpioPin<gpioe_addr, 1, PE1_AF>;
enum class PE2_AF : std::uint32_t {
    SYS_TRACECLK = 0x0,
    I2S4_CK      = 0x5,
    SPI4_SCK     = 0x5,
    I2S5_CK      = 0x6,
    SPI5_SCK     = 0x6,
};
using PE2  =  GpioPin<gpioe_addr, 2, PE2_AF>;
enum class PE3_AF : std::uint32_t {
    SYS_TRACED0 = 0x0,
};
using PE3  =  GpioPin<gpioe_addr, 3, PE3_AF>;
enum class PE4_AF : std::uint32_t {
    SYS_TRACED1 = 0x0,
    I2S4_WS     = 0x5,
    SPI4_NSS    = 0x5,
    I2S5_WS     = 0x6,
    SPI5_NSS    = 0x6,
};
using PE4  =  GpioPin<gpioe_addr, 4, PE4_AF>;
enum class PE5_AF : std::uint32_t {
    SYS_TRACED2 = 0x0,
    TIM9_CH1    = 0x3,
    SPI4_MISO   = 0x5,
    SPI5_MISO   = 0x6,
};
using PE5  =  GpioPin<gpioe_addr, 5, PE5_AF>;
enum class PE6_AF : std::uint32_t {
    SYS_TRACED3 = 0x0,
    TIM9_CH2    = 0x3,
    I2S4_SD     = 0x5,
    SPI4_MOSI   = 0x5,
    I2S5_SD     = 0x6,
    SPI5_MOSI   = 0x6,
};
using PE6  =  GpioPin<gpioe_addr, 6, PE6_AF>;
enum class PE7_AF : std::uint32_t {
    TIM1_ETR = 0x1,
};
using PE7  =  GpioPin<gpioe_addr, 7, PE7_AF>;
enum class PE8_AF : std::uint32_t {
    TIM1_CH1N = 0x1,
};
using PE8  =  GpioPin<gpioe_addr, 8, PE8_AF>;
enum class PE9_AF : std::uint32_t {
    TIM1_CH1 = 0x1,
};
using PE9  =  GpioPin<gpioe_addr, 9, PE9_AF>;
enum class PE10_AF : std::uint32_t {
    TIM1_CH2N = 0x1,
};
using PE10 =  GpioPin<gpioe_addr, 10, PE10_AF>;
enum class PE11_AF : std::uint32_t {
    TIM1_CH2 = 0x1,
    I2S4_WS  = 0x5,
    SPI4_NSS = 0x5,
    I2S5_WS  = 0x6,
    SPI5_NSS = 0x6,
};
using PE11 =  GpioPin<gpioe_addr, 11, PE11_AF>;
enum class PE12_AF : std::uint32_t {
    TIM1_CH3N = 0x1,
    I2S4_CK   = 0x5,
    SPI4_SCK  = 0x5,
    I2S5_CK   = 0x6,
    SPI5_SCK  = 0x6,
};
using PE12 =  GpioPin<gpioe_addr, 12, PE12_AF>;
enum class PE13_AF : std::uint32_t {
    TIM1_CH3  = 0x1,
    SPI4_MISO = 0x5,
    SPI5_MISO = 0x6,
};
using PE13 =  GpioPin<gpioe_addr, 13, PE13_AF>;
enum class PE14_AF : std::uint32_t {
    TIM1_CH4  = 0x1,
    I2S4_SD   = 0x5,
    SPI4_MOSI = 0x5,
    I2S5_SD   = 0x6,
    SPI5_MOSI = 0x6,
};
using PE14 =  GpioPin<gpioe_addr, 14, PE14_AF>;
enum class PE15_AF : std::uint32_t {
    TIM1_BKIN = 0x1,
};
using PE15 =  GpioPin<gpioe_addr, 15, PE15_AF>;
enum class PH0_AF : std::uint32_t {
};
using PH0  =  GpioPin<gpioh_addr, 0, PH0_AF>;
enum class PH1_AF : std::uint32_t {
};
using PH1  =  GpioPin<gpioh_addr, 1, PH1_AF>;


#endif //PINMAP_H
