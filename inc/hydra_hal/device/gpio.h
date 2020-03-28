//
// Created by Ben on 2020-03-25.
//

#ifndef TESTS_GPIO_H
#define TESTS_GPIO_H

#include <pin.h>
#include <register_defs.h>

using namespace hydra::st::core;
namespace hydra::st::gpio {
    constexpr gpio_port gpioa{0x40020000, RCC::AHB1ENR::GPIOAEN};
    constexpr gpio_port gpiob{0x40020400, RCC::AHB1ENR::GPIOBEN};
    constexpr gpio_port gpioc{0x40020800, RCC::AHB1ENR::GPIOCEN};
    constexpr gpio_port gpiod{0x40020C00, RCC::AHB1ENR::GPIODEN};
    constexpr gpio_port gpioe{0x40021000, RCC::AHB1ENR::GPIOEEN};
    constexpr gpio_port gpioh{0x400210C0, RCC::AHB1ENR::GPIOHEN};

    constexpr gpio_pin PA0{gpioa, 0};
    constexpr gpio_pin PA1{gpioa, 1};
    constexpr gpio_pin PA2{gpioa, 2};
    constexpr gpio_pin PA3{gpioa, 3};
    constexpr gpio_pin PA4{gpioa, 4};
    constexpr gpio_pin PA5{gpioa, 5};
    constexpr gpio_pin PA6{gpioa, 6};
    constexpr gpio_pin PA7{gpioa, 7};
    constexpr gpio_pin PA8{gpioa, 8};
    constexpr gpio_pin PA9{gpioa, 9};
    constexpr gpio_pin PA10{gpioa, 10};
    constexpr gpio_pin PA11{gpioa, 11};
    constexpr gpio_pin PA12{gpioa, 12};
    constexpr gpio_pin PA13{gpioa, 13};
    constexpr gpio_pin PA14{gpioa, 14};
    constexpr gpio_pin PA15{gpioa, 15};
    constexpr gpio_pin PB0{gpiob, 0};
    constexpr gpio_pin PB1{gpiob, 1};
    constexpr gpio_pin PB2{gpiob, 2};
    constexpr gpio_pin PB3{gpiob, 3};
    constexpr gpio_pin PB4{gpiob, 4};
    constexpr gpio_pin PB5{gpiob, 5};
    constexpr gpio_pin PB6{gpiob, 6};
    constexpr gpio_pin PB7{gpiob, 7};
    constexpr gpio_pin PB8{gpiob, 8};
    constexpr gpio_pin PB9{gpiob, 9};
    constexpr gpio_pin PB10{gpiob, 10};
    constexpr gpio_pin PB12{gpiob, 12};
    constexpr gpio_pin PB13{gpiob, 13};
    constexpr gpio_pin PB14{gpiob, 14};
    constexpr gpio_pin PB15{gpiob, 15};
    constexpr gpio_pin PC0{gpioc, 0};
    constexpr gpio_pin PC1{gpioc, 1};
    constexpr gpio_pin PC2{gpioc, 2};
    constexpr gpio_pin PC3{gpioc, 3};
    constexpr gpio_pin PC4{gpioc, 4};
    constexpr gpio_pin PC5{gpioc, 5};
    constexpr gpio_pin PC6{gpioc, 6};
    constexpr gpio_pin PC7{gpioc, 7};
    constexpr gpio_pin PC8{gpioc, 8};
    constexpr gpio_pin PC9{gpioc, 9};
    constexpr gpio_pin PC10{gpioc, 10};
    constexpr gpio_pin PC11{gpioc, 11};
    constexpr gpio_pin PC12{gpioc, 12};
    constexpr gpio_pin PC13{gpioc, 13};
    constexpr gpio_pin PC14{gpioc, 14};
    constexpr gpio_pin PC15{gpioc, 15};
    constexpr gpio_pin PD0{gpiod, 0};
    constexpr gpio_pin PD1{gpiod, 1};
    constexpr gpio_pin PD2{gpiod, 2};
    constexpr gpio_pin PD3{gpiod, 3};
    constexpr gpio_pin PD4{gpiod, 4};
    constexpr gpio_pin PD5{gpiod, 5};
    constexpr gpio_pin PD6{gpiod, 6};
    constexpr gpio_pin PD7{gpiod, 7};
    constexpr gpio_pin PD8{gpiod, 8};
    constexpr gpio_pin PD9{gpiod, 9};
    constexpr gpio_pin PD10{gpiod, 10};
    constexpr gpio_pin PD11{gpiod, 11};
    constexpr gpio_pin PD12{gpiod, 12};
    constexpr gpio_pin PD13{gpiod, 13};
    constexpr gpio_pin PD14{gpiod, 14};
    constexpr gpio_pin PD15{gpiod, 15};
    constexpr gpio_pin PE0{gpioe, 0};
    constexpr gpio_pin PE1{gpioe, 1};
    constexpr gpio_pin PE2{gpioe, 2};
    constexpr gpio_pin PE3{gpioe, 3};
    constexpr gpio_pin PE4{gpioe, 4};
    constexpr gpio_pin PE5{gpioe, 5};
    constexpr gpio_pin PE6{gpioe, 6};
    constexpr gpio_pin PE7{gpioe, 7};
    constexpr gpio_pin PE8{gpioe, 8};
    constexpr gpio_pin PE9{gpioe, 9};
    constexpr gpio_pin PE10{gpioe, 10};
    constexpr gpio_pin PE11{gpioe, 11};
    constexpr gpio_pin PE12{gpioe, 12};
    constexpr gpio_pin PE13{gpioe, 13};
    constexpr gpio_pin PE14{gpioe, 14};
    constexpr gpio_pin PE15{gpioe, 15};
    constexpr gpio_pin PH0{gpioh, 0};
    constexpr gpio_pin PH1{gpioh, 1};

}
#endif //TESTS_GPIO_H
