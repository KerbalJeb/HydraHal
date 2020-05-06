#ifndef RCC_H
#define RCC_H

#include "bit_fields.h"

class RccRegisters {
    /*CR*/
    union {
        std::uint32_t                         raw_cr;
        const bit_field<std::uint32_t, 1, 27> plli2srdy;
        bit_field<std::uint32_t, 1, 26>       plli2son;
        const bit_field<std::uint32_t, 1, 25> pllrdy;
        bit_field<std::uint32_t, 1, 24>       pllon;
        bit_field<std::uint32_t, 1, 19>       csson;
        bit_field<std::uint32_t, 1, 18>       hsebyp;
        const bit_field<std::uint32_t, 1, 17> hserdy;
        bit_field<std::uint32_t, 1, 16>       hseon;
        const bit_field<std::uint32_t, 8, 8>  hsical;
        bit_field<std::uint32_t, 5, 3>        hsitrim;
        const bit_field<std::uint32_t, 1, 1>  hsirdy;
        bit_field<std::uint32_t, 1, 0>        hsion;
    };
    /*PLLCFGR*/
    union {
        std::uint32_t                   raw_pllcfgr;
        bit_field<std::uint32_t, 1, 27> pllq3;
        bit_field<std::uint32_t, 1, 26> pllq2;
        bit_field<std::uint32_t, 1, 25> pllq1;
        bit_field<std::uint32_t, 1, 24> pllq0;
        bit_field<std::uint32_t, 1, 22> pllsrc;
        bit_field<std::uint32_t, 1, 17> pllp1;
        bit_field<std::uint32_t, 1, 16> pllp0;
        bit_field<std::uint32_t, 1, 14> plln8;
        bit_field<std::uint32_t, 1, 13> plln7;
        bit_field<std::uint32_t, 1, 12> plln6;
        bit_field<std::uint32_t, 1, 11> plln5;
        bit_field<std::uint32_t, 1, 10> plln4;
        bit_field<std::uint32_t, 1, 9>  plln3;
        bit_field<std::uint32_t, 1, 8>  plln2;
        bit_field<std::uint32_t, 1, 7>  plln1;
        bit_field<std::uint32_t, 1, 6>  plln0;
        bit_field<std::uint32_t, 1, 5>  pllm5;
        bit_field<std::uint32_t, 1, 4>  pllm4;
        bit_field<std::uint32_t, 1, 3>  pllm3;
        bit_field<std::uint32_t, 1, 2>  pllm2;
        bit_field<std::uint32_t, 1, 1>  pllm1;
        bit_field<std::uint32_t, 1, 0>  pllm0;
    };
    /*CFGR*/
    enum class Mco2Values {
        System_Clk        = 0,
        PhaseLockedI2S    = 1,
        HighSpeedExternal = 2,
        PhaseLocked       = 3,
    };
    enum class Mco1Values {
        HighSpeedInternal = 0,
        LowSpeedExternal  = 1,
        HighSpeedExternal = 2,
        PhaseLocked       = 3,
    };
    enum class SystemClockSwitch {
        HighSpeedInternal = 0,
        HighSpeedExternal = 1,
        PhaseLocked       = 2,
    };
    union {
        std::uint32_t                        raw_cfgr;
        bit_field<Mco2Values, 2, 30>         mco2;
        bit_field<std::uint32_t, 3, 27>      mco2pre;
        bit_field<std::uint32_t, 3, 24>      mco1pre;
        bit_field<std::uint32_t, 1, 23>      i2ssrc;
        bit_field<Mco1Values, 2, 21>         mco1;
        bit_field<std::uint32_t, 5, 16>      rtcpre;
        bit_field<std::uint32_t, 3, 13>      ppre2;
        bit_field<std::uint32_t, 3, 10>      ppre1;
        bit_field<std::uint32_t, 4, 4>       hpre;
        const bit_field<std::uint32_t, 1, 3> sws1;
        const bit_field<std::uint32_t, 1, 2> sws0;
        bit_field<SystemClockSwitch, 1, 1>   sw1;
        bit_field<SystemClockSwitch, 1, 0>   sw0;
    };
    /*CIR*/
    union {
        std::uint32_t                        raw_cir;
        bit_field<std::uint32_t, 1, 23>      cssc;
        bit_field<std::uint32_t, 1, 21>      plli2srdyc;
        bit_field<std::uint32_t, 1, 20>      pllrdyc;
        bit_field<std::uint32_t, 1, 19>      hserdyc;
        bit_field<std::uint32_t, 1, 18>      hsirdyc;
        bit_field<std::uint32_t, 1, 17>      lserdyc;
        bit_field<std::uint32_t, 1, 16>      lsirdyc;
        bit_field<std::uint32_t, 1, 13>      plli2srdyie;
        bit_field<std::uint32_t, 1, 12>      pllrdyie;
        bit_field<std::uint32_t, 1, 11>      hserdyie;
        bit_field<std::uint32_t, 1, 10>      hsirdyie;
        bit_field<std::uint32_t, 1, 9>       lserdyie;
        bit_field<std::uint32_t, 1, 8>       lsirdyie;
        const bit_field<std::uint32_t, 1, 7> cssf;
        const bit_field<std::uint32_t, 1, 5> plli2srdyf;
        const bit_field<std::uint32_t, 1, 4> pllrdyf;
        const bit_field<std::uint32_t, 1, 3> hserdyf;
        const bit_field<std::uint32_t, 1, 2> hsirdyf;
        const bit_field<std::uint32_t, 1, 1> lserdyf;
        const bit_field<std::uint32_t, 1, 0> lsirdyf;
    };
    /*AHB1RSTR*/
    union {
        std::uint32_t                   raw_ahb1rstr;
        bit_field<std::uint32_t, 1, 22> dma2rst;
        bit_field<std::uint32_t, 1, 21> dma1rst;
        bit_field<std::uint32_t, 1, 12> crcrst;
        bit_field<std::uint32_t, 1, 7>  gpiohrst;
        bit_field<std::uint32_t, 1, 4>  gpioerst;
        bit_field<std::uint32_t, 1, 3>  gpiodrst;
        bit_field<std::uint32_t, 1, 2>  gpiocrst;
        bit_field<std::uint32_t, 1, 1>  gpiobrst;
        bit_field<std::uint32_t, 1, 0>  gpioarst;
    };
    /*AHB2RSTR*/
    union {
        std::uint32_t                  raw_ahb2rstr;
        bit_field<std::uint32_t, 1, 7> otgfsrst;
    };
private:
    std::uint32_t res0[2];
public:
    /*APB1RSTR*/
    union {
        std::uint32_t                   raw_apb1rstr;
        bit_field<std::uint32_t, 1, 28> pwrrst;
        bit_field<std::uint32_t, 1, 23> i2c3rst;
        bit_field<std::uint32_t, 1, 22> i2c2rst;
        bit_field<std::uint32_t, 1, 21> i2c1rst;
        bit_field<std::uint32_t, 1, 17> uart2rst;
        bit_field<std::uint32_t, 1, 15> spi3rst;
        bit_field<std::uint32_t, 1, 14> spi2rst;
        bit_field<std::uint32_t, 1, 11> wwdgrst;
        bit_field<std::uint32_t, 1, 3>  tim5rst;
        bit_field<std::uint32_t, 1, 2>  tim4rst;
        bit_field<std::uint32_t, 1, 1>  tim3rst;
        bit_field<std::uint32_t, 1, 0>  tim2rst;
    };
    /*APB2RSTR*/
    union {
        std::uint32_t                   raw_apb2rstr;
        bit_field<std::uint32_t, 1, 18> tim11rst;
        bit_field<std::uint32_t, 1, 17> tim10rst;
        bit_field<std::uint32_t, 1, 16> tim9rst;
        bit_field<std::uint32_t, 1, 14> syscfgrst;
        bit_field<std::uint32_t, 1, 12> spi1rst;
        bit_field<std::uint32_t, 1, 11> sdiorst;
        bit_field<std::uint32_t, 1, 8>  adcrst;
        bit_field<std::uint32_t, 1, 5>  usart6rst;
        bit_field<std::uint32_t, 1, 4>  usart1rst;
        bit_field<std::uint32_t, 1, 0>  tim1rst;
    };
private:
    std::uint32_t res1[2];
public:
    /*AHB1ENR*/
    union {
        std::uint32_t                   raw_ahb1enr;
        bit_field<std::uint32_t, 1, 22> dma2en;
        bit_field<std::uint32_t, 1, 21> dma1en;
        bit_field<std::uint32_t, 1, 12> crcen;
        bit_field<std::uint32_t, 1, 7>  gpiohen;
        bit_field<std::uint32_t, 1, 4>  gpioeen;
        bit_field<std::uint32_t, 1, 3>  gpioden;
        bit_field<std::uint32_t, 1, 2>  gpiocen;
        bit_field<std::uint32_t, 1, 1>  gpioben;
        bit_field<std::uint32_t, 1, 0>  gpioaen;
    };
    /*AHB2ENR*/
    union {
        std::uint32_t                  raw_ahb2enr;
        bit_field<std::uint32_t, 1, 7> otgfsen;
    };
private:
    std::uint32_t res2[2];
public:
    /*APB1ENR*/
    union {
        std::uint32_t                   raw_apb1enr;
        bit_field<std::uint32_t, 1, 28> pwren;
        bit_field<std::uint32_t, 1, 23> i2c3en;
        bit_field<std::uint32_t, 1, 22> i2c2en;
        bit_field<std::uint32_t, 1, 21> i2c1en;
        bit_field<std::uint32_t, 1, 17> usart2en;
        bit_field<std::uint32_t, 1, 15> spi3en;
        bit_field<std::uint32_t, 1, 14> spi2en;
        bit_field<std::uint32_t, 1, 11> wwdgen;
        bit_field<std::uint32_t, 1, 3>  tim5en;
        bit_field<std::uint32_t, 1, 2>  tim4en;
        bit_field<std::uint32_t, 1, 1>  tim3en;
        bit_field<std::uint32_t, 1, 0>  tim2en;
    };
    /*APB2ENR*/
    union {
        std::uint32_t                   raw_apb2enr;
        bit_field<std::uint32_t, 1, 0>  tim1en;
        bit_field<std::uint32_t, 1, 4>  usart1en;
        bit_field<std::uint32_t, 1, 5>  usart6en;
        bit_field<std::uint32_t, 1, 8>  adc1en;
        bit_field<std::uint32_t, 1, 11> sdioen;
        bit_field<std::uint32_t, 1, 12> spi1en;
        bit_field<std::uint32_t, 1, 13> spi4en;
        bit_field<std::uint32_t, 1, 14> syscfgen;
        bit_field<std::uint32_t, 1, 16> tim9en;
        bit_field<std::uint32_t, 1, 17> tim10en;
        bit_field<std::uint32_t, 1, 18> tim11en;
    };
private:
    std::uint32_t res3[2];
public:
    /*AHB1LPENR*/
    union {
        std::uint32_t                   raw_ahb1lpenr;
        bit_field<std::uint32_t, 1, 22> dma2lpen;
        bit_field<std::uint32_t, 1, 21> dma1lpen;
        bit_field<std::uint32_t, 1, 16> sram1lpen;
        bit_field<std::uint32_t, 1, 15> flitflpen;
        bit_field<std::uint32_t, 1, 12> crclpen;
        bit_field<std::uint32_t, 1, 7>  gpiohlpen;
        bit_field<std::uint32_t, 1, 4>  gpioelpen;
        bit_field<std::uint32_t, 1, 3>  gpiodlpen;
        bit_field<std::uint32_t, 1, 2>  gpioclpen;
        bit_field<std::uint32_t, 1, 1>  gpioblpen;
        bit_field<std::uint32_t, 1, 0>  gpioalpen;
    };
    /*AHB2LPENR*/
    union {
        std::uint32_t                  raw_ahb2lpenr;
        bit_field<std::uint32_t, 1, 7> otgfslpen;
    };
private:
    std::uint32_t res4[2];
public:
    /*APB1LPENR*/
    union {
        std::uint32_t                   raw_apb1lpenr;
        bit_field<std::uint32_t, 1, 28> pwrlpen;
        bit_field<std::uint32_t, 1, 23> i2c3lpen;
        bit_field<std::uint32_t, 1, 22> i2c2lpen;
        bit_field<std::uint32_t, 1, 21> i2c1lpen;
        bit_field<std::uint32_t, 1, 17> usart2lpen;
        bit_field<std::uint32_t, 1, 15> spi3lpen;
        bit_field<std::uint32_t, 1, 14> spi2lpen;
        bit_field<std::uint32_t, 1, 11> wwdglpen;
        bit_field<std::uint32_t, 1, 3>  tim5lpen;
        bit_field<std::uint32_t, 1, 2>  tim4lpen;
        bit_field<std::uint32_t, 1, 1>  tim3lpen;
        bit_field<std::uint32_t, 1, 0>  tim2lpen;
    };
    /*APB2LPENR*/
    union {
        std::uint32_t                   raw_apb2lpenr;
        bit_field<std::uint32_t, 1, 0>  tim1lpen;
        bit_field<std::uint32_t, 1, 4>  usart1lpen;
        bit_field<std::uint32_t, 1, 5>  usart6lpen;
        bit_field<std::uint32_t, 1, 8>  adc1lpen;
        bit_field<std::uint32_t, 1, 11> sdiolpen;
        bit_field<std::uint32_t, 1, 12> spi1lpen;
        bit_field<std::uint32_t, 1, 13> spi4lpen;
        bit_field<std::uint32_t, 1, 14> syscfglpen;
        bit_field<std::uint32_t, 1, 16> tim9lpen;
        bit_field<std::uint32_t, 1, 17> tim10lpen;
        bit_field<std::uint32_t, 1, 18> tim11lpen;
    };
private:
    std::uint32_t res5[2];
public:
    /*BDCR*/
    enum class RtcselValues {
        NoClock           = 0,
        LowSpeedExternal  = 1,
        LowSpeedInternal  = 2,
        HighSpeedExternal = 3,
    };
    union {
        std::uint32_t                        raw_bdcr;
        bit_field<std::uint32_t, 1, 16>      bdrst;
        bit_field<std::uint32_t, 1, 15>      rtcen;
        bit_field<RtcselValues, 2, 8>        rtcsel;
        bit_field<std::uint32_t, 1, 2>       lsebyp;
        const bit_field<std::uint32_t, 1, 1> lserdy;
        bit_field<std::uint32_t, 1, 0>       lseon;
    };
    /*CSR*/
    union {
        std::uint32_t                        raw_csr;
        bit_field<std::uint32_t, 1, 31>      lpwrrstf;
        bit_field<std::uint32_t, 1, 30>      wwdgrstf;
        bit_field<std::uint32_t, 1, 29>      wdgrstf;
        bit_field<std::uint32_t, 1, 28>      sftrstf;
        bit_field<std::uint32_t, 1, 27>      porrstf;
        bit_field<std::uint32_t, 1, 26>      padrstf;
        bit_field<std::uint32_t, 1, 25>      borrstf;
        bit_field<std::uint32_t, 1, 24>      rmvf;
        const bit_field<std::uint32_t, 1, 1> lsirdy;
        bit_field<std::uint32_t, 1, 0>       lsion;
    };
private:
    std::uint32_t res6[2];
public:
    /*SSCGR*/
    union {
        std::uint32_t                    raw_sscgr;
        bit_field<std::uint32_t, 1, 31>  sscgen;
        bit_field<std::uint32_t, 1, 30>  spreadsel;
        bit_field<std::uint32_t, 15, 13> incstep;
        bit_field<std::uint32_t, 13, 0>  modper;
    };
    /*PLLI2SCFGR*/
    union {
        std::uint32_t                   raw_plli2scfgr;
        bit_field<std::uint32_t, 3, 28> plli2srx;
        bit_field<std::uint32_t, 9, 6>  plli2snx;
    };
private:
    std::uint32_t res7[1];
public:
    /*DCKCFGR*/
    union {
        std::uint32_t                   raw_dckcfgr;
        bit_field<std::uint32_t, 1, 24> timpre;
    };
};

#endif