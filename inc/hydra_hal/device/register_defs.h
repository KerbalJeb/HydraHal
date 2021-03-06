#ifndef REG_DEF_HPP_
#define REG_DEF_HPP_

#include "reg.h"

using namespace hydra::core;

namespace ADC_Common {
    namespace CSR {
        constexpr ro_bit_field OVR3{0x40012300, 0x000001, 0x000015};
        constexpr ro_bit_field STRT3{0x40012300, 0x000001, 0x000014};
        constexpr ro_bit_field JSTRT3{0x40012300, 0x000001, 0x000013};
        constexpr ro_bit_field JEOC3{0x40012300, 0x000001, 0x000012};
        constexpr ro_bit_field EOC3{0x40012300, 0x000001, 0x000011};
        constexpr ro_bit_field AWD3{0x40012300, 0x000001, 0x000010};
        constexpr ro_bit_field OVR2{0x40012300, 0x000001, 0x00000d};
        constexpr ro_bit_field STRT2{0x40012300, 0x000001, 0x00000c};
        constexpr ro_bit_field JSTRT2{0x40012300, 0x000001, 0x00000b};
        constexpr ro_bit_field JEOC2{0x40012300, 0x000001, 0x00000a};
        constexpr ro_bit_field EOC2{0x40012300, 0x000001, 0x000009};
        constexpr ro_bit_field AWD2{0x40012300, 0x000001, 0x000008};
        constexpr ro_bit_field OVR1{0x40012300, 0x000001, 0x000005};
        constexpr ro_bit_field STRT1{0x40012300, 0x000001, 0x000004};
        constexpr ro_bit_field JSTRT1{0x40012300, 0x000001, 0x000003};
        constexpr ro_bit_field JEOC1{0x40012300, 0x000001, 0x000002};
        constexpr ro_bit_field EOC1{0x40012300, 0x000001, 0x000001};
        constexpr ro_bit_field AWD1{0x40012300, 0x000001, 0x000000};
    }

    namespace CCR {
        constexpr rw_bit_field TSVREFE{0x40012304, 0x000001, 0x000017};
        constexpr rw_bit_field VBATE{0x40012304, 0x000001, 0x000016};
        constexpr rw_bit_field ADCPRE{0x40012304, 0x000003, 0x000010};
        constexpr rw_bit_field DMA{0x40012304, 0x000003, 0x00000e};
        constexpr rw_bit_field DDS{0x40012304, 0x000001, 0x00000d};
        constexpr rw_bit_field DELAY{0x40012304, 0x00000f, 0x000008};
    }

}

namespace ADC1 {
    namespace SR {
        constexpr rw_bit_field OVR{0x40012000, 0x000001, 0x000005};
        constexpr rw_bit_field STRT{0x40012000, 0x000001, 0x000004};
        constexpr rw_bit_field JSTRT{0x40012000, 0x000001, 0x000003};
        constexpr rw_bit_field JEOC{0x40012000, 0x000001, 0x000002};
        constexpr rw_bit_field EOC{0x40012000, 0x000001, 0x000001};
        constexpr rw_bit_field AWD{0x40012000, 0x000001, 0x000000};
    }

    namespace CR1 {
        constexpr rw_bit_field OVRIE{0x40012004, 0x000001, 0x00001a};
        constexpr rw_bit_field RES{0x40012004, 0x000003, 0x000018};
        constexpr rw_bit_field AWDEN{0x40012004, 0x000001, 0x000017};
        constexpr rw_bit_field JAWDEN{0x40012004, 0x000001, 0x000016};
        constexpr rw_bit_field DISCNUM{0x40012004, 0x000007, 0x00000d};
        constexpr rw_bit_field JDISCEN{0x40012004, 0x000001, 0x00000c};
        constexpr rw_bit_field DISCEN{0x40012004, 0x000001, 0x00000b};
        constexpr rw_bit_field JAUTO{0x40012004, 0x000001, 0x00000a};
        constexpr rw_bit_field AWDSGL{0x40012004, 0x000001, 0x000009};
        constexpr rw_bit_field SCAN{0x40012004, 0x000001, 0x000008};
        constexpr rw_bit_field JEOCIE{0x40012004, 0x000001, 0x000007};
        constexpr rw_bit_field AWDIE{0x40012004, 0x000001, 0x000006};
        constexpr rw_bit_field EOCIE{0x40012004, 0x000001, 0x000005};
        constexpr rw_bit_field AWDCH{0x40012004, 0x00001f, 0x000000};
    }

    namespace CR2 {
        constexpr rw_bit_field SWSTART{0x40012008, 0x000001, 0x00001e};
        constexpr rw_bit_field EXTEN{0x40012008, 0x000003, 0x00001c};
        constexpr rw_bit_field EXTSEL{0x40012008, 0x00000f, 0x000018};
        constexpr rw_bit_field JSWSTART{0x40012008, 0x000001, 0x000016};
        constexpr rw_bit_field JEXTEN{0x40012008, 0x000003, 0x000014};
        constexpr rw_bit_field JEXTSEL{0x40012008, 0x00000f, 0x000010};
        constexpr rw_bit_field ALIGN{0x40012008, 0x000001, 0x00000b};
        constexpr rw_bit_field EOCS{0x40012008, 0x000001, 0x00000a};
        constexpr rw_bit_field DDS{0x40012008, 0x000001, 0x000009};
        constexpr rw_bit_field DMA{0x40012008, 0x000001, 0x000008};
        constexpr rw_bit_field CONT{0x40012008, 0x000001, 0x000001};
        constexpr rw_bit_field ADON{0x40012008, 0x000001, 0x000000};
    }

    namespace SMPR1 {
        constexpr rw_bit_field SMPx_x{0x4001200c, 0xffffffff, 0x000000};
    }

    namespace SMPR2 {
        constexpr rw_bit_field SMPx_x{0x40012010, 0xffffffff, 0x000000};
    }

    namespace JOFR1 {
        constexpr rw_bit_field JOFFSET1{0x40012014, 0x000fff, 0x000000};
    }

    namespace JOFR2 {
        constexpr rw_bit_field JOFFSET2{0x40012018, 0x000fff, 0x000000};
    }

    namespace JOFR3 {
        constexpr rw_bit_field JOFFSET3{0x4001201c, 0x000fff, 0x000000};
    }

    namespace JOFR4 {
        constexpr rw_bit_field JOFFSET4{0x40012020, 0x000fff, 0x000000};
    }

    namespace HTR {
        constexpr rw_bit_field HT{0x40012024, 0x000fff, 0x000000};
    }

    namespace LTR {
        constexpr rw_bit_field LT{0x40012028, 0x000fff, 0x000000};
    }

    namespace SQR1 {
        constexpr rw_bit_field L{0x4001202c, 0x00000f, 0x000014};
        constexpr rw_bit_field SQ16{0x4001202c, 0x00001f, 0x00000f};
        constexpr rw_bit_field SQ15{0x4001202c, 0x00001f, 0x00000a};
        constexpr rw_bit_field SQ14{0x4001202c, 0x00001f, 0x000005};
        constexpr rw_bit_field SQ13{0x4001202c, 0x00001f, 0x000000};
    }

    namespace SQR2 {
        constexpr rw_bit_field SQ12{0x40012030, 0x00001f, 0x000019};
        constexpr rw_bit_field SQ11{0x40012030, 0x00001f, 0x000014};
        constexpr rw_bit_field SQ10{0x40012030, 0x00001f, 0x00000f};
        constexpr rw_bit_field SQ9{0x40012030, 0x00001f, 0x00000a};
        constexpr rw_bit_field SQ8{0x40012030, 0x00001f, 0x000005};
        constexpr rw_bit_field SQ7{0x40012030, 0x00001f, 0x000000};
    }

    namespace SQR3 {
        constexpr rw_bit_field SQ6{0x40012034, 0x00001f, 0x000019};
        constexpr rw_bit_field SQ5{0x40012034, 0x00001f, 0x000014};
        constexpr rw_bit_field SQ4{0x40012034, 0x00001f, 0x00000f};
        constexpr rw_bit_field SQ3{0x40012034, 0x00001f, 0x00000a};
        constexpr rw_bit_field SQ2{0x40012034, 0x00001f, 0x000005};
        constexpr rw_bit_field SQ1{0x40012034, 0x00001f, 0x000000};
    }

    namespace JSQR {
        constexpr rw_bit_field JL{0x40012038, 0x000003, 0x000014};
        constexpr rw_bit_field JSQ4{0x40012038, 0x00001f, 0x00000f};
        constexpr rw_bit_field JSQ3{0x40012038, 0x00001f, 0x00000a};
        constexpr rw_bit_field JSQ2{0x40012038, 0x00001f, 0x000005};
        constexpr rw_bit_field JSQ1{0x40012038, 0x00001f, 0x000000};
    }

    namespace JDR1 {
        constexpr ro_bit_field JDATA{0x4001203c, 0x00ffff, 0x000000};
    }

    namespace JDR2 {
        constexpr ro_bit_field JDATA{0x40012040, 0x00ffff, 0x000000};
    }

    namespace JDR3 {
        constexpr ro_bit_field JDATA{0x40012044, 0x00ffff, 0x000000};
    }

    namespace JDR4 {
        constexpr ro_bit_field JDATA{0x40012048, 0x00ffff, 0x000000};
    }

    namespace DR {
        constexpr ro_bit_field DATA{0x4001204c, 0x00ffff, 0x000000};
    }

}

namespace CRC {
    namespace DR {
        constexpr rw_bit_field DR{0x40023000, 0xffffffff, 0x000000};
    }

    namespace IDR {
        constexpr rw_bit_field IDR{0x40023004, 0x0000ff, 0x000000};
    }

    namespace CR {
        constexpr wo_bit_field CR{0x40023008, 0x000001, 0x000000};
    }

}

namespace DBG {
    namespace DBGMCU_IDCODE {
        constexpr ro_bit_field DEV_ID{0xe0042000, 0x000fff, 0x000000};
        constexpr ro_bit_field REV_ID{0xe0042000, 0x00ffff, 0x000010};
    }

    namespace DBGMCU_CR {
        constexpr rw_bit_field DBG_SLEEP{0xe0042004, 0x000001, 0x000000};
        constexpr rw_bit_field DBG_STOP{0xe0042004, 0x000001, 0x000001};
        constexpr rw_bit_field DBG_STANDBY{0xe0042004, 0x000001, 0x000002};
        constexpr rw_bit_field TRACE_IOEN{0xe0042004, 0x000001, 0x000005};
        constexpr rw_bit_field TRACE_MODE{0xe0042004, 0x000003, 0x000006};
    }

    namespace DBGMCU_APB1_FZ {
        constexpr rw_bit_field DBG_TIM2_STOP{0xe0042008, 0x000001, 0x000000};
        constexpr rw_bit_field DBG_TIM3_STOP{0xe0042008, 0x000001, 0x000001};
        constexpr rw_bit_field DBG_TIM4_STOP{0xe0042008, 0x000001, 0x000002};
        constexpr rw_bit_field DBG_TIM5_STOP{0xe0042008, 0x000001, 0x000003};
        constexpr rw_bit_field DBG_RTC_Stop{0xe0042008, 0x000001, 0x00000a};
        constexpr rw_bit_field DBG_WWDG_STOP{0xe0042008, 0x000001, 0x00000b};
        constexpr rw_bit_field DBG_IWDEG_STOP{0xe0042008, 0x000001, 0x00000c};
        constexpr rw_bit_field DBG_I2C1_SMBUS_TIMEOUT{0xe0042008, 0x000001, 0x000015};
        constexpr rw_bit_field DBG_I2C2_SMBUS_TIMEOUT{0xe0042008, 0x000001, 0x000016};
        constexpr rw_bit_field DBG_I2C3SMBUS_TIMEOUT{0xe0042008, 0x000001, 0x000017};
    }

    namespace DBGMCU_APB2_FZ {
        constexpr rw_bit_field DBG_TIM1_STOP{0xe004200c, 0x000001, 0x000000};
        constexpr rw_bit_field DBG_TIM9_STOP{0xe004200c, 0x000001, 0x000010};
        constexpr rw_bit_field DBG_TIM10_STOP{0xe004200c, 0x000001, 0x000011};
        constexpr rw_bit_field DBG_TIM11_STOP{0xe004200c, 0x000001, 0x000012};
    }

}

namespace EXTI {
    namespace IMR {
        constexpr rw_bit_field MR0{0x40013c00, 0x000001, 0x000000};
        constexpr rw_bit_field MR1{0x40013c00, 0x000001, 0x000001};
        constexpr rw_bit_field MR2{0x40013c00, 0x000001, 0x000002};
        constexpr rw_bit_field MR3{0x40013c00, 0x000001, 0x000003};
        constexpr rw_bit_field MR4{0x40013c00, 0x000001, 0x000004};
        constexpr rw_bit_field MR5{0x40013c00, 0x000001, 0x000005};
        constexpr rw_bit_field MR6{0x40013c00, 0x000001, 0x000006};
        constexpr rw_bit_field MR7{0x40013c00, 0x000001, 0x000007};
        constexpr rw_bit_field MR8{0x40013c00, 0x000001, 0x000008};
        constexpr rw_bit_field MR9{0x40013c00, 0x000001, 0x000009};
        constexpr rw_bit_field MR10{0x40013c00, 0x000001, 0x00000a};
        constexpr rw_bit_field MR11{0x40013c00, 0x000001, 0x00000b};
        constexpr rw_bit_field MR12{0x40013c00, 0x000001, 0x00000c};
        constexpr rw_bit_field MR13{0x40013c00, 0x000001, 0x00000d};
        constexpr rw_bit_field MR14{0x40013c00, 0x000001, 0x00000e};
        constexpr rw_bit_field MR15{0x40013c00, 0x000001, 0x00000f};
        constexpr rw_bit_field MR16{0x40013c00, 0x000001, 0x000010};
        constexpr rw_bit_field MR17{0x40013c00, 0x000001, 0x000011};
        constexpr rw_bit_field MR18{0x40013c00, 0x000001, 0x000012};
        constexpr rw_bit_field MR19{0x40013c00, 0x000001, 0x000013};
        constexpr rw_bit_field MR20{0x40013c00, 0x000001, 0x000014};
        constexpr rw_bit_field MR21{0x40013c00, 0x000001, 0x000015};
        constexpr rw_bit_field MR22{0x40013c00, 0x000001, 0x000016};
    }

    namespace EMR {
        constexpr rw_bit_field MR0{0x40013c04, 0x000001, 0x000000};
        constexpr rw_bit_field MR1{0x40013c04, 0x000001, 0x000001};
        constexpr rw_bit_field MR2{0x40013c04, 0x000001, 0x000002};
        constexpr rw_bit_field MR3{0x40013c04, 0x000001, 0x000003};
        constexpr rw_bit_field MR4{0x40013c04, 0x000001, 0x000004};
        constexpr rw_bit_field MR5{0x40013c04, 0x000001, 0x000005};
        constexpr rw_bit_field MR6{0x40013c04, 0x000001, 0x000006};
        constexpr rw_bit_field MR7{0x40013c04, 0x000001, 0x000007};
        constexpr rw_bit_field MR8{0x40013c04, 0x000001, 0x000008};
        constexpr rw_bit_field MR9{0x40013c04, 0x000001, 0x000009};
        constexpr rw_bit_field MR10{0x40013c04, 0x000001, 0x00000a};
        constexpr rw_bit_field MR11{0x40013c04, 0x000001, 0x00000b};
        constexpr rw_bit_field MR12{0x40013c04, 0x000001, 0x00000c};
        constexpr rw_bit_field MR13{0x40013c04, 0x000001, 0x00000d};
        constexpr rw_bit_field MR14{0x40013c04, 0x000001, 0x00000e};
        constexpr rw_bit_field MR15{0x40013c04, 0x000001, 0x00000f};
        constexpr rw_bit_field MR16{0x40013c04, 0x000001, 0x000010};
        constexpr rw_bit_field MR17{0x40013c04, 0x000001, 0x000011};
        constexpr rw_bit_field MR18{0x40013c04, 0x000001, 0x000012};
        constexpr rw_bit_field MR19{0x40013c04, 0x000001, 0x000013};
        constexpr rw_bit_field MR20{0x40013c04, 0x000001, 0x000014};
        constexpr rw_bit_field MR21{0x40013c04, 0x000001, 0x000015};
        constexpr rw_bit_field MR22{0x40013c04, 0x000001, 0x000016};
    }

    namespace RTSR {
        constexpr rw_bit_field TR0{0x40013c08, 0x000001, 0x000000};
        constexpr rw_bit_field TR1{0x40013c08, 0x000001, 0x000001};
        constexpr rw_bit_field TR2{0x40013c08, 0x000001, 0x000002};
        constexpr rw_bit_field TR3{0x40013c08, 0x000001, 0x000003};
        constexpr rw_bit_field TR4{0x40013c08, 0x000001, 0x000004};
        constexpr rw_bit_field TR5{0x40013c08, 0x000001, 0x000005};
        constexpr rw_bit_field TR6{0x40013c08, 0x000001, 0x000006};
        constexpr rw_bit_field TR7{0x40013c08, 0x000001, 0x000007};
        constexpr rw_bit_field TR8{0x40013c08, 0x000001, 0x000008};
        constexpr rw_bit_field TR9{0x40013c08, 0x000001, 0x000009};
        constexpr rw_bit_field TR10{0x40013c08, 0x000001, 0x00000a};
        constexpr rw_bit_field TR11{0x40013c08, 0x000001, 0x00000b};
        constexpr rw_bit_field TR12{0x40013c08, 0x000001, 0x00000c};
        constexpr rw_bit_field TR13{0x40013c08, 0x000001, 0x00000d};
        constexpr rw_bit_field TR14{0x40013c08, 0x000001, 0x00000e};
        constexpr rw_bit_field TR15{0x40013c08, 0x000001, 0x00000f};
        constexpr rw_bit_field TR16{0x40013c08, 0x000001, 0x000010};
        constexpr rw_bit_field TR17{0x40013c08, 0x000001, 0x000011};
        constexpr rw_bit_field TR18{0x40013c08, 0x000001, 0x000012};
        constexpr rw_bit_field TR19{0x40013c08, 0x000001, 0x000013};
        constexpr rw_bit_field TR20{0x40013c08, 0x000001, 0x000014};
        constexpr rw_bit_field TR21{0x40013c08, 0x000001, 0x000015};
        constexpr rw_bit_field TR22{0x40013c08, 0x000001, 0x000016};
    }

    namespace FTSR {
        constexpr rw_bit_field TR0{0x40013c0c, 0x000001, 0x000000};
        constexpr rw_bit_field TR1{0x40013c0c, 0x000001, 0x000001};
        constexpr rw_bit_field TR2{0x40013c0c, 0x000001, 0x000002};
        constexpr rw_bit_field TR3{0x40013c0c, 0x000001, 0x000003};
        constexpr rw_bit_field TR4{0x40013c0c, 0x000001, 0x000004};
        constexpr rw_bit_field TR5{0x40013c0c, 0x000001, 0x000005};
        constexpr rw_bit_field TR6{0x40013c0c, 0x000001, 0x000006};
        constexpr rw_bit_field TR7{0x40013c0c, 0x000001, 0x000007};
        constexpr rw_bit_field TR8{0x40013c0c, 0x000001, 0x000008};
        constexpr rw_bit_field TR9{0x40013c0c, 0x000001, 0x000009};
        constexpr rw_bit_field TR10{0x40013c0c, 0x000001, 0x00000a};
        constexpr rw_bit_field TR11{0x40013c0c, 0x000001, 0x00000b};
        constexpr rw_bit_field TR12{0x40013c0c, 0x000001, 0x00000c};
        constexpr rw_bit_field TR13{0x40013c0c, 0x000001, 0x00000d};
        constexpr rw_bit_field TR14{0x40013c0c, 0x000001, 0x00000e};
        constexpr rw_bit_field TR15{0x40013c0c, 0x000001, 0x00000f};
        constexpr rw_bit_field TR16{0x40013c0c, 0x000001, 0x000010};
        constexpr rw_bit_field TR17{0x40013c0c, 0x000001, 0x000011};
        constexpr rw_bit_field TR18{0x40013c0c, 0x000001, 0x000012};
        constexpr rw_bit_field TR19{0x40013c0c, 0x000001, 0x000013};
        constexpr rw_bit_field TR20{0x40013c0c, 0x000001, 0x000014};
        constexpr rw_bit_field TR21{0x40013c0c, 0x000001, 0x000015};
        constexpr rw_bit_field TR22{0x40013c0c, 0x000001, 0x000016};
    }

    namespace SWIER {
        constexpr rw_bit_field SWIER0{0x40013c10, 0x000001, 0x000000};
        constexpr rw_bit_field SWIER1{0x40013c10, 0x000001, 0x000001};
        constexpr rw_bit_field SWIER2{0x40013c10, 0x000001, 0x000002};
        constexpr rw_bit_field SWIER3{0x40013c10, 0x000001, 0x000003};
        constexpr rw_bit_field SWIER4{0x40013c10, 0x000001, 0x000004};
        constexpr rw_bit_field SWIER5{0x40013c10, 0x000001, 0x000005};
        constexpr rw_bit_field SWIER6{0x40013c10, 0x000001, 0x000006};
        constexpr rw_bit_field SWIER7{0x40013c10, 0x000001, 0x000007};
        constexpr rw_bit_field SWIER8{0x40013c10, 0x000001, 0x000008};
        constexpr rw_bit_field SWIER9{0x40013c10, 0x000001, 0x000009};
        constexpr rw_bit_field SWIER10{0x40013c10, 0x000001, 0x00000a};
        constexpr rw_bit_field SWIER11{0x40013c10, 0x000001, 0x00000b};
        constexpr rw_bit_field SWIER12{0x40013c10, 0x000001, 0x00000c};
        constexpr rw_bit_field SWIER13{0x40013c10, 0x000001, 0x00000d};
        constexpr rw_bit_field SWIER14{0x40013c10, 0x000001, 0x00000e};
        constexpr rw_bit_field SWIER15{0x40013c10, 0x000001, 0x00000f};
        constexpr rw_bit_field SWIER16{0x40013c10, 0x000001, 0x000010};
        constexpr rw_bit_field SWIER17{0x40013c10, 0x000001, 0x000011};
        constexpr rw_bit_field SWIER18{0x40013c10, 0x000001, 0x000012};
        constexpr rw_bit_field SWIER19{0x40013c10, 0x000001, 0x000013};
        constexpr rw_bit_field SWIER20{0x40013c10, 0x000001, 0x000014};
        constexpr rw_bit_field SWIER21{0x40013c10, 0x000001, 0x000015};
        constexpr rw_bit_field SWIER22{0x40013c10, 0x000001, 0x000016};
    }

    namespace PR {
        constexpr rw_bit_field PR0{0x40013c14, 0x000001, 0x000000};
        constexpr rw_bit_field PR1{0x40013c14, 0x000001, 0x000001};
        constexpr rw_bit_field PR2{0x40013c14, 0x000001, 0x000002};
        constexpr rw_bit_field PR3{0x40013c14, 0x000001, 0x000003};
        constexpr rw_bit_field PR4{0x40013c14, 0x000001, 0x000004};
        constexpr rw_bit_field PR5{0x40013c14, 0x000001, 0x000005};
        constexpr rw_bit_field PR6{0x40013c14, 0x000001, 0x000006};
        constexpr rw_bit_field PR7{0x40013c14, 0x000001, 0x000007};
        constexpr rw_bit_field PR8{0x40013c14, 0x000001, 0x000008};
        constexpr rw_bit_field PR9{0x40013c14, 0x000001, 0x000009};
        constexpr rw_bit_field PR10{0x40013c14, 0x000001, 0x00000a};
        constexpr rw_bit_field PR11{0x40013c14, 0x000001, 0x00000b};
        constexpr rw_bit_field PR12{0x40013c14, 0x000001, 0x00000c};
        constexpr rw_bit_field PR13{0x40013c14, 0x000001, 0x00000d};
        constexpr rw_bit_field PR14{0x40013c14, 0x000001, 0x00000e};
        constexpr rw_bit_field PR15{0x40013c14, 0x000001, 0x00000f};
        constexpr rw_bit_field PR16{0x40013c14, 0x000001, 0x000010};
        constexpr rw_bit_field PR17{0x40013c14, 0x000001, 0x000011};
        constexpr rw_bit_field PR18{0x40013c14, 0x000001, 0x000012};
        constexpr rw_bit_field PR19{0x40013c14, 0x000001, 0x000013};
        constexpr rw_bit_field PR20{0x40013c14, 0x000001, 0x000014};
        constexpr rw_bit_field PR21{0x40013c14, 0x000001, 0x000015};
        constexpr rw_bit_field PR22{0x40013c14, 0x000001, 0x000016};
    }

}

namespace FLASH {
    namespace ACR {
        constexpr rw_bit_field LATENCY{0x40023c00, 0x000007, 0x000000};
        constexpr rw_bit_field PRFTEN{0x40023c00, 0x000001, 0x000008};
        constexpr rw_bit_field ICEN{0x40023c00, 0x000001, 0x000009};
        constexpr rw_bit_field DCEN{0x40023c00, 0x000001, 0x00000a};
        constexpr wo_bit_field ICRST{0x40023c00, 0x000001, 0x00000b};
        constexpr rw_bit_field DCRST{0x40023c00, 0x000001, 0x00000c};
    }

    namespace KEYR {
        constexpr wo_bit_field KEY{0x40023c04, 0xffffffff, 0x000000};
    }

    namespace OPTKEYR {
        constexpr wo_bit_field OPTKEY{0x40023c08, 0xffffffff, 0x000000};
    }

    namespace SR {
        constexpr rw_bit_field EOP{0x40023c0c, 0x000001, 0x000000};
        constexpr rw_bit_field OPERR{0x40023c0c, 0x000001, 0x000001};
        constexpr rw_bit_field WRPERR{0x40023c0c, 0x000001, 0x000004};
        constexpr rw_bit_field PGAERR{0x40023c0c, 0x000001, 0x000005};
        constexpr rw_bit_field PGPERR{0x40023c0c, 0x000001, 0x000006};
        constexpr rw_bit_field PGSERR{0x40023c0c, 0x000001, 0x000007};
        constexpr ro_bit_field BSY{0x40023c0c, 0x000001, 0x000010};
    }

    namespace CR {
        constexpr rw_bit_field PG{0x40023c10, 0x000001, 0x000000};
        constexpr rw_bit_field SER{0x40023c10, 0x000001, 0x000001};
        constexpr rw_bit_field MER{0x40023c10, 0x000001, 0x000002};
        constexpr rw_bit_field SNB{0x40023c10, 0x00000f, 0x000003};
        constexpr rw_bit_field PSIZE{0x40023c10, 0x000003, 0x000008};
        constexpr rw_bit_field STRT{0x40023c10, 0x000001, 0x000010};
        constexpr rw_bit_field EOPIE{0x40023c10, 0x000001, 0x000018};
        constexpr rw_bit_field ERRIE{0x40023c10, 0x000001, 0x000019};
        constexpr rw_bit_field LOCK{0x40023c10, 0x000001, 0x00001f};
    }

    namespace OPTCR {
        constexpr rw_bit_field OPTLOCK{0x40023c14, 0x000001, 0x000000};
        constexpr rw_bit_field OPTSTRT{0x40023c14, 0x000001, 0x000001};
        constexpr rw_bit_field BOR_LEV{0x40023c14, 0x000003, 0x000002};
        constexpr rw_bit_field WDG_SW{0x40023c14, 0x000001, 0x000005};
        constexpr rw_bit_field nRST_STOP{0x40023c14, 0x000001, 0x000006};
        constexpr rw_bit_field nRST_STDBY{0x40023c14, 0x000001, 0x000007};
        constexpr rw_bit_field RDP{0x40023c14, 0x0000ff, 0x000008};
        constexpr rw_bit_field nWRP{0x40023c14, 0x000fff, 0x000010};
    }

}

namespace IWDG {
    namespace KR {
        constexpr wo_bit_field KEY{0x40003000, 0x00ffff, 0x000000};
    }

    namespace PR {
        constexpr rw_bit_field PR{0x40003004, 0x000007, 0x000000};
    }

    namespace RLR {
        constexpr rw_bit_field RL{0x40003008, 0x000fff, 0x000000};
    }

    namespace SR {
        constexpr ro_bit_field RVU{0x4000300c, 0x000001, 0x000001};
        constexpr ro_bit_field PVU{0x4000300c, 0x000001, 0x000000};
    }

}

namespace OTG_FS_DEVICE {
    namespace FS_DCFG {
        constexpr rw_bit_field DSPD{0x50000800, 0x000003, 0x000000};
        constexpr rw_bit_field NZLSOHSK{0x50000800, 0x000001, 0x000002};
        constexpr rw_bit_field DAD{0x50000800, 0x00007f, 0x000004};
        constexpr rw_bit_field PFIVL{0x50000800, 0x000003, 0x00000b};
    }

    namespace FS_DCTL {
        constexpr rw_bit_field RWUSIG{0x50000804, 0x000001, 0x000000};
        constexpr rw_bit_field SDIS{0x50000804, 0x000001, 0x000001};
        constexpr ro_bit_field GINSTS{0x50000804, 0x000001, 0x000002};
        constexpr ro_bit_field GONSTS{0x50000804, 0x000001, 0x000003};
        constexpr rw_bit_field TCTL{0x50000804, 0x000007, 0x000004};
        constexpr rw_bit_field SGINAK{0x50000804, 0x000001, 0x000007};
        constexpr rw_bit_field CGINAK{0x50000804, 0x000001, 0x000008};
        constexpr rw_bit_field SGONAK{0x50000804, 0x000001, 0x000009};
        constexpr rw_bit_field CGONAK{0x50000804, 0x000001, 0x00000a};
        constexpr rw_bit_field POPRGDNE{0x50000804, 0x000001, 0x00000b};
    }

    namespace FS_DSTS {
        constexpr ro_bit_field SUSPSTS{0x50000808, 0x000001, 0x000000};
        constexpr ro_bit_field ENUMSPD{0x50000808, 0x000003, 0x000001};
        constexpr ro_bit_field EERR{0x50000808, 0x000001, 0x000003};
        constexpr ro_bit_field FNSOF{0x50000808, 0x003fff, 0x000008};
    }

    namespace FS_DIEPMSK {
        constexpr rw_bit_field XFRCM{0x50000810, 0x000001, 0x000000};
        constexpr rw_bit_field EPDM{0x50000810, 0x000001, 0x000001};
        constexpr rw_bit_field TOM{0x50000810, 0x000001, 0x000003};
        constexpr rw_bit_field ITTXFEMSK{0x50000810, 0x000001, 0x000004};
        constexpr rw_bit_field INEPNMM{0x50000810, 0x000001, 0x000005};
        constexpr rw_bit_field INEPNEM{0x50000810, 0x000001, 0x000006};
    }

    namespace FS_DOEPMSK {
        constexpr rw_bit_field XFRCM{0x50000814, 0x000001, 0x000000};
        constexpr rw_bit_field EPDM{0x50000814, 0x000001, 0x000001};
        constexpr rw_bit_field STUPM{0x50000814, 0x000001, 0x000003};
        constexpr rw_bit_field OTEPDM{0x50000814, 0x000001, 0x000004};
    }

    namespace FS_DAINT {
        constexpr ro_bit_field IEPINT{0x50000818, 0x00ffff, 0x000000};
        constexpr ro_bit_field OEPINT{0x50000818, 0x00ffff, 0x000010};
    }

    namespace FS_DAINTMSK {
        constexpr rw_bit_field IEPM{0x5000081c, 0x00ffff, 0x000000};
        constexpr rw_bit_field OEPINT{0x5000081c, 0x00ffff, 0x000010};
    }

    namespace DVBUSDIS {
        constexpr rw_bit_field VBUSDT{0x50000828, 0x00ffff, 0x000000};
    }

    namespace DVBUSPULSE {
        constexpr rw_bit_field DVBUSP{0x5000082c, 0x000fff, 0x000000};
    }

    namespace DIEPEMPMSK {
        constexpr rw_bit_field INEPTXFEM{0x50000834, 0x00ffff, 0x000000};
    }

    namespace FS_DIEPCTL0 {
        constexpr rw_bit_field MPSIZ{0x50000900, 0x000003, 0x000000};
        constexpr ro_bit_field USBAEP{0x50000900, 0x000001, 0x00000f};
        constexpr ro_bit_field NAKSTS{0x50000900, 0x000001, 0x000011};
        constexpr ro_bit_field EPTYP{0x50000900, 0x000003, 0x000012};
        constexpr rw_bit_field STALL{0x50000900, 0x000001, 0x000015};
        constexpr rw_bit_field TXFNUM{0x50000900, 0x00000f, 0x000016};
        constexpr wo_bit_field CNAK{0x50000900, 0x000001, 0x00001a};
        constexpr wo_bit_field SNAK{0x50000900, 0x000001, 0x00001b};
        constexpr ro_bit_field EPDIS{0x50000900, 0x000001, 0x00001e};
        constexpr ro_bit_field EPENA{0x50000900, 0x000001, 0x00001f};
    }

    namespace DIEPCTL1 {
        constexpr rw_bit_field EPENA{0x50000920, 0x000001, 0x00001f};
        constexpr rw_bit_field EPDIS{0x50000920, 0x000001, 0x00001e};
        constexpr wo_bit_field SODDFRM_SD1PID{0x50000920, 0x000001, 0x00001d};
        constexpr wo_bit_field SD0PID_SEVNFRM{0x50000920, 0x000001, 0x00001c};
        constexpr wo_bit_field SNAK{0x50000920, 0x000001, 0x00001b};
        constexpr wo_bit_field CNAK{0x50000920, 0x000001, 0x00001a};
        constexpr rw_bit_field TXFNUM{0x50000920, 0x00000f, 0x000016};
        constexpr rw_bit_field Stall{0x50000920, 0x000001, 0x000015};
        constexpr rw_bit_field EPTYP{0x50000920, 0x000003, 0x000012};
        constexpr ro_bit_field NAKSTS{0x50000920, 0x000001, 0x000011};
        constexpr ro_bit_field EONUM_DPID{0x50000920, 0x000001, 0x000010};
        constexpr rw_bit_field USBAEP{0x50000920, 0x000001, 0x00000f};
        constexpr rw_bit_field MPSIZ{0x50000920, 0x0007ff, 0x000000};
    }

    namespace DIEPCTL2 {
        constexpr rw_bit_field EPENA{0x50000940, 0x000001, 0x00001f};
        constexpr rw_bit_field EPDIS{0x50000940, 0x000001, 0x00001e};
        constexpr wo_bit_field SODDFRM{0x50000940, 0x000001, 0x00001d};
        constexpr wo_bit_field SD0PID_SEVNFRM{0x50000940, 0x000001, 0x00001c};
        constexpr wo_bit_field SNAK{0x50000940, 0x000001, 0x00001b};
        constexpr wo_bit_field CNAK{0x50000940, 0x000001, 0x00001a};
        constexpr rw_bit_field TXFNUM{0x50000940, 0x00000f, 0x000016};
        constexpr rw_bit_field Stall{0x50000940, 0x000001, 0x000015};
        constexpr rw_bit_field EPTYP{0x50000940, 0x000003, 0x000012};
        constexpr ro_bit_field NAKSTS{0x50000940, 0x000001, 0x000011};
        constexpr ro_bit_field EONUM_DPID{0x50000940, 0x000001, 0x000010};
        constexpr rw_bit_field USBAEP{0x50000940, 0x000001, 0x00000f};
        constexpr rw_bit_field MPSIZ{0x50000940, 0x0007ff, 0x000000};
    }

    namespace DIEPCTL3 {
        constexpr rw_bit_field EPENA{0x50000960, 0x000001, 0x00001f};
        constexpr rw_bit_field EPDIS{0x50000960, 0x000001, 0x00001e};
        constexpr wo_bit_field SODDFRM{0x50000960, 0x000001, 0x00001d};
        constexpr wo_bit_field SD0PID_SEVNFRM{0x50000960, 0x000001, 0x00001c};
        constexpr wo_bit_field SNAK{0x50000960, 0x000001, 0x00001b};
        constexpr wo_bit_field CNAK{0x50000960, 0x000001, 0x00001a};
        constexpr rw_bit_field TXFNUM{0x50000960, 0x00000f, 0x000016};
        constexpr rw_bit_field Stall{0x50000960, 0x000001, 0x000015};
        constexpr rw_bit_field EPTYP{0x50000960, 0x000003, 0x000012};
        constexpr ro_bit_field NAKSTS{0x50000960, 0x000001, 0x000011};
        constexpr ro_bit_field EONUM_DPID{0x50000960, 0x000001, 0x000010};
        constexpr rw_bit_field USBAEP{0x50000960, 0x000001, 0x00000f};
        constexpr rw_bit_field MPSIZ{0x50000960, 0x0007ff, 0x000000};
    }

    namespace DOEPCTL0 {
        constexpr wo_bit_field EPENA{0x50000b00, 0x000001, 0x00001f};
        constexpr ro_bit_field EPDIS{0x50000b00, 0x000001, 0x00001e};
        constexpr wo_bit_field SNAK{0x50000b00, 0x000001, 0x00001b};
        constexpr wo_bit_field CNAK{0x50000b00, 0x000001, 0x00001a};
        constexpr rw_bit_field Stall{0x50000b00, 0x000001, 0x000015};
        constexpr rw_bit_field SNPM{0x50000b00, 0x000001, 0x000014};
        constexpr ro_bit_field EPTYP{0x50000b00, 0x000003, 0x000012};
        constexpr ro_bit_field NAKSTS{0x50000b00, 0x000001, 0x000011};
        constexpr ro_bit_field USBAEP{0x50000b00, 0x000001, 0x00000f};
        constexpr ro_bit_field MPSIZ{0x50000b00, 0x000003, 0x000000};
    }

    namespace DOEPCTL1 {
        constexpr rw_bit_field EPENA{0x50000b20, 0x000001, 0x00001f};
        constexpr rw_bit_field EPDIS{0x50000b20, 0x000001, 0x00001e};
        constexpr wo_bit_field SODDFRM{0x50000b20, 0x000001, 0x00001d};
        constexpr wo_bit_field SD0PID_SEVNFRM{0x50000b20, 0x000001, 0x00001c};
        constexpr wo_bit_field SNAK{0x50000b20, 0x000001, 0x00001b};
        constexpr wo_bit_field CNAK{0x50000b20, 0x000001, 0x00001a};
        constexpr rw_bit_field Stall{0x50000b20, 0x000001, 0x000015};
        constexpr rw_bit_field SNPM{0x50000b20, 0x000001, 0x000014};
        constexpr rw_bit_field EPTYP{0x50000b20, 0x000003, 0x000012};
        constexpr ro_bit_field NAKSTS{0x50000b20, 0x000001, 0x000011};
        constexpr ro_bit_field EONUM_DPID{0x50000b20, 0x000001, 0x000010};
        constexpr rw_bit_field USBAEP{0x50000b20, 0x000001, 0x00000f};
        constexpr rw_bit_field MPSIZ{0x50000b20, 0x0007ff, 0x000000};
    }

    namespace DOEPCTL2 {
        constexpr rw_bit_field EPENA{0x50000b40, 0x000001, 0x00001f};
        constexpr rw_bit_field EPDIS{0x50000b40, 0x000001, 0x00001e};
        constexpr wo_bit_field SODDFRM{0x50000b40, 0x000001, 0x00001d};
        constexpr wo_bit_field SD0PID_SEVNFRM{0x50000b40, 0x000001, 0x00001c};
        constexpr wo_bit_field SNAK{0x50000b40, 0x000001, 0x00001b};
        constexpr wo_bit_field CNAK{0x50000b40, 0x000001, 0x00001a};
        constexpr rw_bit_field Stall{0x50000b40, 0x000001, 0x000015};
        constexpr rw_bit_field SNPM{0x50000b40, 0x000001, 0x000014};
        constexpr rw_bit_field EPTYP{0x50000b40, 0x000003, 0x000012};
        constexpr ro_bit_field NAKSTS{0x50000b40, 0x000001, 0x000011};
        constexpr ro_bit_field EONUM_DPID{0x50000b40, 0x000001, 0x000010};
        constexpr rw_bit_field USBAEP{0x50000b40, 0x000001, 0x00000f};
        constexpr rw_bit_field MPSIZ{0x50000b40, 0x0007ff, 0x000000};
    }

    namespace DOEPCTL3 {
        constexpr rw_bit_field EPENA{0x50000b60, 0x000001, 0x00001f};
        constexpr rw_bit_field EPDIS{0x50000b60, 0x000001, 0x00001e};
        constexpr wo_bit_field SODDFRM{0x50000b60, 0x000001, 0x00001d};
        constexpr wo_bit_field SD0PID_SEVNFRM{0x50000b60, 0x000001, 0x00001c};
        constexpr wo_bit_field SNAK{0x50000b60, 0x000001, 0x00001b};
        constexpr wo_bit_field CNAK{0x50000b60, 0x000001, 0x00001a};
        constexpr rw_bit_field Stall{0x50000b60, 0x000001, 0x000015};
        constexpr rw_bit_field SNPM{0x50000b60, 0x000001, 0x000014};
        constexpr rw_bit_field EPTYP{0x50000b60, 0x000003, 0x000012};
        constexpr ro_bit_field NAKSTS{0x50000b60, 0x000001, 0x000011};
        constexpr ro_bit_field EONUM_DPID{0x50000b60, 0x000001, 0x000010};
        constexpr rw_bit_field USBAEP{0x50000b60, 0x000001, 0x00000f};
        constexpr rw_bit_field MPSIZ{0x50000b60, 0x0007ff, 0x000000};
    }

    namespace DIEPINT0 {
        constexpr ro_bit_field TXFE{0x50000908, 0x000001, 0x000007};
        constexpr rw_bit_field INEPNE{0x50000908, 0x000001, 0x000006};
        constexpr rw_bit_field ITTXFE{0x50000908, 0x000001, 0x000004};
        constexpr rw_bit_field TOC{0x50000908, 0x000001, 0x000003};
        constexpr rw_bit_field EPDISD{0x50000908, 0x000001, 0x000001};
        constexpr rw_bit_field XFRC{0x50000908, 0x000001, 0x000000};
    }

    namespace DIEPINT1 {
        constexpr ro_bit_field TXFE{0x50000928, 0x000001, 0x000007};
        constexpr rw_bit_field INEPNE{0x50000928, 0x000001, 0x000006};
        constexpr rw_bit_field ITTXFE{0x50000928, 0x000001, 0x000004};
        constexpr rw_bit_field TOC{0x50000928, 0x000001, 0x000003};
        constexpr rw_bit_field EPDISD{0x50000928, 0x000001, 0x000001};
        constexpr rw_bit_field XFRC{0x50000928, 0x000001, 0x000000};
    }

    namespace DIEPINT2 {
        constexpr ro_bit_field TXFE{0x50000948, 0x000001, 0x000007};
        constexpr rw_bit_field INEPNE{0x50000948, 0x000001, 0x000006};
        constexpr rw_bit_field ITTXFE{0x50000948, 0x000001, 0x000004};
        constexpr rw_bit_field TOC{0x50000948, 0x000001, 0x000003};
        constexpr rw_bit_field EPDISD{0x50000948, 0x000001, 0x000001};
        constexpr rw_bit_field XFRC{0x50000948, 0x000001, 0x000000};
    }

    namespace DIEPINT3 {
        constexpr ro_bit_field TXFE{0x50000968, 0x000001, 0x000007};
        constexpr rw_bit_field INEPNE{0x50000968, 0x000001, 0x000006};
        constexpr rw_bit_field ITTXFE{0x50000968, 0x000001, 0x000004};
        constexpr rw_bit_field TOC{0x50000968, 0x000001, 0x000003};
        constexpr rw_bit_field EPDISD{0x50000968, 0x000001, 0x000001};
        constexpr rw_bit_field XFRC{0x50000968, 0x000001, 0x000000};
    }

    namespace DOEPINT0 {
        constexpr rw_bit_field B2BSTUP{0x50000b08, 0x000001, 0x000006};
        constexpr rw_bit_field OTEPDIS{0x50000b08, 0x000001, 0x000004};
        constexpr rw_bit_field STUP{0x50000b08, 0x000001, 0x000003};
        constexpr rw_bit_field EPDISD{0x50000b08, 0x000001, 0x000001};
        constexpr rw_bit_field XFRC{0x50000b08, 0x000001, 0x000000};
    }

    namespace DOEPINT1 {
        constexpr rw_bit_field B2BSTUP{0x50000b28, 0x000001, 0x000006};
        constexpr rw_bit_field OTEPDIS{0x50000b28, 0x000001, 0x000004};
        constexpr rw_bit_field STUP{0x50000b28, 0x000001, 0x000003};
        constexpr rw_bit_field EPDISD{0x50000b28, 0x000001, 0x000001};
        constexpr rw_bit_field XFRC{0x50000b28, 0x000001, 0x000000};
    }

    namespace DOEPINT2 {
        constexpr rw_bit_field B2BSTUP{0x50000b48, 0x000001, 0x000006};
        constexpr rw_bit_field OTEPDIS{0x50000b48, 0x000001, 0x000004};
        constexpr rw_bit_field STUP{0x50000b48, 0x000001, 0x000003};
        constexpr rw_bit_field EPDISD{0x50000b48, 0x000001, 0x000001};
        constexpr rw_bit_field XFRC{0x50000b48, 0x000001, 0x000000};
    }

    namespace DOEPINT3 {
        constexpr rw_bit_field B2BSTUP{0x50000b68, 0x000001, 0x000006};
        constexpr rw_bit_field OTEPDIS{0x50000b68, 0x000001, 0x000004};
        constexpr rw_bit_field STUP{0x50000b68, 0x000001, 0x000003};
        constexpr rw_bit_field EPDISD{0x50000b68, 0x000001, 0x000001};
        constexpr rw_bit_field XFRC{0x50000b68, 0x000001, 0x000000};
    }

    namespace DIEPTSIZ0 {
        constexpr rw_bit_field PKTCNT{0x50000910, 0x000003, 0x000013};
        constexpr rw_bit_field XFRSIZ{0x50000910, 0x00007f, 0x000000};
    }

    namespace DOEPTSIZ0 {
        constexpr rw_bit_field STUPCNT{0x50000b10, 0x000003, 0x00001d};
        constexpr rw_bit_field PKTCNT{0x50000b10, 0x000001, 0x000013};
        constexpr rw_bit_field XFRSIZ{0x50000b10, 0x00007f, 0x000000};
    }

    namespace DIEPTSIZ1 {
        constexpr rw_bit_field MCNT{0x50000930, 0x000003, 0x00001d};
        constexpr rw_bit_field PKTCNT{0x50000930, 0x0003ff, 0x000013};
        constexpr rw_bit_field XFRSIZ{0x50000930, 0x07ffff, 0x000000};
    }

    namespace DIEPTSIZ2 {
        constexpr rw_bit_field MCNT{0x50000950, 0x000003, 0x00001d};
        constexpr rw_bit_field PKTCNT{0x50000950, 0x0003ff, 0x000013};
        constexpr rw_bit_field XFRSIZ{0x50000950, 0x07ffff, 0x000000};
    }

    namespace DIEPTSIZ3 {
        constexpr rw_bit_field MCNT{0x50000970, 0x000003, 0x00001d};
        constexpr rw_bit_field PKTCNT{0x50000970, 0x0003ff, 0x000013};
        constexpr rw_bit_field XFRSIZ{0x50000970, 0x07ffff, 0x000000};
    }

    namespace DTXFSTS0 {
        constexpr ro_bit_field INEPTFSAV{0x50000918, 0x00ffff, 0x000000};
    }

    namespace DTXFSTS1 {
        constexpr ro_bit_field INEPTFSAV{0x50000938, 0x00ffff, 0x000000};
    }

    namespace DTXFSTS2 {
        constexpr ro_bit_field INEPTFSAV{0x50000958, 0x00ffff, 0x000000};
    }

    namespace DTXFSTS3 {
        constexpr ro_bit_field INEPTFSAV{0x50000978, 0x00ffff, 0x000000};
    }

    namespace DOEPTSIZ1 {
        constexpr rw_bit_field RXDPID_STUPCNT{0x50000b30, 0x000003, 0x00001d};
        constexpr rw_bit_field PKTCNT{0x50000b30, 0x0003ff, 0x000013};
        constexpr rw_bit_field XFRSIZ{0x50000b30, 0x07ffff, 0x000000};
    }

    namespace DOEPTSIZ2 {
        constexpr rw_bit_field RXDPID_STUPCNT{0x50000b50, 0x000003, 0x00001d};
        constexpr rw_bit_field PKTCNT{0x50000b50, 0x0003ff, 0x000013};
        constexpr rw_bit_field XFRSIZ{0x50000b50, 0x07ffff, 0x000000};
    }

    namespace DOEPTSIZ3 {
        constexpr rw_bit_field RXDPID_STUPCNT{0x50000b70, 0x000003, 0x00001d};
        constexpr rw_bit_field PKTCNT{0x50000b70, 0x0003ff, 0x000013};
        constexpr rw_bit_field XFRSIZ{0x50000b70, 0x07ffff, 0x000000};
    }

}

namespace OTG_FS_GLOBAL {
    namespace FS_GOTGCTL {
        constexpr ro_bit_field SRQSCS{0x50000000, 0x000001, 0x000000};
        constexpr rw_bit_field SRQ{0x50000000, 0x000001, 0x000001};
        constexpr ro_bit_field HNGSCS{0x50000000, 0x000001, 0x000008};
        constexpr rw_bit_field HNPRQ{0x50000000, 0x000001, 0x000009};
        constexpr rw_bit_field HSHNPEN{0x50000000, 0x000001, 0x00000a};
        constexpr rw_bit_field DHNPEN{0x50000000, 0x000001, 0x00000b};
        constexpr ro_bit_field CIDSTS{0x50000000, 0x000001, 0x000010};
        constexpr ro_bit_field DBCT{0x50000000, 0x000001, 0x000011};
        constexpr ro_bit_field ASVLD{0x50000000, 0x000001, 0x000012};
        constexpr ro_bit_field BSVLD{0x50000000, 0x000001, 0x000013};
    }

    namespace FS_GOTGINT {
        constexpr rw_bit_field SEDET{0x50000004, 0x000001, 0x000002};
        constexpr rw_bit_field SRSSCHG{0x50000004, 0x000001, 0x000008};
        constexpr rw_bit_field HNSSCHG{0x50000004, 0x000001, 0x000009};
        constexpr rw_bit_field HNGDET{0x50000004, 0x000001, 0x000011};
        constexpr rw_bit_field ADTOCHG{0x50000004, 0x000001, 0x000012};
        constexpr rw_bit_field DBCDNE{0x50000004, 0x000001, 0x000013};
    }

    namespace FS_GAHBCFG {
        constexpr rw_bit_field GINT{0x50000008, 0x000001, 0x000000};
        constexpr rw_bit_field TXFELVL{0x50000008, 0x000001, 0x000007};
        constexpr rw_bit_field PTXFELVL{0x50000008, 0x000001, 0x000008};
    }

    namespace FS_GUSBCFG {
        constexpr rw_bit_field TOCAL{0x5000000c, 0x000007, 0x000000};
        constexpr wo_bit_field PHYSEL{0x5000000c, 0x000001, 0x000006};
        constexpr rw_bit_field SRPCAP{0x5000000c, 0x000001, 0x000008};
        constexpr rw_bit_field HNPCAP{0x5000000c, 0x000001, 0x000009};
        constexpr rw_bit_field TRDT{0x5000000c, 0x00000f, 0x00000a};
        constexpr rw_bit_field FHMOD{0x5000000c, 0x000001, 0x00001d};
        constexpr rw_bit_field FDMOD{0x5000000c, 0x000001, 0x00001e};
        constexpr rw_bit_field CTXPKT{0x5000000c, 0x000001, 0x00001f};
    }

    namespace FS_GRSTCTL {
        constexpr rw_bit_field CSRST{0x50000010, 0x000001, 0x000000};
        constexpr rw_bit_field HSRST{0x50000010, 0x000001, 0x000001};
        constexpr rw_bit_field FCRST{0x50000010, 0x000001, 0x000002};
        constexpr rw_bit_field RXFFLSH{0x50000010, 0x000001, 0x000004};
        constexpr rw_bit_field TXFFLSH{0x50000010, 0x000001, 0x000005};
        constexpr rw_bit_field TXFNUM{0x50000010, 0x00001f, 0x000006};
        constexpr ro_bit_field AHBIDL{0x50000010, 0x000001, 0x00001f};
    }

    namespace FS_GINTSTS {
        constexpr ro_bit_field CMOD{0x50000014, 0x000001, 0x000000};
        constexpr rw_bit_field MMIS{0x50000014, 0x000001, 0x000001};
        constexpr ro_bit_field OTGINT{0x50000014, 0x000001, 0x000002};
        constexpr rw_bit_field SOF{0x50000014, 0x000001, 0x000003};
        constexpr ro_bit_field RXFLVL{0x50000014, 0x000001, 0x000004};
        constexpr ro_bit_field NPTXFE{0x50000014, 0x000001, 0x000005};
        constexpr ro_bit_field GINAKEFF{0x50000014, 0x000001, 0x000006};
        constexpr ro_bit_field GOUTNAKEFF{0x50000014, 0x000001, 0x000007};
        constexpr rw_bit_field ESUSP{0x50000014, 0x000001, 0x00000a};
        constexpr rw_bit_field USBSUSP{0x50000014, 0x000001, 0x00000b};
        constexpr rw_bit_field USBRST{0x50000014, 0x000001, 0x00000c};
        constexpr rw_bit_field ENUMDNE{0x50000014, 0x000001, 0x00000d};
        constexpr rw_bit_field ISOODRP{0x50000014, 0x000001, 0x00000e};
        constexpr rw_bit_field EOPF{0x50000014, 0x000001, 0x00000f};
        constexpr ro_bit_field IEPINT{0x50000014, 0x000001, 0x000012};
        constexpr ro_bit_field OEPINT{0x50000014, 0x000001, 0x000013};
        constexpr rw_bit_field IISOIXFR{0x50000014, 0x000001, 0x000014};
        constexpr rw_bit_field IPXFR_INCOMPISOOUT{0x50000014, 0x000001, 0x000015};
        constexpr ro_bit_field HPRTINT{0x50000014, 0x000001, 0x000018};
        constexpr ro_bit_field HCINT{0x50000014, 0x000001, 0x000019};
        constexpr ro_bit_field PTXFE{0x50000014, 0x000001, 0x00001a};
        constexpr rw_bit_field CIDSCHG{0x50000014, 0x000001, 0x00001c};
        constexpr rw_bit_field DISCINT{0x50000014, 0x000001, 0x00001d};
        constexpr rw_bit_field SRQINT{0x50000014, 0x000001, 0x00001e};
        constexpr rw_bit_field WKUPINT{0x50000014, 0x000001, 0x00001f};
    }

    namespace FS_GINTMSK {
        constexpr rw_bit_field MMISM{0x50000018, 0x000001, 0x000001};
        constexpr rw_bit_field OTGINT{0x50000018, 0x000001, 0x000002};
        constexpr rw_bit_field SOFM{0x50000018, 0x000001, 0x000003};
        constexpr rw_bit_field RXFLVLM{0x50000018, 0x000001, 0x000004};
        constexpr rw_bit_field NPTXFEM{0x50000018, 0x000001, 0x000005};
        constexpr rw_bit_field GINAKEFFM{0x50000018, 0x000001, 0x000006};
        constexpr rw_bit_field GONAKEFFM{0x50000018, 0x000001, 0x000007};
        constexpr rw_bit_field ESUSPM{0x50000018, 0x000001, 0x00000a};
        constexpr rw_bit_field USBSUSPM{0x50000018, 0x000001, 0x00000b};
        constexpr rw_bit_field USBRST{0x50000018, 0x000001, 0x00000c};
        constexpr rw_bit_field ENUMDNEM{0x50000018, 0x000001, 0x00000d};
        constexpr rw_bit_field ISOODRPM{0x50000018, 0x000001, 0x00000e};
        constexpr rw_bit_field EOPFM{0x50000018, 0x000001, 0x00000f};
        constexpr rw_bit_field EPMISM{0x50000018, 0x000001, 0x000011};
        constexpr rw_bit_field IEPINT{0x50000018, 0x000001, 0x000012};
        constexpr rw_bit_field OEPINT{0x50000018, 0x000001, 0x000013};
        constexpr rw_bit_field IISOIXFRM{0x50000018, 0x000001, 0x000014};
        constexpr rw_bit_field IPXFRM_IISOOXFRM{0x50000018, 0x000001, 0x000015};
        constexpr ro_bit_field PRTIM{0x50000018, 0x000001, 0x000018};
        constexpr rw_bit_field HCIM{0x50000018, 0x000001, 0x000019};
        constexpr rw_bit_field PTXFEM{0x50000018, 0x000001, 0x00001a};
        constexpr rw_bit_field CIDSCHGM{0x50000018, 0x000001, 0x00001c};
        constexpr rw_bit_field DISCINT{0x50000018, 0x000001, 0x00001d};
        constexpr rw_bit_field SRQIM{0x50000018, 0x000001, 0x00001e};
        constexpr rw_bit_field WUIM{0x50000018, 0x000001, 0x00001f};
    }

    namespace FS_GRXSTSR_Device {
        constexpr ro_bit_field EPNUM{0x5000001c, 0x00000f, 0x000000};
        constexpr ro_bit_field BCNT{0x5000001c, 0x0007ff, 0x000004};
        constexpr ro_bit_field DPID{0x5000001c, 0x000003, 0x00000f};
        constexpr ro_bit_field PKTSTS{0x5000001c, 0x00000f, 0x000011};
        constexpr ro_bit_field FRMNUM{0x5000001c, 0x00000f, 0x000015};
    }

    namespace FS_GRXSTSR_Host {
        constexpr ro_bit_field EPNUM{0x5000001c, 0x00000f, 0x000000};
        constexpr ro_bit_field BCNT{0x5000001c, 0x0007ff, 0x000004};
        constexpr ro_bit_field DPID{0x5000001c, 0x000003, 0x00000f};
        constexpr ro_bit_field PKTSTS{0x5000001c, 0x00000f, 0x000011};
        constexpr ro_bit_field FRMNUM{0x5000001c, 0x00000f, 0x000015};
    }

    namespace FS_GRXFSIZ {
        constexpr rw_bit_field RXFD{0x50000024, 0x00ffff, 0x000000};
    }

    namespace FS_GNPTXFSIZ_Device {
        constexpr rw_bit_field TX0FSA{0x50000028, 0x00ffff, 0x000000};
        constexpr rw_bit_field TX0FD{0x50000028, 0x00ffff, 0x000010};
    }

    namespace FS_GNPTXFSIZ_Host {
        constexpr rw_bit_field NPTXFSA{0x50000028, 0x00ffff, 0x000000};
        constexpr rw_bit_field NPTXFD{0x50000028, 0x00ffff, 0x000010};
    }

    namespace FS_GNPTXSTS {
        constexpr ro_bit_field NPTXFSAV{0x5000002c, 0x00ffff, 0x000000};
        constexpr ro_bit_field NPTQXSAV{0x5000002c, 0x0000ff, 0x000010};
        constexpr ro_bit_field NPTXQTOP{0x5000002c, 0x00007f, 0x000018};
    }

    namespace FS_GCCFG {
        constexpr rw_bit_field PWRDWN{0x50000038, 0x000001, 0x000010};
        constexpr rw_bit_field VBUSASEN{0x50000038, 0x000001, 0x000012};
        constexpr rw_bit_field VBUSBSEN{0x50000038, 0x000001, 0x000013};
        constexpr rw_bit_field SOFOUTEN{0x50000038, 0x000001, 0x000014};
    }

    namespace FS_CID {
        constexpr rw_bit_field PRODUCT_ID{0x5000003c, 0xffffffff, 0x000000};
    }

    namespace FS_HPTXFSIZ {
        constexpr rw_bit_field PTXSA{0x50000100, 0x00ffff, 0x000000};
        constexpr rw_bit_field PTXFSIZ{0x50000100, 0x00ffff, 0x000010};
    }

    namespace FS_DIEPTXF1 {
        constexpr rw_bit_field INEPTXSA{0x50000104, 0x00ffff, 0x000000};
        constexpr rw_bit_field INEPTXFD{0x50000104, 0x00ffff, 0x000010};
    }

    namespace FS_DIEPTXF2 {
        constexpr rw_bit_field INEPTXSA{0x50000108, 0x00ffff, 0x000000};
        constexpr rw_bit_field INEPTXFD{0x50000108, 0x00ffff, 0x000010};
    }

    namespace FS_DIEPTXF3 {
        constexpr rw_bit_field INEPTXSA{0x5000010c, 0x00ffff, 0x000000};
        constexpr rw_bit_field INEPTXFD{0x5000010c, 0x00ffff, 0x000010};
    }

}

namespace OTG_FS_HOST {
    namespace FS_HCFG {
        constexpr rw_bit_field FSLSPCS{0x50000400, 0x000003, 0x000000};
        constexpr ro_bit_field FSLSS{0x50000400, 0x000001, 0x000002};
    }

    namespace HFIR {
        constexpr rw_bit_field FRIVL{0x50000404, 0x00ffff, 0x000000};
    }

    namespace FS_HFNUM {
        constexpr ro_bit_field FRNUM{0x50000408, 0x00ffff, 0x000000};
        constexpr ro_bit_field FTREM{0x50000408, 0x00ffff, 0x000010};
    }

    namespace FS_HPTXSTS {
        constexpr rw_bit_field PTXFSAVL{0x50000410, 0x00ffff, 0x000000};
        constexpr ro_bit_field PTXQSAV{0x50000410, 0x0000ff, 0x000010};
        constexpr ro_bit_field PTXQTOP{0x50000410, 0x0000ff, 0x000018};
    }

    namespace HAINT {
        constexpr ro_bit_field HAINT{0x50000414, 0x00ffff, 0x000000};
    }

    namespace HAINTMSK {
        constexpr rw_bit_field HAINTM{0x50000418, 0x00ffff, 0x000000};
    }

    namespace FS_HPRT {
        constexpr ro_bit_field PCSTS{0x50000440, 0x000001, 0x000000};
        constexpr rw_bit_field PCDET{0x50000440, 0x000001, 0x000001};
        constexpr rw_bit_field PENA{0x50000440, 0x000001, 0x000002};
        constexpr rw_bit_field PENCHNG{0x50000440, 0x000001, 0x000003};
        constexpr ro_bit_field POCA{0x50000440, 0x000001, 0x000004};
        constexpr rw_bit_field POCCHNG{0x50000440, 0x000001, 0x000005};
        constexpr rw_bit_field PRES{0x50000440, 0x000001, 0x000006};
        constexpr rw_bit_field PSUSP{0x50000440, 0x000001, 0x000007};
        constexpr rw_bit_field PRST{0x50000440, 0x000001, 0x000008};
        constexpr ro_bit_field PLSTS{0x50000440, 0x000003, 0x00000a};
        constexpr rw_bit_field PPWR{0x50000440, 0x000001, 0x00000c};
        constexpr rw_bit_field PTCTL{0x50000440, 0x00000f, 0x00000d};
        constexpr ro_bit_field PSPD{0x50000440, 0x000003, 0x000011};
    }

    namespace FS_HCCHAR0 {
        constexpr rw_bit_field MPSIZ{0x50000500, 0x0007ff, 0x000000};
        constexpr rw_bit_field EPNUM{0x50000500, 0x00000f, 0x00000b};
        constexpr rw_bit_field EPDIR{0x50000500, 0x000001, 0x00000f};
        constexpr rw_bit_field LSDEV{0x50000500, 0x000001, 0x000011};
        constexpr rw_bit_field EPTYP{0x50000500, 0x000003, 0x000012};
        constexpr rw_bit_field MCNT{0x50000500, 0x000003, 0x000014};
        constexpr rw_bit_field DAD{0x50000500, 0x00007f, 0x000016};
        constexpr rw_bit_field ODDFRM{0x50000500, 0x000001, 0x00001d};
        constexpr rw_bit_field CHDIS{0x50000500, 0x000001, 0x00001e};
        constexpr rw_bit_field CHENA{0x50000500, 0x000001, 0x00001f};
    }

    namespace FS_HCCHAR1 {
        constexpr rw_bit_field MPSIZ{0x50000520, 0x0007ff, 0x000000};
        constexpr rw_bit_field EPNUM{0x50000520, 0x00000f, 0x00000b};
        constexpr rw_bit_field EPDIR{0x50000520, 0x000001, 0x00000f};
        constexpr rw_bit_field LSDEV{0x50000520, 0x000001, 0x000011};
        constexpr rw_bit_field EPTYP{0x50000520, 0x000003, 0x000012};
        constexpr rw_bit_field MCNT{0x50000520, 0x000003, 0x000014};
        constexpr rw_bit_field DAD{0x50000520, 0x00007f, 0x000016};
        constexpr rw_bit_field ODDFRM{0x50000520, 0x000001, 0x00001d};
        constexpr rw_bit_field CHDIS{0x50000520, 0x000001, 0x00001e};
        constexpr rw_bit_field CHENA{0x50000520, 0x000001, 0x00001f};
    }

    namespace FS_HCCHAR2 {
        constexpr rw_bit_field MPSIZ{0x50000540, 0x0007ff, 0x000000};
        constexpr rw_bit_field EPNUM{0x50000540, 0x00000f, 0x00000b};
        constexpr rw_bit_field EPDIR{0x50000540, 0x000001, 0x00000f};
        constexpr rw_bit_field LSDEV{0x50000540, 0x000001, 0x000011};
        constexpr rw_bit_field EPTYP{0x50000540, 0x000003, 0x000012};
        constexpr rw_bit_field MCNT{0x50000540, 0x000003, 0x000014};
        constexpr rw_bit_field DAD{0x50000540, 0x00007f, 0x000016};
        constexpr rw_bit_field ODDFRM{0x50000540, 0x000001, 0x00001d};
        constexpr rw_bit_field CHDIS{0x50000540, 0x000001, 0x00001e};
        constexpr rw_bit_field CHENA{0x50000540, 0x000001, 0x00001f};
    }

    namespace FS_HCCHAR3 {
        constexpr rw_bit_field MPSIZ{0x50000560, 0x0007ff, 0x000000};
        constexpr rw_bit_field EPNUM{0x50000560, 0x00000f, 0x00000b};
        constexpr rw_bit_field EPDIR{0x50000560, 0x000001, 0x00000f};
        constexpr rw_bit_field LSDEV{0x50000560, 0x000001, 0x000011};
        constexpr rw_bit_field EPTYP{0x50000560, 0x000003, 0x000012};
        constexpr rw_bit_field MCNT{0x50000560, 0x000003, 0x000014};
        constexpr rw_bit_field DAD{0x50000560, 0x00007f, 0x000016};
        constexpr rw_bit_field ODDFRM{0x50000560, 0x000001, 0x00001d};
        constexpr rw_bit_field CHDIS{0x50000560, 0x000001, 0x00001e};
        constexpr rw_bit_field CHENA{0x50000560, 0x000001, 0x00001f};
    }

    namespace FS_HCCHAR4 {
        constexpr rw_bit_field MPSIZ{0x50000580, 0x0007ff, 0x000000};
        constexpr rw_bit_field EPNUM{0x50000580, 0x00000f, 0x00000b};
        constexpr rw_bit_field EPDIR{0x50000580, 0x000001, 0x00000f};
        constexpr rw_bit_field LSDEV{0x50000580, 0x000001, 0x000011};
        constexpr rw_bit_field EPTYP{0x50000580, 0x000003, 0x000012};
        constexpr rw_bit_field MCNT{0x50000580, 0x000003, 0x000014};
        constexpr rw_bit_field DAD{0x50000580, 0x00007f, 0x000016};
        constexpr rw_bit_field ODDFRM{0x50000580, 0x000001, 0x00001d};
        constexpr rw_bit_field CHDIS{0x50000580, 0x000001, 0x00001e};
        constexpr rw_bit_field CHENA{0x50000580, 0x000001, 0x00001f};
    }

    namespace FS_HCCHAR5 {
        constexpr rw_bit_field MPSIZ{0x500005a0, 0x0007ff, 0x000000};
        constexpr rw_bit_field EPNUM{0x500005a0, 0x00000f, 0x00000b};
        constexpr rw_bit_field EPDIR{0x500005a0, 0x000001, 0x00000f};
        constexpr rw_bit_field LSDEV{0x500005a0, 0x000001, 0x000011};
        constexpr rw_bit_field EPTYP{0x500005a0, 0x000003, 0x000012};
        constexpr rw_bit_field MCNT{0x500005a0, 0x000003, 0x000014};
        constexpr rw_bit_field DAD{0x500005a0, 0x00007f, 0x000016};
        constexpr rw_bit_field ODDFRM{0x500005a0, 0x000001, 0x00001d};
        constexpr rw_bit_field CHDIS{0x500005a0, 0x000001, 0x00001e};
        constexpr rw_bit_field CHENA{0x500005a0, 0x000001, 0x00001f};
    }

    namespace FS_HCCHAR6 {
        constexpr rw_bit_field MPSIZ{0x500005c0, 0x0007ff, 0x000000};
        constexpr rw_bit_field EPNUM{0x500005c0, 0x00000f, 0x00000b};
        constexpr rw_bit_field EPDIR{0x500005c0, 0x000001, 0x00000f};
        constexpr rw_bit_field LSDEV{0x500005c0, 0x000001, 0x000011};
        constexpr rw_bit_field EPTYP{0x500005c0, 0x000003, 0x000012};
        constexpr rw_bit_field MCNT{0x500005c0, 0x000003, 0x000014};
        constexpr rw_bit_field DAD{0x500005c0, 0x00007f, 0x000016};
        constexpr rw_bit_field ODDFRM{0x500005c0, 0x000001, 0x00001d};
        constexpr rw_bit_field CHDIS{0x500005c0, 0x000001, 0x00001e};
        constexpr rw_bit_field CHENA{0x500005c0, 0x000001, 0x00001f};
    }

    namespace FS_HCCHAR7 {
        constexpr rw_bit_field MPSIZ{0x500005e0, 0x0007ff, 0x000000};
        constexpr rw_bit_field EPNUM{0x500005e0, 0x00000f, 0x00000b};
        constexpr rw_bit_field EPDIR{0x500005e0, 0x000001, 0x00000f};
        constexpr rw_bit_field LSDEV{0x500005e0, 0x000001, 0x000011};
        constexpr rw_bit_field EPTYP{0x500005e0, 0x000003, 0x000012};
        constexpr rw_bit_field MCNT{0x500005e0, 0x000003, 0x000014};
        constexpr rw_bit_field DAD{0x500005e0, 0x00007f, 0x000016};
        constexpr rw_bit_field ODDFRM{0x500005e0, 0x000001, 0x00001d};
        constexpr rw_bit_field CHDIS{0x500005e0, 0x000001, 0x00001e};
        constexpr rw_bit_field CHENA{0x500005e0, 0x000001, 0x00001f};
    }

    namespace FS_HCINT0 {
        constexpr rw_bit_field XFRC{0x50000508, 0x000001, 0x000000};
        constexpr rw_bit_field CHH{0x50000508, 0x000001, 0x000001};
        constexpr rw_bit_field STALL{0x50000508, 0x000001, 0x000003};
        constexpr rw_bit_field NAK{0x50000508, 0x000001, 0x000004};
        constexpr rw_bit_field ACK{0x50000508, 0x000001, 0x000005};
        constexpr rw_bit_field TXERR{0x50000508, 0x000001, 0x000007};
        constexpr rw_bit_field BBERR{0x50000508, 0x000001, 0x000008};
        constexpr rw_bit_field FRMOR{0x50000508, 0x000001, 0x000009};
        constexpr rw_bit_field DTERR{0x50000508, 0x000001, 0x00000a};
    }

    namespace FS_HCINT1 {
        constexpr rw_bit_field XFRC{0x50000528, 0x000001, 0x000000};
        constexpr rw_bit_field CHH{0x50000528, 0x000001, 0x000001};
        constexpr rw_bit_field STALL{0x50000528, 0x000001, 0x000003};
        constexpr rw_bit_field NAK{0x50000528, 0x000001, 0x000004};
        constexpr rw_bit_field ACK{0x50000528, 0x000001, 0x000005};
        constexpr rw_bit_field TXERR{0x50000528, 0x000001, 0x000007};
        constexpr rw_bit_field BBERR{0x50000528, 0x000001, 0x000008};
        constexpr rw_bit_field FRMOR{0x50000528, 0x000001, 0x000009};
        constexpr rw_bit_field DTERR{0x50000528, 0x000001, 0x00000a};
    }

    namespace FS_HCINT2 {
        constexpr rw_bit_field XFRC{0x50000548, 0x000001, 0x000000};
        constexpr rw_bit_field CHH{0x50000548, 0x000001, 0x000001};
        constexpr rw_bit_field STALL{0x50000548, 0x000001, 0x000003};
        constexpr rw_bit_field NAK{0x50000548, 0x000001, 0x000004};
        constexpr rw_bit_field ACK{0x50000548, 0x000001, 0x000005};
        constexpr rw_bit_field TXERR{0x50000548, 0x000001, 0x000007};
        constexpr rw_bit_field BBERR{0x50000548, 0x000001, 0x000008};
        constexpr rw_bit_field FRMOR{0x50000548, 0x000001, 0x000009};
        constexpr rw_bit_field DTERR{0x50000548, 0x000001, 0x00000a};
    }

    namespace FS_HCINT3 {
        constexpr rw_bit_field XFRC{0x50000568, 0x000001, 0x000000};
        constexpr rw_bit_field CHH{0x50000568, 0x000001, 0x000001};
        constexpr rw_bit_field STALL{0x50000568, 0x000001, 0x000003};
        constexpr rw_bit_field NAK{0x50000568, 0x000001, 0x000004};
        constexpr rw_bit_field ACK{0x50000568, 0x000001, 0x000005};
        constexpr rw_bit_field TXERR{0x50000568, 0x000001, 0x000007};
        constexpr rw_bit_field BBERR{0x50000568, 0x000001, 0x000008};
        constexpr rw_bit_field FRMOR{0x50000568, 0x000001, 0x000009};
        constexpr rw_bit_field DTERR{0x50000568, 0x000001, 0x00000a};
    }

    namespace FS_HCINT4 {
        constexpr rw_bit_field XFRC{0x50000588, 0x000001, 0x000000};
        constexpr rw_bit_field CHH{0x50000588, 0x000001, 0x000001};
        constexpr rw_bit_field STALL{0x50000588, 0x000001, 0x000003};
        constexpr rw_bit_field NAK{0x50000588, 0x000001, 0x000004};
        constexpr rw_bit_field ACK{0x50000588, 0x000001, 0x000005};
        constexpr rw_bit_field TXERR{0x50000588, 0x000001, 0x000007};
        constexpr rw_bit_field BBERR{0x50000588, 0x000001, 0x000008};
        constexpr rw_bit_field FRMOR{0x50000588, 0x000001, 0x000009};
        constexpr rw_bit_field DTERR{0x50000588, 0x000001, 0x00000a};
    }

    namespace FS_HCINT5 {
        constexpr rw_bit_field XFRC{0x500005a8, 0x000001, 0x000000};
        constexpr rw_bit_field CHH{0x500005a8, 0x000001, 0x000001};
        constexpr rw_bit_field STALL{0x500005a8, 0x000001, 0x000003};
        constexpr rw_bit_field NAK{0x500005a8, 0x000001, 0x000004};
        constexpr rw_bit_field ACK{0x500005a8, 0x000001, 0x000005};
        constexpr rw_bit_field TXERR{0x500005a8, 0x000001, 0x000007};
        constexpr rw_bit_field BBERR{0x500005a8, 0x000001, 0x000008};
        constexpr rw_bit_field FRMOR{0x500005a8, 0x000001, 0x000009};
        constexpr rw_bit_field DTERR{0x500005a8, 0x000001, 0x00000a};
    }

    namespace FS_HCINT6 {
        constexpr rw_bit_field XFRC{0x500005c8, 0x000001, 0x000000};
        constexpr rw_bit_field CHH{0x500005c8, 0x000001, 0x000001};
        constexpr rw_bit_field STALL{0x500005c8, 0x000001, 0x000003};
        constexpr rw_bit_field NAK{0x500005c8, 0x000001, 0x000004};
        constexpr rw_bit_field ACK{0x500005c8, 0x000001, 0x000005};
        constexpr rw_bit_field TXERR{0x500005c8, 0x000001, 0x000007};
        constexpr rw_bit_field BBERR{0x500005c8, 0x000001, 0x000008};
        constexpr rw_bit_field FRMOR{0x500005c8, 0x000001, 0x000009};
        constexpr rw_bit_field DTERR{0x500005c8, 0x000001, 0x00000a};
    }

    namespace FS_HCINT7 {
        constexpr rw_bit_field XFRC{0x500005e8, 0x000001, 0x000000};
        constexpr rw_bit_field CHH{0x500005e8, 0x000001, 0x000001};
        constexpr rw_bit_field STALL{0x500005e8, 0x000001, 0x000003};
        constexpr rw_bit_field NAK{0x500005e8, 0x000001, 0x000004};
        constexpr rw_bit_field ACK{0x500005e8, 0x000001, 0x000005};
        constexpr rw_bit_field TXERR{0x500005e8, 0x000001, 0x000007};
        constexpr rw_bit_field BBERR{0x500005e8, 0x000001, 0x000008};
        constexpr rw_bit_field FRMOR{0x500005e8, 0x000001, 0x000009};
        constexpr rw_bit_field DTERR{0x500005e8, 0x000001, 0x00000a};
    }

    namespace FS_HCINTMSK0 {
        constexpr rw_bit_field XFRCM{0x5000050c, 0x000001, 0x000000};
        constexpr rw_bit_field CHHM{0x5000050c, 0x000001, 0x000001};
        constexpr rw_bit_field STALLM{0x5000050c, 0x000001, 0x000003};
        constexpr rw_bit_field NAKM{0x5000050c, 0x000001, 0x000004};
        constexpr rw_bit_field ACKM{0x5000050c, 0x000001, 0x000005};
        constexpr rw_bit_field NYET{0x5000050c, 0x000001, 0x000006};
        constexpr rw_bit_field TXERRM{0x5000050c, 0x000001, 0x000007};
        constexpr rw_bit_field BBERRM{0x5000050c, 0x000001, 0x000008};
        constexpr rw_bit_field FRMORM{0x5000050c, 0x000001, 0x000009};
        constexpr rw_bit_field DTERRM{0x5000050c, 0x000001, 0x00000a};
    }

    namespace FS_HCINTMSK1 {
        constexpr rw_bit_field XFRCM{0x5000052c, 0x000001, 0x000000};
        constexpr rw_bit_field CHHM{0x5000052c, 0x000001, 0x000001};
        constexpr rw_bit_field STALLM{0x5000052c, 0x000001, 0x000003};
        constexpr rw_bit_field NAKM{0x5000052c, 0x000001, 0x000004};
        constexpr rw_bit_field ACKM{0x5000052c, 0x000001, 0x000005};
        constexpr rw_bit_field NYET{0x5000052c, 0x000001, 0x000006};
        constexpr rw_bit_field TXERRM{0x5000052c, 0x000001, 0x000007};
        constexpr rw_bit_field BBERRM{0x5000052c, 0x000001, 0x000008};
        constexpr rw_bit_field FRMORM{0x5000052c, 0x000001, 0x000009};
        constexpr rw_bit_field DTERRM{0x5000052c, 0x000001, 0x00000a};
    }

    namespace FS_HCINTMSK2 {
        constexpr rw_bit_field XFRCM{0x5000054c, 0x000001, 0x000000};
        constexpr rw_bit_field CHHM{0x5000054c, 0x000001, 0x000001};
        constexpr rw_bit_field STALLM{0x5000054c, 0x000001, 0x000003};
        constexpr rw_bit_field NAKM{0x5000054c, 0x000001, 0x000004};
        constexpr rw_bit_field ACKM{0x5000054c, 0x000001, 0x000005};
        constexpr rw_bit_field NYET{0x5000054c, 0x000001, 0x000006};
        constexpr rw_bit_field TXERRM{0x5000054c, 0x000001, 0x000007};
        constexpr rw_bit_field BBERRM{0x5000054c, 0x000001, 0x000008};
        constexpr rw_bit_field FRMORM{0x5000054c, 0x000001, 0x000009};
        constexpr rw_bit_field DTERRM{0x5000054c, 0x000001, 0x00000a};
    }

    namespace FS_HCINTMSK3 {
        constexpr rw_bit_field XFRCM{0x5000056c, 0x000001, 0x000000};
        constexpr rw_bit_field CHHM{0x5000056c, 0x000001, 0x000001};
        constexpr rw_bit_field STALLM{0x5000056c, 0x000001, 0x000003};
        constexpr rw_bit_field NAKM{0x5000056c, 0x000001, 0x000004};
        constexpr rw_bit_field ACKM{0x5000056c, 0x000001, 0x000005};
        constexpr rw_bit_field NYET{0x5000056c, 0x000001, 0x000006};
        constexpr rw_bit_field TXERRM{0x5000056c, 0x000001, 0x000007};
        constexpr rw_bit_field BBERRM{0x5000056c, 0x000001, 0x000008};
        constexpr rw_bit_field FRMORM{0x5000056c, 0x000001, 0x000009};
        constexpr rw_bit_field DTERRM{0x5000056c, 0x000001, 0x00000a};
    }

    namespace FS_HCINTMSK4 {
        constexpr rw_bit_field XFRCM{0x5000058c, 0x000001, 0x000000};
        constexpr rw_bit_field CHHM{0x5000058c, 0x000001, 0x000001};
        constexpr rw_bit_field STALLM{0x5000058c, 0x000001, 0x000003};
        constexpr rw_bit_field NAKM{0x5000058c, 0x000001, 0x000004};
        constexpr rw_bit_field ACKM{0x5000058c, 0x000001, 0x000005};
        constexpr rw_bit_field NYET{0x5000058c, 0x000001, 0x000006};
        constexpr rw_bit_field TXERRM{0x5000058c, 0x000001, 0x000007};
        constexpr rw_bit_field BBERRM{0x5000058c, 0x000001, 0x000008};
        constexpr rw_bit_field FRMORM{0x5000058c, 0x000001, 0x000009};
        constexpr rw_bit_field DTERRM{0x5000058c, 0x000001, 0x00000a};
    }

    namespace FS_HCINTMSK5 {
        constexpr rw_bit_field XFRCM{0x500005ac, 0x000001, 0x000000};
        constexpr rw_bit_field CHHM{0x500005ac, 0x000001, 0x000001};
        constexpr rw_bit_field STALLM{0x500005ac, 0x000001, 0x000003};
        constexpr rw_bit_field NAKM{0x500005ac, 0x000001, 0x000004};
        constexpr rw_bit_field ACKM{0x500005ac, 0x000001, 0x000005};
        constexpr rw_bit_field NYET{0x500005ac, 0x000001, 0x000006};
        constexpr rw_bit_field TXERRM{0x500005ac, 0x000001, 0x000007};
        constexpr rw_bit_field BBERRM{0x500005ac, 0x000001, 0x000008};
        constexpr rw_bit_field FRMORM{0x500005ac, 0x000001, 0x000009};
        constexpr rw_bit_field DTERRM{0x500005ac, 0x000001, 0x00000a};
    }

    namespace FS_HCINTMSK6 {
        constexpr rw_bit_field XFRCM{0x500005cc, 0x000001, 0x000000};
        constexpr rw_bit_field CHHM{0x500005cc, 0x000001, 0x000001};
        constexpr rw_bit_field STALLM{0x500005cc, 0x000001, 0x000003};
        constexpr rw_bit_field NAKM{0x500005cc, 0x000001, 0x000004};
        constexpr rw_bit_field ACKM{0x500005cc, 0x000001, 0x000005};
        constexpr rw_bit_field NYET{0x500005cc, 0x000001, 0x000006};
        constexpr rw_bit_field TXERRM{0x500005cc, 0x000001, 0x000007};
        constexpr rw_bit_field BBERRM{0x500005cc, 0x000001, 0x000008};
        constexpr rw_bit_field FRMORM{0x500005cc, 0x000001, 0x000009};
        constexpr rw_bit_field DTERRM{0x500005cc, 0x000001, 0x00000a};
    }

    namespace FS_HCINTMSK7 {
        constexpr rw_bit_field XFRCM{0x500005ec, 0x000001, 0x000000};
        constexpr rw_bit_field CHHM{0x500005ec, 0x000001, 0x000001};
        constexpr rw_bit_field STALLM{0x500005ec, 0x000001, 0x000003};
        constexpr rw_bit_field NAKM{0x500005ec, 0x000001, 0x000004};
        constexpr rw_bit_field ACKM{0x500005ec, 0x000001, 0x000005};
        constexpr rw_bit_field NYET{0x500005ec, 0x000001, 0x000006};
        constexpr rw_bit_field TXERRM{0x500005ec, 0x000001, 0x000007};
        constexpr rw_bit_field BBERRM{0x500005ec, 0x000001, 0x000008};
        constexpr rw_bit_field FRMORM{0x500005ec, 0x000001, 0x000009};
        constexpr rw_bit_field DTERRM{0x500005ec, 0x000001, 0x00000a};
    }

    namespace FS_HCTSIZ0 {
        constexpr rw_bit_field XFRSIZ{0x50000510, 0x07ffff, 0x000000};
        constexpr rw_bit_field PKTCNT{0x50000510, 0x0003ff, 0x000013};
        constexpr rw_bit_field DPID{0x50000510, 0x000003, 0x00001d};
    }

    namespace FS_HCTSIZ1 {
        constexpr rw_bit_field XFRSIZ{0x50000530, 0x07ffff, 0x000000};
        constexpr rw_bit_field PKTCNT{0x50000530, 0x0003ff, 0x000013};
        constexpr rw_bit_field DPID{0x50000530, 0x000003, 0x00001d};
    }

    namespace FS_HCTSIZ2 {
        constexpr rw_bit_field XFRSIZ{0x50000550, 0x07ffff, 0x000000};
        constexpr rw_bit_field PKTCNT{0x50000550, 0x0003ff, 0x000013};
        constexpr rw_bit_field DPID{0x50000550, 0x000003, 0x00001d};
    }

    namespace FS_HCTSIZ3 {
        constexpr rw_bit_field XFRSIZ{0x50000570, 0x07ffff, 0x000000};
        constexpr rw_bit_field PKTCNT{0x50000570, 0x0003ff, 0x000013};
        constexpr rw_bit_field DPID{0x50000570, 0x000003, 0x00001d};
    }

    namespace FS_HCTSIZ4 {
        constexpr rw_bit_field XFRSIZ{0x50000590, 0x07ffff, 0x000000};
        constexpr rw_bit_field PKTCNT{0x50000590, 0x0003ff, 0x000013};
        constexpr rw_bit_field DPID{0x50000590, 0x000003, 0x00001d};
    }

    namespace FS_HCTSIZ5 {
        constexpr rw_bit_field XFRSIZ{0x500005b0, 0x07ffff, 0x000000};
        constexpr rw_bit_field PKTCNT{0x500005b0, 0x0003ff, 0x000013};
        constexpr rw_bit_field DPID{0x500005b0, 0x000003, 0x00001d};
    }

    namespace FS_HCTSIZ6 {
        constexpr rw_bit_field XFRSIZ{0x500005d0, 0x07ffff, 0x000000};
        constexpr rw_bit_field PKTCNT{0x500005d0, 0x0003ff, 0x000013};
        constexpr rw_bit_field DPID{0x500005d0, 0x000003, 0x00001d};
    }

    namespace FS_HCTSIZ7 {
        constexpr rw_bit_field XFRSIZ{0x500005f0, 0x07ffff, 0x000000};
        constexpr rw_bit_field PKTCNT{0x500005f0, 0x0003ff, 0x000013};
        constexpr rw_bit_field DPID{0x500005f0, 0x000003, 0x00001d};
    }

}

namespace OTG_FS_PWRCLK {
    namespace FS_PCGCCTL {
        constexpr rw_bit_field STPPCLK{0x50000e00, 0x000001, 0x000000};
        constexpr rw_bit_field GATEHCLK{0x50000e00, 0x000001, 0x000001};
        constexpr rw_bit_field PHYSUSP{0x50000e00, 0x000001, 0x000004};
    }

}

namespace PWR {
    namespace CR {
        constexpr rw_bit_field VOS{0x40007000, 0x000003, 0x00000e};
        constexpr rw_bit_field ADCDC1{0x40007000, 0x000001, 0x00000d};
        constexpr rw_bit_field FPDS{0x40007000, 0x000001, 0x000009};
        constexpr rw_bit_field DBP{0x40007000, 0x000001, 0x000008};
        constexpr rw_bit_field PLS{0x40007000, 0x000007, 0x000005};
        constexpr rw_bit_field PVDE{0x40007000, 0x000001, 0x000004};
        constexpr rw_bit_field CSBF{0x40007000, 0x000001, 0x000003};
        constexpr rw_bit_field CWUF{0x40007000, 0x000001, 0x000002};
        constexpr rw_bit_field PDDS{0x40007000, 0x000001, 0x000001};
        constexpr rw_bit_field LPDS{0x40007000, 0x000001, 0x000000};
    }

    namespace CSR {
        constexpr ro_bit_field WUF{0x40007004, 0x000001, 0x000000};
        constexpr ro_bit_field SBF{0x40007004, 0x000001, 0x000001};
        constexpr ro_bit_field PVDO{0x40007004, 0x000001, 0x000002};
        constexpr ro_bit_field BRR{0x40007004, 0x000001, 0x000003};
        constexpr rw_bit_field EWUP{0x40007004, 0x000001, 0x000008};
        constexpr rw_bit_field BRE{0x40007004, 0x000001, 0x000009};
        constexpr rw_bit_field VOSRDY{0x40007004, 0x000001, 0x00000e};
    }

}

namespace RCC {
    namespace CR {
        constexpr ro_bit_field PLLI2SRDY{0x40023800, 0x000001, 0x00001b};
        constexpr rw_bit_field PLLI2SON{0x40023800, 0x000001, 0x00001a};
        constexpr ro_bit_field PLLRDY{0x40023800, 0x000001, 0x000019};
        constexpr rw_bit_field PLLON{0x40023800, 0x000001, 0x000018};
        constexpr rw_bit_field CSSON{0x40023800, 0x000001, 0x000013};
        constexpr rw_bit_field HSEBYP{0x40023800, 0x000001, 0x000012};
        constexpr ro_bit_field HSERDY{0x40023800, 0x000001, 0x000011};
        constexpr rw_bit_field HSEON{0x40023800, 0x000001, 0x000010};
        constexpr ro_bit_field HSICAL{0x40023800, 0x0000ff, 0x000008};
        constexpr rw_bit_field HSITRIM{0x40023800, 0x00001f, 0x000003};
        constexpr ro_bit_field HSIRDY{0x40023800, 0x000001, 0x000001};
        constexpr rw_bit_field HSION{0x40023800, 0x000001, 0x000000};
    }

    namespace PLLCFGR {
        constexpr rw_bit_field PLLQ3{0x40023804, 0x000001, 0x00001b};
        constexpr rw_bit_field PLLQ2{0x40023804, 0x000001, 0x00001a};
        constexpr rw_bit_field PLLQ1{0x40023804, 0x000001, 0x000019};
        constexpr rw_bit_field PLLQ0{0x40023804, 0x000001, 0x000018};
        constexpr rw_bit_field PLLSRC{0x40023804, 0x000001, 0x000016};
        constexpr rw_bit_field PLLP1{0x40023804, 0x000001, 0x000011};
        constexpr rw_bit_field PLLP0{0x40023804, 0x000001, 0x000010};
        constexpr rw_bit_field PLLN8{0x40023804, 0x000001, 0x00000e};
        constexpr rw_bit_field PLLN7{0x40023804, 0x000001, 0x00000d};
        constexpr rw_bit_field PLLN6{0x40023804, 0x000001, 0x00000c};
        constexpr rw_bit_field PLLN5{0x40023804, 0x000001, 0x00000b};
        constexpr rw_bit_field PLLN4{0x40023804, 0x000001, 0x00000a};
        constexpr rw_bit_field PLLN3{0x40023804, 0x000001, 0x000009};
        constexpr rw_bit_field PLLN2{0x40023804, 0x000001, 0x000008};
        constexpr rw_bit_field PLLN1{0x40023804, 0x000001, 0x000007};
        constexpr rw_bit_field PLLN0{0x40023804, 0x000001, 0x000006};
        constexpr rw_bit_field PLLM5{0x40023804, 0x000001, 0x000005};
        constexpr rw_bit_field PLLM4{0x40023804, 0x000001, 0x000004};
        constexpr rw_bit_field PLLM3{0x40023804, 0x000001, 0x000003};
        constexpr rw_bit_field PLLM2{0x40023804, 0x000001, 0x000002};
        constexpr rw_bit_field PLLM1{0x40023804, 0x000001, 0x000001};
        constexpr rw_bit_field PLLM0{0x40023804, 0x000001, 0x000000};
    }

    namespace CFGR {
        constexpr rw_bit_field MCO2{0x40023808, 0x000003, 0x00001e};
        constexpr rw_bit_field MCO2PRE{0x40023808, 0x000007, 0x00001b};
        constexpr rw_bit_field MCO1PRE{0x40023808, 0x000007, 0x000018};
        constexpr rw_bit_field I2SSRC{0x40023808, 0x000001, 0x000017};
        constexpr rw_bit_field MCO1{0x40023808, 0x000003, 0x000015};
        constexpr rw_bit_field RTCPRE{0x40023808, 0x00001f, 0x000010};
        constexpr rw_bit_field PPRE2{0x40023808, 0x000007, 0x00000d};
        constexpr rw_bit_field PPRE1{0x40023808, 0x000007, 0x00000a};
        constexpr rw_bit_field HPRE{0x40023808, 0x00000f, 0x000004};
        constexpr ro_bit_field SWS1{0x40023808, 0x000001, 0x000003};
        constexpr ro_bit_field SWS0{0x40023808, 0x000001, 0x000002};
        constexpr rw_bit_field SW1{0x40023808, 0x000001, 0x000001};
        constexpr rw_bit_field SW0{0x40023808, 0x000001, 0x000000};
    }

    namespace CIR {
        constexpr wo_bit_field CSSC{0x4002380c, 0x000001, 0x000017};
        constexpr wo_bit_field PLLI2SRDYC{0x4002380c, 0x000001, 0x000015};
        constexpr wo_bit_field PLLRDYC{0x4002380c, 0x000001, 0x000014};
        constexpr wo_bit_field HSERDYC{0x4002380c, 0x000001, 0x000013};
        constexpr wo_bit_field HSIRDYC{0x4002380c, 0x000001, 0x000012};
        constexpr wo_bit_field LSERDYC{0x4002380c, 0x000001, 0x000011};
        constexpr wo_bit_field LSIRDYC{0x4002380c, 0x000001, 0x000010};
        constexpr rw_bit_field PLLI2SRDYIE{0x4002380c, 0x000001, 0x00000d};
        constexpr rw_bit_field PLLRDYIE{0x4002380c, 0x000001, 0x00000c};
        constexpr rw_bit_field HSERDYIE{0x4002380c, 0x000001, 0x00000b};
        constexpr rw_bit_field HSIRDYIE{0x4002380c, 0x000001, 0x00000a};
        constexpr rw_bit_field LSERDYIE{0x4002380c, 0x000001, 0x000009};
        constexpr rw_bit_field LSIRDYIE{0x4002380c, 0x000001, 0x000008};
        constexpr ro_bit_field CSSF{0x4002380c, 0x000001, 0x000007};
        constexpr ro_bit_field PLLI2SRDYF{0x4002380c, 0x000001, 0x000005};
        constexpr ro_bit_field PLLRDYF{0x4002380c, 0x000001, 0x000004};
        constexpr ro_bit_field HSERDYF{0x4002380c, 0x000001, 0x000003};
        constexpr ro_bit_field HSIRDYF{0x4002380c, 0x000001, 0x000002};
        constexpr ro_bit_field LSERDYF{0x4002380c, 0x000001, 0x000001};
        constexpr ro_bit_field LSIRDYF{0x4002380c, 0x000001, 0x000000};
    }

    namespace AHB1RSTR {
        constexpr rw_bit_field DMA2RST{0x40023810, 0x000001, 0x000016};
        constexpr rw_bit_field DMA1RST{0x40023810, 0x000001, 0x000015};
        constexpr rw_bit_field CRCRST{0x40023810, 0x000001, 0x00000c};
        constexpr rw_bit_field GPIOHRST{0x40023810, 0x000001, 0x000007};
        constexpr rw_bit_field GPIOERST{0x40023810, 0x000001, 0x000004};
        constexpr rw_bit_field GPIODRST{0x40023810, 0x000001, 0x000003};
        constexpr rw_bit_field GPIOCRST{0x40023810, 0x000001, 0x000002};
        constexpr rw_bit_field GPIOBRST{0x40023810, 0x000001, 0x000001};
        constexpr rw_bit_field GPIOARST{0x40023810, 0x000001, 0x000000};
    }

    namespace AHB2RSTR {
        constexpr rw_bit_field OTGFSRST{0x40023814, 0x000001, 0x000007};
    }

    namespace APB1RSTR {
        constexpr rw_bit_field PWRRST{0x40023820, 0x000001, 0x00001c};
        constexpr rw_bit_field I2C3RST{0x40023820, 0x000001, 0x000017};
        constexpr rw_bit_field I2C2RST{0x40023820, 0x000001, 0x000016};
        constexpr rw_bit_field I2C1RST{0x40023820, 0x000001, 0x000015};
        constexpr rw_bit_field UART2RST{0x40023820, 0x000001, 0x000011};
        constexpr rw_bit_field SPI3RST{0x40023820, 0x000001, 0x00000f};
        constexpr rw_bit_field SPI2RST{0x40023820, 0x000001, 0x00000e};
        constexpr rw_bit_field WWDGRST{0x40023820, 0x000001, 0x00000b};
        constexpr rw_bit_field TIM5RST{0x40023820, 0x000001, 0x000003};
        constexpr rw_bit_field TIM4RST{0x40023820, 0x000001, 0x000002};
        constexpr rw_bit_field TIM3RST{0x40023820, 0x000001, 0x000001};
        constexpr rw_bit_field TIM2RST{0x40023820, 0x000001, 0x000000};
    }

    namespace APB2RSTR {
        constexpr rw_bit_field TIM11RST{0x40023824, 0x000001, 0x000012};
        constexpr rw_bit_field TIM10RST{0x40023824, 0x000001, 0x000011};
        constexpr rw_bit_field TIM9RST{0x40023824, 0x000001, 0x000010};
        constexpr rw_bit_field SYSCFGRST{0x40023824, 0x000001, 0x00000e};
        constexpr rw_bit_field SPI1RST{0x40023824, 0x000001, 0x00000c};
        constexpr rw_bit_field SDIORST{0x40023824, 0x000001, 0x00000b};
        constexpr rw_bit_field ADCRST{0x40023824, 0x000001, 0x000008};
        constexpr rw_bit_field USART6RST{0x40023824, 0x000001, 0x000005};
        constexpr rw_bit_field USART1RST{0x40023824, 0x000001, 0x000004};
        constexpr rw_bit_field TIM1RST{0x40023824, 0x000001, 0x000000};
    }

    namespace AHB1ENR {
        constexpr rw_bit_field DMA2EN{0x40023830, 0x000001, 0x000016};
        constexpr rw_bit_field DMA1EN{0x40023830, 0x000001, 0x000015};
        constexpr rw_bit_field CRCEN{0x40023830, 0x000001, 0x00000c};
        constexpr rw_bit_field GPIOHEN{0x40023830, 0x000001, 0x000007};
        constexpr rw_bit_field GPIOEEN{0x40023830, 0x000001, 0x000004};
        constexpr rw_bit_field GPIODEN{0x40023830, 0x000001, 0x000003};
        constexpr rw_bit_field GPIOCEN{0x40023830, 0x000001, 0x000002};
        constexpr rw_bit_field GPIOBEN{0x40023830, 0x000001, 0x000001};
        constexpr rw_bit_field GPIOAEN{0x40023830, 0x000001, 0x000000};
    }

    namespace AHB2ENR {
        constexpr rw_bit_field OTGFSEN{0x40023834, 0x000001, 0x000007};
    }

    namespace APB1ENR {
        constexpr rw_bit_field PWREN{0x40023840, 0x000001, 0x00001c};
        constexpr rw_bit_field I2C3EN{0x40023840, 0x000001, 0x000017};
        constexpr rw_bit_field I2C2EN{0x40023840, 0x000001, 0x000016};
        constexpr rw_bit_field I2C1EN{0x40023840, 0x000001, 0x000015};
        constexpr rw_bit_field USART2EN{0x40023840, 0x000001, 0x000011};
        constexpr rw_bit_field SPI3EN{0x40023840, 0x000001, 0x00000f};
        constexpr rw_bit_field SPI2EN{0x40023840, 0x000001, 0x00000e};
        constexpr rw_bit_field WWDGEN{0x40023840, 0x000001, 0x00000b};
        constexpr rw_bit_field TIM5EN{0x40023840, 0x000001, 0x000003};
        constexpr rw_bit_field TIM4EN{0x40023840, 0x000001, 0x000002};
        constexpr rw_bit_field TIM3EN{0x40023840, 0x000001, 0x000001};
        constexpr rw_bit_field TIM2EN{0x40023840, 0x000001, 0x000000};
    }

    namespace APB2ENR {
        constexpr rw_bit_field TIM1EN{0x40023844, 0x000001, 0x000000};
        constexpr rw_bit_field USART1EN{0x40023844, 0x000001, 0x000004};
        constexpr rw_bit_field USART6EN{0x40023844, 0x000001, 0x000005};
        constexpr rw_bit_field ADC1EN{0x40023844, 0x000001, 0x000008};
        constexpr rw_bit_field SDIOEN{0x40023844, 0x000001, 0x00000b};
        constexpr rw_bit_field SPI1EN{0x40023844, 0x000001, 0x00000c};
        constexpr rw_bit_field SPI4EN{0x40023844, 0x000001, 0x00000d};
        constexpr rw_bit_field SYSCFGEN{0x40023844, 0x000001, 0x00000e};
        constexpr rw_bit_field TIM9EN{0x40023844, 0x000001, 0x000010};
        constexpr rw_bit_field TIM10EN{0x40023844, 0x000001, 0x000011};
        constexpr rw_bit_field TIM11EN{0x40023844, 0x000001, 0x000012};
    }

    namespace AHB1LPENR {
        constexpr rw_bit_field DMA2LPEN{0x40023850, 0x000001, 0x000016};
        constexpr rw_bit_field DMA1LPEN{0x40023850, 0x000001, 0x000015};
        constexpr rw_bit_field SRAM1LPEN{0x40023850, 0x000001, 0x000010};
        constexpr rw_bit_field FLITFLPEN{0x40023850, 0x000001, 0x00000f};
        constexpr rw_bit_field CRCLPEN{0x40023850, 0x000001, 0x00000c};
        constexpr rw_bit_field GPIOHLPEN{0x40023850, 0x000001, 0x000007};
        constexpr rw_bit_field GPIOELPEN{0x40023850, 0x000001, 0x000004};
        constexpr rw_bit_field GPIODLPEN{0x40023850, 0x000001, 0x000003};
        constexpr rw_bit_field GPIOCLPEN{0x40023850, 0x000001, 0x000002};
        constexpr rw_bit_field GPIOBLPEN{0x40023850, 0x000001, 0x000001};
        constexpr rw_bit_field GPIOALPEN{0x40023850, 0x000001, 0x000000};
    }

    namespace AHB2LPENR {
        constexpr rw_bit_field OTGFSLPEN{0x40023854, 0x000001, 0x000007};
    }

    namespace APB1LPENR {
        constexpr rw_bit_field PWRLPEN{0x40023860, 0x000001, 0x00001c};
        constexpr rw_bit_field I2C3LPEN{0x40023860, 0x000001, 0x000017};
        constexpr rw_bit_field I2C2LPEN{0x40023860, 0x000001, 0x000016};
        constexpr rw_bit_field I2C1LPEN{0x40023860, 0x000001, 0x000015};
        constexpr rw_bit_field USART2LPEN{0x40023860, 0x000001, 0x000011};
        constexpr rw_bit_field SPI3LPEN{0x40023860, 0x000001, 0x00000f};
        constexpr rw_bit_field SPI2LPEN{0x40023860, 0x000001, 0x00000e};
        constexpr rw_bit_field WWDGLPEN{0x40023860, 0x000001, 0x00000b};
        constexpr rw_bit_field TIM5LPEN{0x40023860, 0x000001, 0x000003};
        constexpr rw_bit_field TIM4LPEN{0x40023860, 0x000001, 0x000002};
        constexpr rw_bit_field TIM3LPEN{0x40023860, 0x000001, 0x000001};
        constexpr rw_bit_field TIM2LPEN{0x40023860, 0x000001, 0x000000};
    }

    namespace APB2LPENR {
        constexpr rw_bit_field TIM1LPEN{0x40023864, 0x000001, 0x000000};
        constexpr rw_bit_field USART1LPEN{0x40023864, 0x000001, 0x000004};
        constexpr rw_bit_field USART6LPEN{0x40023864, 0x000001, 0x000005};
        constexpr rw_bit_field ADC1LPEN{0x40023864, 0x000001, 0x000008};
        constexpr rw_bit_field SDIOLPEN{0x40023864, 0x000001, 0x00000b};
        constexpr rw_bit_field SPI1LPEN{0x40023864, 0x000001, 0x00000c};
        constexpr rw_bit_field SPI4LPEN{0x40023864, 0x000001, 0x00000d};
        constexpr rw_bit_field SYSCFGLPEN{0x40023864, 0x000001, 0x00000e};
        constexpr rw_bit_field TIM9LPEN{0x40023864, 0x000001, 0x000010};
        constexpr rw_bit_field TIM10LPEN{0x40023864, 0x000001, 0x000011};
        constexpr rw_bit_field TIM11LPEN{0x40023864, 0x000001, 0x000012};
    }

    namespace BDCR {
        constexpr rw_bit_field BDRST{0x40023870, 0x000001, 0x000010};
        constexpr rw_bit_field RTCEN{0x40023870, 0x000001, 0x00000f};
        constexpr rw_bit_field RTCSEL1{0x40023870, 0x000001, 0x000009};
        constexpr rw_bit_field RTCSEL0{0x40023870, 0x000001, 0x000008};
        constexpr rw_bit_field LSEBYP{0x40023870, 0x000001, 0x000002};
        constexpr ro_bit_field LSERDY{0x40023870, 0x000001, 0x000001};
        constexpr rw_bit_field LSEON{0x40023870, 0x000001, 0x000000};
    }

    namespace CSR {
        constexpr rw_bit_field LPWRRSTF{0x40023874, 0x000001, 0x00001f};
        constexpr rw_bit_field WWDGRSTF{0x40023874, 0x000001, 0x00001e};
        constexpr rw_bit_field WDGRSTF{0x40023874, 0x000001, 0x00001d};
        constexpr rw_bit_field SFTRSTF{0x40023874, 0x000001, 0x00001c};
        constexpr rw_bit_field PORRSTF{0x40023874, 0x000001, 0x00001b};
        constexpr rw_bit_field PADRSTF{0x40023874, 0x000001, 0x00001a};
        constexpr rw_bit_field BORRSTF{0x40023874, 0x000001, 0x000019};
        constexpr rw_bit_field RMVF{0x40023874, 0x000001, 0x000018};
        constexpr ro_bit_field LSIRDY{0x40023874, 0x000001, 0x000001};
        constexpr rw_bit_field LSION{0x40023874, 0x000001, 0x000000};
    }

    namespace SSCGR {
        constexpr rw_bit_field SSCGEN{0x40023880, 0x000001, 0x00001f};
        constexpr rw_bit_field SPREADSEL{0x40023880, 0x000001, 0x00001e};
        constexpr rw_bit_field INCSTEP{0x40023880, 0x007fff, 0x00000d};
        constexpr rw_bit_field MODPER{0x40023880, 0x001fff, 0x000000};
    }

    namespace PLLI2SCFGR {
        constexpr rw_bit_field PLLI2SRx{0x40023884, 0x000007, 0x00001c};
        constexpr rw_bit_field PLLI2SNx{0x40023884, 0x0001ff, 0x000006};
    }

}

namespace RTC {
    namespace TR {
        constexpr rw_bit_field PM{0x40002800, 0x000001, 0x000016};
        constexpr rw_bit_field HT{0x40002800, 0x000003, 0x000014};
        constexpr rw_bit_field HU{0x40002800, 0x00000f, 0x000010};
        constexpr rw_bit_field MNT{0x40002800, 0x000007, 0x00000c};
        constexpr rw_bit_field MNU{0x40002800, 0x00000f, 0x000008};
        constexpr rw_bit_field ST{0x40002800, 0x000007, 0x000004};
        constexpr rw_bit_field SU{0x40002800, 0x00000f, 0x000000};
    }

    namespace DR {
        constexpr rw_bit_field YT{0x40002804, 0x00000f, 0x000014};
        constexpr rw_bit_field YU{0x40002804, 0x00000f, 0x000010};
        constexpr rw_bit_field WDU{0x40002804, 0x000007, 0x00000d};
        constexpr rw_bit_field MT{0x40002804, 0x000001, 0x00000c};
        constexpr rw_bit_field MU{0x40002804, 0x00000f, 0x000008};
        constexpr rw_bit_field DT{0x40002804, 0x000003, 0x000004};
        constexpr rw_bit_field DU{0x40002804, 0x00000f, 0x000000};
    }

    namespace CR {
        constexpr rw_bit_field COE{0x40002808, 0x000001, 0x000017};
        constexpr rw_bit_field OSEL{0x40002808, 0x000003, 0x000015};
        constexpr rw_bit_field POL{0x40002808, 0x000001, 0x000014};
        constexpr rw_bit_field COSEL{0x40002808, 0x000001, 0x000013};
        constexpr rw_bit_field BKP{0x40002808, 0x000001, 0x000012};
        constexpr rw_bit_field SUB1H{0x40002808, 0x000001, 0x000011};
        constexpr rw_bit_field ADD1H{0x40002808, 0x000001, 0x000010};
        constexpr rw_bit_field TSIE{0x40002808, 0x000001, 0x00000f};
        constexpr rw_bit_field WUTIE{0x40002808, 0x000001, 0x00000e};
        constexpr rw_bit_field ALRBIE{0x40002808, 0x000001, 0x00000d};
        constexpr rw_bit_field ALRAIE{0x40002808, 0x000001, 0x00000c};
        constexpr rw_bit_field TSE{0x40002808, 0x000001, 0x00000b};
        constexpr rw_bit_field WUTE{0x40002808, 0x000001, 0x00000a};
        constexpr rw_bit_field ALRBE{0x40002808, 0x000001, 0x000009};
        constexpr rw_bit_field ALRAE{0x40002808, 0x000001, 0x000008};
        constexpr rw_bit_field DCE{0x40002808, 0x000001, 0x000007};
        constexpr rw_bit_field FMT{0x40002808, 0x000001, 0x000006};
        constexpr rw_bit_field BYPSHAD{0x40002808, 0x000001, 0x000005};
        constexpr rw_bit_field REFCKON{0x40002808, 0x000001, 0x000004};
        constexpr rw_bit_field TSEDGE{0x40002808, 0x000001, 0x000003};
        constexpr rw_bit_field WCKSEL{0x40002808, 0x000007, 0x000000};
    }

    namespace ISR {
        constexpr ro_bit_field ALRAWF{0x4000280c, 0x000001, 0x000000};
        constexpr ro_bit_field ALRBWF{0x4000280c, 0x000001, 0x000001};
        constexpr ro_bit_field WUTWF{0x4000280c, 0x000001, 0x000002};
        constexpr rw_bit_field SHPF{0x4000280c, 0x000001, 0x000003};
        constexpr ro_bit_field INITS{0x4000280c, 0x000001, 0x000004};
        constexpr rw_bit_field RSF{0x4000280c, 0x000001, 0x000005};
        constexpr ro_bit_field INITF{0x4000280c, 0x000001, 0x000006};
        constexpr rw_bit_field INIT{0x4000280c, 0x000001, 0x000007};
        constexpr rw_bit_field ALRAF{0x4000280c, 0x000001, 0x000008};
        constexpr rw_bit_field ALRBF{0x4000280c, 0x000001, 0x000009};
        constexpr rw_bit_field WUTF{0x4000280c, 0x000001, 0x00000a};
        constexpr rw_bit_field TSF{0x4000280c, 0x000001, 0x00000b};
        constexpr rw_bit_field TSOVF{0x4000280c, 0x000001, 0x00000c};
        constexpr rw_bit_field TAMP1F{0x4000280c, 0x000001, 0x00000d};
        constexpr rw_bit_field TAMP2F{0x4000280c, 0x000001, 0x00000e};
        constexpr ro_bit_field RECALPF{0x4000280c, 0x000001, 0x000010};
    }

    namespace PRER {
        constexpr rw_bit_field PREDIV_A{0x40002810, 0x00007f, 0x000010};
        constexpr rw_bit_field PREDIV_S{0x40002810, 0x007fff, 0x000000};
    }

    namespace WUTR {
        constexpr rw_bit_field WUT{0x40002814, 0x00ffff, 0x000000};
    }

    namespace CALIBR {
        constexpr rw_bit_field DCS{0x40002818, 0x000001, 0x000007};
        constexpr rw_bit_field DC{0x40002818, 0x00001f, 0x000000};
    }

    namespace ALRMAR {
        constexpr rw_bit_field MSK4{0x4000281c, 0x000001, 0x00001f};
        constexpr rw_bit_field WDSEL{0x4000281c, 0x000001, 0x00001e};
        constexpr rw_bit_field DT{0x4000281c, 0x000003, 0x00001c};
        constexpr rw_bit_field DU{0x4000281c, 0x00000f, 0x000018};
        constexpr rw_bit_field MSK3{0x4000281c, 0x000001, 0x000017};
        constexpr rw_bit_field PM{0x4000281c, 0x000001, 0x000016};
        constexpr rw_bit_field HT{0x4000281c, 0x000003, 0x000014};
        constexpr rw_bit_field HU{0x4000281c, 0x00000f, 0x000010};
        constexpr rw_bit_field MSK2{0x4000281c, 0x000001, 0x00000f};
        constexpr rw_bit_field MNT{0x4000281c, 0x000007, 0x00000c};
        constexpr rw_bit_field MNU{0x4000281c, 0x00000f, 0x000008};
        constexpr rw_bit_field MSK1{0x4000281c, 0x000001, 0x000007};
        constexpr rw_bit_field ST{0x4000281c, 0x000007, 0x000004};
        constexpr rw_bit_field SU{0x4000281c, 0x00000f, 0x000000};
    }

    namespace ALRMBR {
        constexpr rw_bit_field MSK4{0x40002820, 0x000001, 0x00001f};
        constexpr rw_bit_field WDSEL{0x40002820, 0x000001, 0x00001e};
        constexpr rw_bit_field DT{0x40002820, 0x000003, 0x00001c};
        constexpr rw_bit_field DU{0x40002820, 0x00000f, 0x000018};
        constexpr rw_bit_field MSK3{0x40002820, 0x000001, 0x000017};
        constexpr rw_bit_field PM{0x40002820, 0x000001, 0x000016};
        constexpr rw_bit_field HT{0x40002820, 0x000003, 0x000014};
        constexpr rw_bit_field HU{0x40002820, 0x00000f, 0x000010};
        constexpr rw_bit_field MSK2{0x40002820, 0x000001, 0x00000f};
        constexpr rw_bit_field MNT{0x40002820, 0x000007, 0x00000c};
        constexpr rw_bit_field MNU{0x40002820, 0x00000f, 0x000008};
        constexpr rw_bit_field MSK1{0x40002820, 0x000001, 0x000007};
        constexpr rw_bit_field ST{0x40002820, 0x000007, 0x000004};
        constexpr rw_bit_field SU{0x40002820, 0x00000f, 0x000000};
    }

    namespace WPR {
        constexpr wo_bit_field KEY{0x40002824, 0x0000ff, 0x000000};
    }

    namespace SSR {
        constexpr ro_bit_field SS{0x40002828, 0x00ffff, 0x000000};
    }

    namespace SHIFTR {
        constexpr wo_bit_field ADD1S{0x4000282c, 0x000001, 0x00001f};
        constexpr wo_bit_field SUBFS{0x4000282c, 0x007fff, 0x000000};
    }

    namespace TSTR {
        constexpr ro_bit_field PM{0x40002830, 0x000001, 0x000016};
        constexpr ro_bit_field HT{0x40002830, 0x000003, 0x000014};
        constexpr ro_bit_field HU{0x40002830, 0x00000f, 0x000010};
        constexpr ro_bit_field MNT{0x40002830, 0x000007, 0x00000c};
        constexpr ro_bit_field MNU{0x40002830, 0x00000f, 0x000008};
        constexpr ro_bit_field ST{0x40002830, 0x000007, 0x000004};
        constexpr ro_bit_field SU{0x40002830, 0x00000f, 0x000000};
    }

    namespace TSDR {
        constexpr ro_bit_field WDU{0x40002834, 0x000007, 0x00000d};
        constexpr ro_bit_field MT{0x40002834, 0x000001, 0x00000c};
        constexpr ro_bit_field MU{0x40002834, 0x00000f, 0x000008};
        constexpr ro_bit_field DT{0x40002834, 0x000003, 0x000004};
        constexpr ro_bit_field DU{0x40002834, 0x00000f, 0x000000};
    }

    namespace TSSSR {
        constexpr ro_bit_field SS{0x40002838, 0x00ffff, 0x000000};
    }

    namespace CALR {
        constexpr rw_bit_field CALP{0x4000283c, 0x000001, 0x00000f};
        constexpr rw_bit_field CALW8{0x4000283c, 0x000001, 0x00000e};
        constexpr rw_bit_field CALW16{0x4000283c, 0x000001, 0x00000d};
        constexpr rw_bit_field CALM{0x4000283c, 0x0001ff, 0x000000};
    }

    namespace TAFCR {
        constexpr rw_bit_field ALARMOUTTYPE{0x40002840, 0x000001, 0x000012};
        constexpr rw_bit_field TSINSEL{0x40002840, 0x000001, 0x000011};
        constexpr rw_bit_field TAMP1INSEL{0x40002840, 0x000001, 0x000010};
        constexpr rw_bit_field TAMPPUDIS{0x40002840, 0x000001, 0x00000f};
        constexpr rw_bit_field TAMPPRCH{0x40002840, 0x000003, 0x00000d};
        constexpr rw_bit_field TAMPFLT{0x40002840, 0x000003, 0x00000b};
        constexpr rw_bit_field TAMPFREQ{0x40002840, 0x000007, 0x000008};
        constexpr rw_bit_field TAMPTS{0x40002840, 0x000001, 0x000007};
        constexpr rw_bit_field TAMP2TRG{0x40002840, 0x000001, 0x000004};
        constexpr rw_bit_field TAMP2E{0x40002840, 0x000001, 0x000003};
        constexpr rw_bit_field TAMPIE{0x40002840, 0x000001, 0x000002};
        constexpr rw_bit_field TAMP1TRG{0x40002840, 0x000001, 0x000001};
        constexpr rw_bit_field TAMP1E{0x40002840, 0x000001, 0x000000};
    }

    namespace ALRMASSR {
        constexpr rw_bit_field MASKSS{0x40002844, 0x00000f, 0x000018};
        constexpr rw_bit_field SS{0x40002844, 0x007fff, 0x000000};
    }

    namespace ALRMBSSR {
        constexpr rw_bit_field MASKSS{0x40002848, 0x00000f, 0x000018};
        constexpr rw_bit_field SS{0x40002848, 0x007fff, 0x000000};
    }

    namespace BKP0R {
        constexpr rw_bit_field BKP{0x40002850, 0xffffffff, 0x000000};
    }

    namespace BKP1R {
        constexpr rw_bit_field BKP{0x40002854, 0xffffffff, 0x000000};
    }

    namespace BKP2R {
        constexpr rw_bit_field BKP{0x40002858, 0xffffffff, 0x000000};
    }

    namespace BKP3R {
        constexpr rw_bit_field BKP{0x4000285c, 0xffffffff, 0x000000};
    }

    namespace BKP4R {
        constexpr rw_bit_field BKP{0x40002860, 0xffffffff, 0x000000};
    }

    namespace BKP5R {
        constexpr rw_bit_field BKP{0x40002864, 0xffffffff, 0x000000};
    }

    namespace BKP6R {
        constexpr rw_bit_field BKP{0x40002868, 0xffffffff, 0x000000};
    }

    namespace BKP7R {
        constexpr rw_bit_field BKP{0x4000286c, 0xffffffff, 0x000000};
    }

    namespace BKP8R {
        constexpr rw_bit_field BKP{0x40002870, 0xffffffff, 0x000000};
    }

    namespace BKP9R {
        constexpr rw_bit_field BKP{0x40002874, 0xffffffff, 0x000000};
    }

    namespace BKP10R {
        constexpr rw_bit_field BKP{0x40002878, 0xffffffff, 0x000000};
    }

    namespace BKP11R {
        constexpr rw_bit_field BKP{0x4000287c, 0xffffffff, 0x000000};
    }

    namespace BKP12R {
        constexpr rw_bit_field BKP{0x40002880, 0xffffffff, 0x000000};
    }

    namespace BKP13R {
        constexpr rw_bit_field BKP{0x40002884, 0xffffffff, 0x000000};
    }

    namespace BKP14R {
        constexpr rw_bit_field BKP{0x40002888, 0xffffffff, 0x000000};
    }

    namespace BKP15R {
        constexpr rw_bit_field BKP{0x4000288c, 0xffffffff, 0x000000};
    }

    namespace BKP16R {
        constexpr rw_bit_field BKP{0x40002890, 0xffffffff, 0x000000};
    }

    namespace BKP17R {
        constexpr rw_bit_field BKP{0x40002894, 0xffffffff, 0x000000};
    }

    namespace BKP18R {
        constexpr rw_bit_field BKP{0x40002898, 0xffffffff, 0x000000};
    }

    namespace BKP19R {
        constexpr rw_bit_field BKP{0x4000289c, 0xffffffff, 0x000000};
    }

}

namespace SDIO {
    namespace POWER {
        constexpr rw_bit_field PWRCTRL{0x40012c00, 0x000003, 0x000000};
    }

    namespace CLKCR {
        constexpr rw_bit_field HWFC_EN{0x40012c04, 0x000001, 0x00000e};
        constexpr rw_bit_field NEGEDGE{0x40012c04, 0x000001, 0x00000d};
        constexpr rw_bit_field WIDBUS{0x40012c04, 0x000003, 0x00000b};
        constexpr rw_bit_field BYPASS{0x40012c04, 0x000001, 0x00000a};
        constexpr rw_bit_field PWRSAV{0x40012c04, 0x000001, 0x000009};
        constexpr rw_bit_field CLKEN{0x40012c04, 0x000001, 0x000008};
        constexpr rw_bit_field CLKDIV{0x40012c04, 0x0000ff, 0x000000};
    }

    namespace ARG {
        constexpr rw_bit_field CMDARG{0x40012c08, 0xffffffff, 0x000000};
    }

    namespace CMD {
        constexpr rw_bit_field CE_ATACMD{0x40012c0c, 0x000001, 0x00000e};
        constexpr rw_bit_field nIEN{0x40012c0c, 0x000001, 0x00000d};
        constexpr rw_bit_field ENCMDcompl{0x40012c0c, 0x000001, 0x00000c};
        constexpr rw_bit_field SDIOSuspend{0x40012c0c, 0x000001, 0x00000b};
        constexpr rw_bit_field CPSMEN{0x40012c0c, 0x000001, 0x00000a};
        constexpr rw_bit_field WAITPEND{0x40012c0c, 0x000001, 0x000009};
        constexpr rw_bit_field WAITINT{0x40012c0c, 0x000001, 0x000008};
        constexpr rw_bit_field WAITRESP{0x40012c0c, 0x000003, 0x000006};
        constexpr rw_bit_field CMDINDEX{0x40012c0c, 0x00003f, 0x000000};
    }

    namespace RESPCMD {
        constexpr ro_bit_field RESPCMD{0x40012c10, 0x00003f, 0x000000};
    }

    namespace RESP1 {
        constexpr ro_bit_field CARDSTATUS1{0x40012c14, 0xffffffff, 0x000000};
    }

    namespace RESP2 {
        constexpr ro_bit_field CARDSTATUS2{0x40012c18, 0xffffffff, 0x000000};
    }

    namespace RESP3 {
        constexpr ro_bit_field CARDSTATUS3{0x40012c1c, 0xffffffff, 0x000000};
    }

    namespace RESP4 {
        constexpr ro_bit_field CARDSTATUS4{0x40012c20, 0xffffffff, 0x000000};
    }

    namespace DTIMER {
        constexpr rw_bit_field DATATIME{0x40012c24, 0xffffffff, 0x000000};
    }

    namespace DLEN {
        constexpr rw_bit_field DATALENGTH{0x40012c28, 0x1ffffff, 0x000000};
    }

    namespace DCTRL {
        constexpr rw_bit_field SDIOEN{0x40012c2c, 0x000001, 0x00000b};
        constexpr rw_bit_field RWMOD{0x40012c2c, 0x000001, 0x00000a};
        constexpr rw_bit_field RWSTOP{0x40012c2c, 0x000001, 0x000009};
        constexpr rw_bit_field RWSTART{0x40012c2c, 0x000001, 0x000008};
        constexpr rw_bit_field DBLOCKSIZE{0x40012c2c, 0x00000f, 0x000004};
        constexpr rw_bit_field DMAEN{0x40012c2c, 0x000001, 0x000003};
        constexpr rw_bit_field DTMODE{0x40012c2c, 0x000001, 0x000002};
        constexpr rw_bit_field DTDIR{0x40012c2c, 0x000001, 0x000001};
        constexpr rw_bit_field DTEN{0x40012c2c, 0x000001, 0x000000};
    }

    namespace DCOUNT {
        constexpr ro_bit_field DATACOUNT{0x40012c30, 0x1ffffff, 0x000000};
    }

    namespace STA {
        constexpr ro_bit_field CEATAEND{0x40012c34, 0x000001, 0x000017};
        constexpr ro_bit_field SDIOIT{0x40012c34, 0x000001, 0x000016};
        constexpr ro_bit_field RXDAVL{0x40012c34, 0x000001, 0x000015};
        constexpr ro_bit_field TXDAVL{0x40012c34, 0x000001, 0x000014};
        constexpr ro_bit_field RXFIFOE{0x40012c34, 0x000001, 0x000013};
        constexpr ro_bit_field TXFIFOE{0x40012c34, 0x000001, 0x000012};
        constexpr ro_bit_field RXFIFOF{0x40012c34, 0x000001, 0x000011};
        constexpr ro_bit_field TXFIFOF{0x40012c34, 0x000001, 0x000010};
        constexpr ro_bit_field RXFIFOHF{0x40012c34, 0x000001, 0x00000f};
        constexpr ro_bit_field TXFIFOHE{0x40012c34, 0x000001, 0x00000e};
        constexpr ro_bit_field RXACT{0x40012c34, 0x000001, 0x00000d};
        constexpr ro_bit_field TXACT{0x40012c34, 0x000001, 0x00000c};
        constexpr ro_bit_field CMDACT{0x40012c34, 0x000001, 0x00000b};
        constexpr ro_bit_field DBCKEND{0x40012c34, 0x000001, 0x00000a};
        constexpr ro_bit_field STBITERR{0x40012c34, 0x000001, 0x000009};
        constexpr ro_bit_field DATAEND{0x40012c34, 0x000001, 0x000008};
        constexpr ro_bit_field CMDSENT{0x40012c34, 0x000001, 0x000007};
        constexpr ro_bit_field CMDREND{0x40012c34, 0x000001, 0x000006};
        constexpr ro_bit_field RXOVERR{0x40012c34, 0x000001, 0x000005};
        constexpr ro_bit_field TXUNDERR{0x40012c34, 0x000001, 0x000004};
        constexpr ro_bit_field DTIMEOUT{0x40012c34, 0x000001, 0x000003};
        constexpr ro_bit_field CTIMEOUT{0x40012c34, 0x000001, 0x000002};
        constexpr ro_bit_field DCRCFAIL{0x40012c34, 0x000001, 0x000001};
        constexpr ro_bit_field CCRCFAIL{0x40012c34, 0x000001, 0x000000};
    }

    namespace ICR {
        constexpr rw_bit_field CEATAENDC{0x40012c38, 0x000001, 0x000017};
        constexpr rw_bit_field SDIOITC{0x40012c38, 0x000001, 0x000016};
        constexpr rw_bit_field DBCKENDC{0x40012c38, 0x000001, 0x00000a};
        constexpr rw_bit_field STBITERRC{0x40012c38, 0x000001, 0x000009};
        constexpr rw_bit_field DATAENDC{0x40012c38, 0x000001, 0x000008};
        constexpr rw_bit_field CMDSENTC{0x40012c38, 0x000001, 0x000007};
        constexpr rw_bit_field CMDRENDC{0x40012c38, 0x000001, 0x000006};
        constexpr rw_bit_field RXOVERRC{0x40012c38, 0x000001, 0x000005};
        constexpr rw_bit_field TXUNDERRC{0x40012c38, 0x000001, 0x000004};
        constexpr rw_bit_field DTIMEOUTC{0x40012c38, 0x000001, 0x000003};
        constexpr rw_bit_field CTIMEOUTC{0x40012c38, 0x000001, 0x000002};
        constexpr rw_bit_field DCRCFAILC{0x40012c38, 0x000001, 0x000001};
        constexpr rw_bit_field CCRCFAILC{0x40012c38, 0x000001, 0x000000};
    }

    namespace MASK {
        constexpr rw_bit_field CEATAENDIE{0x40012c3c, 0x000001, 0x000017};
        constexpr rw_bit_field SDIOITIE{0x40012c3c, 0x000001, 0x000016};
        constexpr rw_bit_field RXDAVLIE{0x40012c3c, 0x000001, 0x000015};
        constexpr rw_bit_field TXDAVLIE{0x40012c3c, 0x000001, 0x000014};
        constexpr rw_bit_field RXFIFOEIE{0x40012c3c, 0x000001, 0x000013};
        constexpr rw_bit_field TXFIFOEIE{0x40012c3c, 0x000001, 0x000012};
        constexpr rw_bit_field RXFIFOFIE{0x40012c3c, 0x000001, 0x000011};
        constexpr rw_bit_field TXFIFOFIE{0x40012c3c, 0x000001, 0x000010};
        constexpr rw_bit_field RXFIFOHFIE{0x40012c3c, 0x000001, 0x00000f};
        constexpr rw_bit_field TXFIFOHEIE{0x40012c3c, 0x000001, 0x00000e};
        constexpr rw_bit_field RXACTIE{0x40012c3c, 0x000001, 0x00000d};
        constexpr rw_bit_field TXACTIE{0x40012c3c, 0x000001, 0x00000c};
        constexpr rw_bit_field CMDACTIE{0x40012c3c, 0x000001, 0x00000b};
        constexpr rw_bit_field DBCKENDIE{0x40012c3c, 0x000001, 0x00000a};
        constexpr rw_bit_field STBITERRIE{0x40012c3c, 0x000001, 0x000009};
        constexpr rw_bit_field DATAENDIE{0x40012c3c, 0x000001, 0x000008};
        constexpr rw_bit_field CMDSENTIE{0x40012c3c, 0x000001, 0x000007};
        constexpr rw_bit_field CMDRENDIE{0x40012c3c, 0x000001, 0x000006};
        constexpr rw_bit_field RXOVERRIE{0x40012c3c, 0x000001, 0x000005};
        constexpr rw_bit_field TXUNDERRIE{0x40012c3c, 0x000001, 0x000004};
        constexpr rw_bit_field DTIMEOUTIE{0x40012c3c, 0x000001, 0x000003};
        constexpr rw_bit_field CTIMEOUTIE{0x40012c3c, 0x000001, 0x000002};
        constexpr rw_bit_field DCRCFAILIE{0x40012c3c, 0x000001, 0x000001};
        constexpr rw_bit_field CCRCFAILIE{0x40012c3c, 0x000001, 0x000000};
    }

    namespace FIFOCNT {
        constexpr ro_bit_field FIFOCOUNT{0x40012c48, 0xffffff, 0x000000};
    }

    namespace FIFO {
        constexpr rw_bit_field FIFOData{0x40012c80, 0xffffffff, 0x000000};
    }

}

namespace SYSCFG {
    namespace MEMRM {
        constexpr rw_bit_field MEM_MODE{0x40013800, 0x000003, 0x000000};
    }

    namespace PMC {
        constexpr rw_bit_field ADC1DC2{0x40013804, 0x000001, 0x000010};
    }

    namespace EXTICR1 {
        constexpr rw_bit_field EXTI3{0x40013808, 0x00000f, 0x00000c};
        constexpr rw_bit_field EXTI2{0x40013808, 0x00000f, 0x000008};
        constexpr rw_bit_field EXTI1{0x40013808, 0x00000f, 0x000004};
        constexpr rw_bit_field EXTI0{0x40013808, 0x00000f, 0x000000};
    }

    namespace EXTICR2 {
        constexpr rw_bit_field EXTI7{0x4001380c, 0x00000f, 0x00000c};
        constexpr rw_bit_field EXTI6{0x4001380c, 0x00000f, 0x000008};
        constexpr rw_bit_field EXTI5{0x4001380c, 0x00000f, 0x000004};
        constexpr rw_bit_field EXTI4{0x4001380c, 0x00000f, 0x000000};
    }

    namespace EXTICR3 {
        constexpr rw_bit_field EXTI11{0x40013810, 0x00000f, 0x00000c};
        constexpr rw_bit_field EXTI10{0x40013810, 0x00000f, 0x000008};
        constexpr rw_bit_field EXTI9{0x40013810, 0x00000f, 0x000004};
        constexpr rw_bit_field EXTI8{0x40013810, 0x00000f, 0x000000};
    }

    namespace EXTICR4 {
        constexpr rw_bit_field EXTI15{0x40013814, 0x00000f, 0x00000c};
        constexpr rw_bit_field EXTI14{0x40013814, 0x00000f, 0x000008};
        constexpr rw_bit_field EXTI13{0x40013814, 0x00000f, 0x000004};
        constexpr rw_bit_field EXTI12{0x40013814, 0x00000f, 0x000000};
    }

    namespace CMPCR {
        constexpr ro_bit_field READY{0x40013820, 0x000001, 0x000008};
        constexpr ro_bit_field CMP_PD{0x40013820, 0x000001, 0x000000};
    }

}

namespace TIM1 {
    namespace CR1 {
        constexpr rw_bit_field CKD{0x40010000, 0x000003, 0x000008};
        constexpr rw_bit_field ARPE{0x40010000, 0x000001, 0x000007};
        constexpr rw_bit_field CMS{0x40010000, 0x000003, 0x000005};
        constexpr rw_bit_field DIR{0x40010000, 0x000001, 0x000004};
        constexpr rw_bit_field OPM{0x40010000, 0x000001, 0x000003};
        constexpr rw_bit_field URS{0x40010000, 0x000001, 0x000002};
        constexpr rw_bit_field UDIS{0x40010000, 0x000001, 0x000001};
        constexpr rw_bit_field CEN{0x40010000, 0x000001, 0x000000};
    }

    namespace CR2 {
        constexpr rw_bit_field OIS4{0x40010004, 0x000001, 0x00000e};
        constexpr rw_bit_field OIS3N{0x40010004, 0x000001, 0x00000d};
        constexpr rw_bit_field OIS3{0x40010004, 0x000001, 0x00000c};
        constexpr rw_bit_field OIS2N{0x40010004, 0x000001, 0x00000b};
        constexpr rw_bit_field OIS2{0x40010004, 0x000001, 0x00000a};
        constexpr rw_bit_field OIS1N{0x40010004, 0x000001, 0x000009};
        constexpr rw_bit_field OIS1{0x40010004, 0x000001, 0x000008};
        constexpr rw_bit_field TI1S{0x40010004, 0x000001, 0x000007};
        constexpr rw_bit_field MMS{0x40010004, 0x000007, 0x000004};
        constexpr rw_bit_field CCDS{0x40010004, 0x000001, 0x000003};
        constexpr rw_bit_field CCUS{0x40010004, 0x000001, 0x000002};
        constexpr rw_bit_field CCPC{0x40010004, 0x000001, 0x000000};
    }

    namespace SMCR {
        constexpr rw_bit_field ETP{0x40010008, 0x000001, 0x00000f};
        constexpr rw_bit_field ECE{0x40010008, 0x000001, 0x00000e};
        constexpr rw_bit_field ETPS{0x40010008, 0x000003, 0x00000c};
        constexpr rw_bit_field ETF{0x40010008, 0x00000f, 0x000008};
        constexpr rw_bit_field MSM{0x40010008, 0x000001, 0x000007};
        constexpr rw_bit_field TS{0x40010008, 0x000007, 0x000004};
        constexpr rw_bit_field SMS{0x40010008, 0x000007, 0x000000};
    }

    namespace DIER {
        constexpr rw_bit_field TDE{0x4001000c, 0x000001, 0x00000e};
        constexpr rw_bit_field COMDE{0x4001000c, 0x000001, 0x00000d};
        constexpr rw_bit_field CC4DE{0x4001000c, 0x000001, 0x00000c};
        constexpr rw_bit_field CC3DE{0x4001000c, 0x000001, 0x00000b};
        constexpr rw_bit_field CC2DE{0x4001000c, 0x000001, 0x00000a};
        constexpr rw_bit_field CC1DE{0x4001000c, 0x000001, 0x000009};
        constexpr rw_bit_field UDE{0x4001000c, 0x000001, 0x000008};
        constexpr rw_bit_field BIE{0x4001000c, 0x000001, 0x000007};
        constexpr rw_bit_field TIE{0x4001000c, 0x000001, 0x000006};
        constexpr rw_bit_field COMIE{0x4001000c, 0x000001, 0x000005};
        constexpr rw_bit_field CC4IE{0x4001000c, 0x000001, 0x000004};
        constexpr rw_bit_field CC3IE{0x4001000c, 0x000001, 0x000003};
        constexpr rw_bit_field CC2IE{0x4001000c, 0x000001, 0x000002};
        constexpr rw_bit_field CC1IE{0x4001000c, 0x000001, 0x000001};
        constexpr rw_bit_field UIE{0x4001000c, 0x000001, 0x000000};
    }

    namespace SR {
        constexpr rw_bit_field CC4OF{0x40010010, 0x000001, 0x00000c};
        constexpr rw_bit_field CC3OF{0x40010010, 0x000001, 0x00000b};
        constexpr rw_bit_field CC2OF{0x40010010, 0x000001, 0x00000a};
        constexpr rw_bit_field CC1OF{0x40010010, 0x000001, 0x000009};
        constexpr rw_bit_field BIF{0x40010010, 0x000001, 0x000007};
        constexpr rw_bit_field TIF{0x40010010, 0x000001, 0x000006};
        constexpr rw_bit_field COMIF{0x40010010, 0x000001, 0x000005};
        constexpr rw_bit_field CC4IF{0x40010010, 0x000001, 0x000004};
        constexpr rw_bit_field CC3IF{0x40010010, 0x000001, 0x000003};
        constexpr rw_bit_field CC2IF{0x40010010, 0x000001, 0x000002};
        constexpr rw_bit_field CC1IF{0x40010010, 0x000001, 0x000001};
        constexpr rw_bit_field UIF{0x40010010, 0x000001, 0x000000};
    }

    namespace EGR {
        constexpr wo_bit_field BG{0x40010014, 0x000001, 0x000007};
        constexpr wo_bit_field TG{0x40010014, 0x000001, 0x000006};
        constexpr wo_bit_field COMG{0x40010014, 0x000001, 0x000005};
        constexpr wo_bit_field CC4G{0x40010014, 0x000001, 0x000004};
        constexpr wo_bit_field CC3G{0x40010014, 0x000001, 0x000003};
        constexpr wo_bit_field CC2G{0x40010014, 0x000001, 0x000002};
        constexpr wo_bit_field CC1G{0x40010014, 0x000001, 0x000001};
        constexpr wo_bit_field UG{0x40010014, 0x000001, 0x000000};
    }

    namespace CCMR1_Output {
        constexpr rw_bit_field OC2CE{0x40010018, 0x000001, 0x00000f};
        constexpr rw_bit_field OC2M{0x40010018, 0x000007, 0x00000c};
        constexpr rw_bit_field OC2PE{0x40010018, 0x000001, 0x00000b};
        constexpr rw_bit_field OC2FE{0x40010018, 0x000001, 0x00000a};
        constexpr rw_bit_field CC2S{0x40010018, 0x000003, 0x000008};
        constexpr rw_bit_field OC1CE{0x40010018, 0x000001, 0x000007};
        constexpr rw_bit_field OC1M{0x40010018, 0x000007, 0x000004};
        constexpr rw_bit_field OC1PE{0x40010018, 0x000001, 0x000003};
        constexpr rw_bit_field OC1FE{0x40010018, 0x000001, 0x000002};
        constexpr rw_bit_field CC1S{0x40010018, 0x000003, 0x000000};
    }

    namespace CCMR1_Input {
        constexpr rw_bit_field IC2F{0x40010018, 0x00000f, 0x00000c};
        constexpr rw_bit_field IC2PCS{0x40010018, 0x000003, 0x00000a};
        constexpr rw_bit_field CC2S{0x40010018, 0x000003, 0x000008};
        constexpr rw_bit_field IC1F{0x40010018, 0x00000f, 0x000004};
        constexpr rw_bit_field ICPCS{0x40010018, 0x000003, 0x000002};
        constexpr rw_bit_field CC1S{0x40010018, 0x000003, 0x000000};
    }

    namespace CCMR2_Output {
        constexpr rw_bit_field OC4CE{0x4001001c, 0x000001, 0x00000f};
        constexpr rw_bit_field OC4M{0x4001001c, 0x000007, 0x00000c};
        constexpr rw_bit_field OC4PE{0x4001001c, 0x000001, 0x00000b};
        constexpr rw_bit_field OC4FE{0x4001001c, 0x000001, 0x00000a};
        constexpr rw_bit_field CC4S{0x4001001c, 0x000003, 0x000008};
        constexpr rw_bit_field OC3CE{0x4001001c, 0x000001, 0x000007};
        constexpr rw_bit_field OC3M{0x4001001c, 0x000007, 0x000004};
        constexpr rw_bit_field OC3PE{0x4001001c, 0x000001, 0x000003};
        constexpr rw_bit_field OC3FE{0x4001001c, 0x000001, 0x000002};
        constexpr rw_bit_field CC3S{0x4001001c, 0x000003, 0x000000};
    }

    namespace CCMR2_Input {
        constexpr rw_bit_field IC4F{0x4001001c, 0x00000f, 0x00000c};
        constexpr rw_bit_field IC4PSC{0x4001001c, 0x000003, 0x00000a};
        constexpr rw_bit_field CC4S{0x4001001c, 0x000003, 0x000008};
        constexpr rw_bit_field IC3F{0x4001001c, 0x00000f, 0x000004};
        constexpr rw_bit_field IC3PSC{0x4001001c, 0x000003, 0x000002};
        constexpr rw_bit_field CC3S{0x4001001c, 0x000003, 0x000000};
    }

    namespace CCER {
        constexpr rw_bit_field CC4P{0x40010020, 0x000001, 0x00000d};
        constexpr rw_bit_field CC4E{0x40010020, 0x000001, 0x00000c};
        constexpr rw_bit_field CC3NP{0x40010020, 0x000001, 0x00000b};
        constexpr rw_bit_field CC3NE{0x40010020, 0x000001, 0x00000a};
        constexpr rw_bit_field CC3P{0x40010020, 0x000001, 0x000009};
        constexpr rw_bit_field CC3E{0x40010020, 0x000001, 0x000008};
        constexpr rw_bit_field CC2NP{0x40010020, 0x000001, 0x000007};
        constexpr rw_bit_field CC2NE{0x40010020, 0x000001, 0x000006};
        constexpr rw_bit_field CC2P{0x40010020, 0x000001, 0x000005};
        constexpr rw_bit_field CC2E{0x40010020, 0x000001, 0x000004};
        constexpr rw_bit_field CC1NP{0x40010020, 0x000001, 0x000003};
        constexpr rw_bit_field CC1NE{0x40010020, 0x000001, 0x000002};
        constexpr rw_bit_field CC1P{0x40010020, 0x000001, 0x000001};
        constexpr rw_bit_field CC1E{0x40010020, 0x000001, 0x000000};
    }

    namespace CNT {
        constexpr rw_bit_field CNT{0x40010024, 0x00ffff, 0x000000};
    }

    namespace PSC {
        constexpr rw_bit_field PSC{0x40010028, 0x00ffff, 0x000000};
    }

    namespace ARR {
        constexpr rw_bit_field ARR{0x4001002c, 0x00ffff, 0x000000};
    }

    namespace CCR1 {
        constexpr rw_bit_field CCR1{0x40010034, 0x00ffff, 0x000000};
    }

    namespace CCR2 {
        constexpr rw_bit_field CCR2{0x40010038, 0x00ffff, 0x000000};
    }

    namespace CCR3 {
        constexpr rw_bit_field CCR3{0x4001003c, 0x00ffff, 0x000000};
    }

    namespace CCR4 {
        constexpr rw_bit_field CCR4{0x40010040, 0x00ffff, 0x000000};
    }

    namespace DCR {
        constexpr rw_bit_field DBL{0x40010048, 0x00001f, 0x000008};
        constexpr rw_bit_field DBA{0x40010048, 0x00001f, 0x000000};
    }

    namespace DMAR {
        constexpr rw_bit_field DMAB{0x4001004c, 0x00ffff, 0x000000};
    }

    namespace RCR {
        constexpr rw_bit_field REP{0x40010030, 0x0000ff, 0x000000};
    }

    namespace BDTR {
        constexpr rw_bit_field MOE{0x40010044, 0x000001, 0x00000f};
        constexpr rw_bit_field AOE{0x40010044, 0x000001, 0x00000e};
        constexpr rw_bit_field BKP{0x40010044, 0x000001, 0x00000d};
        constexpr rw_bit_field BKE{0x40010044, 0x000001, 0x00000c};
        constexpr rw_bit_field OSSR{0x40010044, 0x000001, 0x00000b};
        constexpr rw_bit_field OSSI{0x40010044, 0x000001, 0x00000a};
        constexpr rw_bit_field LOCK{0x40010044, 0x000003, 0x000008};
        constexpr rw_bit_field DTG{0x40010044, 0x0000ff, 0x000000};
    }

}

namespace TIM8 {
    namespace CR1 {
        constexpr rw_bit_field CKD{0x40010400, 0x000003, 0x000008};
        constexpr rw_bit_field ARPE{0x40010400, 0x000001, 0x000007};
        constexpr rw_bit_field CMS{0x40010400, 0x000003, 0x000005};
        constexpr rw_bit_field DIR{0x40010400, 0x000001, 0x000004};
        constexpr rw_bit_field OPM{0x40010400, 0x000001, 0x000003};
        constexpr rw_bit_field URS{0x40010400, 0x000001, 0x000002};
        constexpr rw_bit_field UDIS{0x40010400, 0x000001, 0x000001};
        constexpr rw_bit_field CEN{0x40010400, 0x000001, 0x000000};
    }

    namespace CR2 {
        constexpr rw_bit_field OIS4{0x40010404, 0x000001, 0x00000e};
        constexpr rw_bit_field OIS3N{0x40010404, 0x000001, 0x00000d};
        constexpr rw_bit_field OIS3{0x40010404, 0x000001, 0x00000c};
        constexpr rw_bit_field OIS2N{0x40010404, 0x000001, 0x00000b};
        constexpr rw_bit_field OIS2{0x40010404, 0x000001, 0x00000a};
        constexpr rw_bit_field OIS1N{0x40010404, 0x000001, 0x000009};
        constexpr rw_bit_field OIS1{0x40010404, 0x000001, 0x000008};
        constexpr rw_bit_field TI1S{0x40010404, 0x000001, 0x000007};
        constexpr rw_bit_field MMS{0x40010404, 0x000007, 0x000004};
        constexpr rw_bit_field CCDS{0x40010404, 0x000001, 0x000003};
        constexpr rw_bit_field CCUS{0x40010404, 0x000001, 0x000002};
        constexpr rw_bit_field CCPC{0x40010404, 0x000001, 0x000000};
    }

    namespace SMCR {
        constexpr rw_bit_field ETP{0x40010408, 0x000001, 0x00000f};
        constexpr rw_bit_field ECE{0x40010408, 0x000001, 0x00000e};
        constexpr rw_bit_field ETPS{0x40010408, 0x000003, 0x00000c};
        constexpr rw_bit_field ETF{0x40010408, 0x00000f, 0x000008};
        constexpr rw_bit_field MSM{0x40010408, 0x000001, 0x000007};
        constexpr rw_bit_field TS{0x40010408, 0x000007, 0x000004};
        constexpr rw_bit_field SMS{0x40010408, 0x000007, 0x000000};
    }

    namespace DIER {
        constexpr rw_bit_field TDE{0x4001040c, 0x000001, 0x00000e};
        constexpr rw_bit_field COMDE{0x4001040c, 0x000001, 0x00000d};
        constexpr rw_bit_field CC4DE{0x4001040c, 0x000001, 0x00000c};
        constexpr rw_bit_field CC3DE{0x4001040c, 0x000001, 0x00000b};
        constexpr rw_bit_field CC2DE{0x4001040c, 0x000001, 0x00000a};
        constexpr rw_bit_field CC1DE{0x4001040c, 0x000001, 0x000009};
        constexpr rw_bit_field UDE{0x4001040c, 0x000001, 0x000008};
        constexpr rw_bit_field BIE{0x4001040c, 0x000001, 0x000007};
        constexpr rw_bit_field TIE{0x4001040c, 0x000001, 0x000006};
        constexpr rw_bit_field COMIE{0x4001040c, 0x000001, 0x000005};
        constexpr rw_bit_field CC4IE{0x4001040c, 0x000001, 0x000004};
        constexpr rw_bit_field CC3IE{0x4001040c, 0x000001, 0x000003};
        constexpr rw_bit_field CC2IE{0x4001040c, 0x000001, 0x000002};
        constexpr rw_bit_field CC1IE{0x4001040c, 0x000001, 0x000001};
        constexpr rw_bit_field UIE{0x4001040c, 0x000001, 0x000000};
    }

    namespace SR {
        constexpr rw_bit_field CC4OF{0x40010410, 0x000001, 0x00000c};
        constexpr rw_bit_field CC3OF{0x40010410, 0x000001, 0x00000b};
        constexpr rw_bit_field CC2OF{0x40010410, 0x000001, 0x00000a};
        constexpr rw_bit_field CC1OF{0x40010410, 0x000001, 0x000009};
        constexpr rw_bit_field BIF{0x40010410, 0x000001, 0x000007};
        constexpr rw_bit_field TIF{0x40010410, 0x000001, 0x000006};
        constexpr rw_bit_field COMIF{0x40010410, 0x000001, 0x000005};
        constexpr rw_bit_field CC4IF{0x40010410, 0x000001, 0x000004};
        constexpr rw_bit_field CC3IF{0x40010410, 0x000001, 0x000003};
        constexpr rw_bit_field CC2IF{0x40010410, 0x000001, 0x000002};
        constexpr rw_bit_field CC1IF{0x40010410, 0x000001, 0x000001};
        constexpr rw_bit_field UIF{0x40010410, 0x000001, 0x000000};
    }

    namespace EGR {
        constexpr wo_bit_field BG{0x40010414, 0x000001, 0x000007};
        constexpr wo_bit_field TG{0x40010414, 0x000001, 0x000006};
        constexpr wo_bit_field COMG{0x40010414, 0x000001, 0x000005};
        constexpr wo_bit_field CC4G{0x40010414, 0x000001, 0x000004};
        constexpr wo_bit_field CC3G{0x40010414, 0x000001, 0x000003};
        constexpr wo_bit_field CC2G{0x40010414, 0x000001, 0x000002};
        constexpr wo_bit_field CC1G{0x40010414, 0x000001, 0x000001};
        constexpr wo_bit_field UG{0x40010414, 0x000001, 0x000000};
    }

    namespace CCMR1_Output {
        constexpr rw_bit_field OC2CE{0x40010418, 0x000001, 0x00000f};
        constexpr rw_bit_field OC2M{0x40010418, 0x000007, 0x00000c};
        constexpr rw_bit_field OC2PE{0x40010418, 0x000001, 0x00000b};
        constexpr rw_bit_field OC2FE{0x40010418, 0x000001, 0x00000a};
        constexpr rw_bit_field CC2S{0x40010418, 0x000003, 0x000008};
        constexpr rw_bit_field OC1CE{0x40010418, 0x000001, 0x000007};
        constexpr rw_bit_field OC1M{0x40010418, 0x000007, 0x000004};
        constexpr rw_bit_field OC1PE{0x40010418, 0x000001, 0x000003};
        constexpr rw_bit_field OC1FE{0x40010418, 0x000001, 0x000002};
        constexpr rw_bit_field CC1S{0x40010418, 0x000003, 0x000000};
    }

    namespace CCMR1_Input {
        constexpr rw_bit_field IC2F{0x40010418, 0x00000f, 0x00000c};
        constexpr rw_bit_field IC2PCS{0x40010418, 0x000003, 0x00000a};
        constexpr rw_bit_field CC2S{0x40010418, 0x000003, 0x000008};
        constexpr rw_bit_field IC1F{0x40010418, 0x00000f, 0x000004};
        constexpr rw_bit_field ICPCS{0x40010418, 0x000003, 0x000002};
        constexpr rw_bit_field CC1S{0x40010418, 0x000003, 0x000000};
    }

    namespace CCMR2_Output {
        constexpr rw_bit_field OC4CE{0x4001041c, 0x000001, 0x00000f};
        constexpr rw_bit_field OC4M{0x4001041c, 0x000007, 0x00000c};
        constexpr rw_bit_field OC4PE{0x4001041c, 0x000001, 0x00000b};
        constexpr rw_bit_field OC4FE{0x4001041c, 0x000001, 0x00000a};
        constexpr rw_bit_field CC4S{0x4001041c, 0x000003, 0x000008};
        constexpr rw_bit_field OC3CE{0x4001041c, 0x000001, 0x000007};
        constexpr rw_bit_field OC3M{0x4001041c, 0x000007, 0x000004};
        constexpr rw_bit_field OC3PE{0x4001041c, 0x000001, 0x000003};
        constexpr rw_bit_field OC3FE{0x4001041c, 0x000001, 0x000002};
        constexpr rw_bit_field CC3S{0x4001041c, 0x000003, 0x000000};
    }

    namespace CCMR2_Input {
        constexpr rw_bit_field IC4F{0x4001041c, 0x00000f, 0x00000c};
        constexpr rw_bit_field IC4PSC{0x4001041c, 0x000003, 0x00000a};
        constexpr rw_bit_field CC4S{0x4001041c, 0x000003, 0x000008};
        constexpr rw_bit_field IC3F{0x4001041c, 0x00000f, 0x000004};
        constexpr rw_bit_field IC3PSC{0x4001041c, 0x000003, 0x000002};
        constexpr rw_bit_field CC3S{0x4001041c, 0x000003, 0x000000};
    }

    namespace CCER {
        constexpr rw_bit_field CC4P{0x40010420, 0x000001, 0x00000d};
        constexpr rw_bit_field CC4E{0x40010420, 0x000001, 0x00000c};
        constexpr rw_bit_field CC3NP{0x40010420, 0x000001, 0x00000b};
        constexpr rw_bit_field CC3NE{0x40010420, 0x000001, 0x00000a};
        constexpr rw_bit_field CC3P{0x40010420, 0x000001, 0x000009};
        constexpr rw_bit_field CC3E{0x40010420, 0x000001, 0x000008};
        constexpr rw_bit_field CC2NP{0x40010420, 0x000001, 0x000007};
        constexpr rw_bit_field CC2NE{0x40010420, 0x000001, 0x000006};
        constexpr rw_bit_field CC2P{0x40010420, 0x000001, 0x000005};
        constexpr rw_bit_field CC2E{0x40010420, 0x000001, 0x000004};
        constexpr rw_bit_field CC1NP{0x40010420, 0x000001, 0x000003};
        constexpr rw_bit_field CC1NE{0x40010420, 0x000001, 0x000002};
        constexpr rw_bit_field CC1P{0x40010420, 0x000001, 0x000001};
        constexpr rw_bit_field CC1E{0x40010420, 0x000001, 0x000000};
    }

    namespace CNT {
        constexpr rw_bit_field CNT{0x40010424, 0x00ffff, 0x000000};
    }

    namespace PSC {
        constexpr rw_bit_field PSC{0x40010428, 0x00ffff, 0x000000};
    }

    namespace ARR {
        constexpr rw_bit_field ARR{0x4001042c, 0x00ffff, 0x000000};
    }

    namespace CCR1 {
        constexpr rw_bit_field CCR1{0x40010434, 0x00ffff, 0x000000};
    }

    namespace CCR2 {
        constexpr rw_bit_field CCR2{0x40010438, 0x00ffff, 0x000000};
    }

    namespace CCR3 {
        constexpr rw_bit_field CCR3{0x4001043c, 0x00ffff, 0x000000};
    }

    namespace CCR4 {
        constexpr rw_bit_field CCR4{0x40010440, 0x00ffff, 0x000000};
    }

    namespace DCR {
        constexpr rw_bit_field DBL{0x40010448, 0x00001f, 0x000008};
        constexpr rw_bit_field DBA{0x40010448, 0x00001f, 0x000000};
    }

    namespace DMAR {
        constexpr rw_bit_field DMAB{0x4001044c, 0x00ffff, 0x000000};
    }

    namespace RCR {
        constexpr rw_bit_field REP{0x40010430, 0x0000ff, 0x000000};
    }

    namespace BDTR {
        constexpr rw_bit_field MOE{0x40010444, 0x000001, 0x00000f};
        constexpr rw_bit_field AOE{0x40010444, 0x000001, 0x00000e};
        constexpr rw_bit_field BKP{0x40010444, 0x000001, 0x00000d};
        constexpr rw_bit_field BKE{0x40010444, 0x000001, 0x00000c};
        constexpr rw_bit_field OSSR{0x40010444, 0x000001, 0x00000b};
        constexpr rw_bit_field OSSI{0x40010444, 0x000001, 0x00000a};
        constexpr rw_bit_field LOCK{0x40010444, 0x000003, 0x000008};
        constexpr rw_bit_field DTG{0x40010444, 0x0000ff, 0x000000};
    }

}

namespace TIM10 {
    namespace CR1 {
        constexpr rw_bit_field CKD{0x40014400, 0x000003, 0x000008};
        constexpr rw_bit_field ARPE{0x40014400, 0x000001, 0x000007};
        constexpr rw_bit_field URS{0x40014400, 0x000001, 0x000002};
        constexpr rw_bit_field UDIS{0x40014400, 0x000001, 0x000001};
        constexpr rw_bit_field CEN{0x40014400, 0x000001, 0x000000};
    }

    namespace DIER {
        constexpr rw_bit_field CC1IE{0x4001440c, 0x000001, 0x000001};
        constexpr rw_bit_field UIE{0x4001440c, 0x000001, 0x000000};
    }

    namespace SR {
        constexpr rw_bit_field CC1OF{0x40014410, 0x000001, 0x000009};
        constexpr rw_bit_field CC1IF{0x40014410, 0x000001, 0x000001};
        constexpr rw_bit_field UIF{0x40014410, 0x000001, 0x000000};
    }

    namespace EGR {
        constexpr wo_bit_field CC1G{0x40014414, 0x000001, 0x000001};
        constexpr wo_bit_field UG{0x40014414, 0x000001, 0x000000};
    }

    namespace CCMR1_Output {
        constexpr rw_bit_field OC1M{0x40014418, 0x000007, 0x000004};
        constexpr rw_bit_field OC1PE{0x40014418, 0x000001, 0x000003};
        constexpr rw_bit_field OC1FE{0x40014418, 0x000001, 0x000002};
        constexpr rw_bit_field CC1S{0x40014418, 0x000003, 0x000000};
    }

    namespace CCMR1_Input {
        constexpr rw_bit_field IC1F{0x40014418, 0x00000f, 0x000004};
        constexpr rw_bit_field ICPCS{0x40014418, 0x000003, 0x000002};
        constexpr rw_bit_field CC1S{0x40014418, 0x000003, 0x000000};
    }

    namespace CCER {
        constexpr rw_bit_field CC1NP{0x40014420, 0x000001, 0x000003};
        constexpr rw_bit_field CC1P{0x40014420, 0x000001, 0x000001};
        constexpr rw_bit_field CC1E{0x40014420, 0x000001, 0x000000};
    }

    namespace CNT {
        constexpr rw_bit_field CNT{0x40014424, 0x00ffff, 0x000000};
    }

    namespace PSC {
        constexpr rw_bit_field PSC{0x40014428, 0x00ffff, 0x000000};
    }

    namespace ARR {
        constexpr rw_bit_field ARR{0x4001442c, 0x00ffff, 0x000000};
    }

    namespace CCR1 {
        constexpr rw_bit_field CCR1{0x40014434, 0x00ffff, 0x000000};
    }

}

namespace TIM11 {
    namespace CR1 {
        constexpr rw_bit_field CKD{0x40014800, 0x000003, 0x000008};
        constexpr rw_bit_field ARPE{0x40014800, 0x000001, 0x000007};
        constexpr rw_bit_field URS{0x40014800, 0x000001, 0x000002};
        constexpr rw_bit_field UDIS{0x40014800, 0x000001, 0x000001};
        constexpr rw_bit_field CEN{0x40014800, 0x000001, 0x000000};
    }

    namespace DIER {
        constexpr rw_bit_field CC1IE{0x4001480c, 0x000001, 0x000001};
        constexpr rw_bit_field UIE{0x4001480c, 0x000001, 0x000000};
    }

    namespace SR {
        constexpr rw_bit_field CC1OF{0x40014810, 0x000001, 0x000009};
        constexpr rw_bit_field CC1IF{0x40014810, 0x000001, 0x000001};
        constexpr rw_bit_field UIF{0x40014810, 0x000001, 0x000000};
    }

    namespace EGR {
        constexpr wo_bit_field CC1G{0x40014814, 0x000001, 0x000001};
        constexpr wo_bit_field UG{0x40014814, 0x000001, 0x000000};
    }

    namespace CCMR1_Output {
        constexpr rw_bit_field OC1M{0x40014818, 0x000007, 0x000004};
        constexpr rw_bit_field OC1PE{0x40014818, 0x000001, 0x000003};
        constexpr rw_bit_field OC1FE{0x40014818, 0x000001, 0x000002};
        constexpr rw_bit_field CC1S{0x40014818, 0x000003, 0x000000};
    }

    namespace CCMR1_Input {
        constexpr rw_bit_field IC1F{0x40014818, 0x00000f, 0x000004};
        constexpr rw_bit_field ICPCS{0x40014818, 0x000003, 0x000002};
        constexpr rw_bit_field CC1S{0x40014818, 0x000003, 0x000000};
    }

    namespace CCER {
        constexpr rw_bit_field CC1NP{0x40014820, 0x000001, 0x000003};
        constexpr rw_bit_field CC1P{0x40014820, 0x000001, 0x000001};
        constexpr rw_bit_field CC1E{0x40014820, 0x000001, 0x000000};
    }

    namespace CNT {
        constexpr rw_bit_field CNT{0x40014824, 0x00ffff, 0x000000};
    }

    namespace PSC {
        constexpr rw_bit_field PSC{0x40014828, 0x00ffff, 0x000000};
    }

    namespace ARR {
        constexpr rw_bit_field ARR{0x4001482c, 0x00ffff, 0x000000};
    }

    namespace CCR1 {
        constexpr rw_bit_field CCR1{0x40014834, 0x00ffff, 0x000000};
    }

    namespace OR {
        constexpr rw_bit_field RMP{0x40014850, 0x000003, 0x000000};
    }

}

namespace TIM2 {
    namespace CR1 {
        constexpr rw_bit_field CKD{0x40000000, 0x000003, 0x000008};
        constexpr rw_bit_field ARPE{0x40000000, 0x000001, 0x000007};
        constexpr rw_bit_field CMS{0x40000000, 0x000003, 0x000005};
        constexpr rw_bit_field DIR{0x40000000, 0x000001, 0x000004};
        constexpr rw_bit_field OPM{0x40000000, 0x000001, 0x000003};
        constexpr rw_bit_field URS{0x40000000, 0x000001, 0x000002};
        constexpr rw_bit_field UDIS{0x40000000, 0x000001, 0x000001};
        constexpr rw_bit_field CEN{0x40000000, 0x000001, 0x000000};
    }

    namespace CR2 {
        constexpr rw_bit_field TI1S{0x40000004, 0x000001, 0x000007};
        constexpr rw_bit_field MMS{0x40000004, 0x000007, 0x000004};
        constexpr rw_bit_field CCDS{0x40000004, 0x000001, 0x000003};
    }

    namespace SMCR {
        constexpr rw_bit_field ETP{0x40000008, 0x000001, 0x00000f};
        constexpr rw_bit_field ECE{0x40000008, 0x000001, 0x00000e};
        constexpr rw_bit_field ETPS{0x40000008, 0x000003, 0x00000c};
        constexpr rw_bit_field ETF{0x40000008, 0x00000f, 0x000008};
        constexpr rw_bit_field MSM{0x40000008, 0x000001, 0x000007};
        constexpr rw_bit_field TS{0x40000008, 0x000007, 0x000004};
        constexpr rw_bit_field SMS{0x40000008, 0x000007, 0x000000};
    }

    namespace DIER {
        constexpr rw_bit_field TDE{0x4000000c, 0x000001, 0x00000e};
        constexpr rw_bit_field CC4DE{0x4000000c, 0x000001, 0x00000c};
        constexpr rw_bit_field CC3DE{0x4000000c, 0x000001, 0x00000b};
        constexpr rw_bit_field CC2DE{0x4000000c, 0x000001, 0x00000a};
        constexpr rw_bit_field CC1DE{0x4000000c, 0x000001, 0x000009};
        constexpr rw_bit_field UDE{0x4000000c, 0x000001, 0x000008};
        constexpr rw_bit_field TIE{0x4000000c, 0x000001, 0x000006};
        constexpr rw_bit_field CC4IE{0x4000000c, 0x000001, 0x000004};
        constexpr rw_bit_field CC3IE{0x4000000c, 0x000001, 0x000003};
        constexpr rw_bit_field CC2IE{0x4000000c, 0x000001, 0x000002};
        constexpr rw_bit_field CC1IE{0x4000000c, 0x000001, 0x000001};
        constexpr rw_bit_field UIE{0x4000000c, 0x000001, 0x000000};
    }

    namespace SR {
        constexpr rw_bit_field CC4OF{0x40000010, 0x000001, 0x00000c};
        constexpr rw_bit_field CC3OF{0x40000010, 0x000001, 0x00000b};
        constexpr rw_bit_field CC2OF{0x40000010, 0x000001, 0x00000a};
        constexpr rw_bit_field CC1OF{0x40000010, 0x000001, 0x000009};
        constexpr rw_bit_field TIF{0x40000010, 0x000001, 0x000006};
        constexpr rw_bit_field CC4IF{0x40000010, 0x000001, 0x000004};
        constexpr rw_bit_field CC3IF{0x40000010, 0x000001, 0x000003};
        constexpr rw_bit_field CC2IF{0x40000010, 0x000001, 0x000002};
        constexpr rw_bit_field CC1IF{0x40000010, 0x000001, 0x000001};
        constexpr rw_bit_field UIF{0x40000010, 0x000001, 0x000000};
    }

    namespace EGR {
        constexpr wo_bit_field TG{0x40000014, 0x000001, 0x000006};
        constexpr wo_bit_field CC4G{0x40000014, 0x000001, 0x000004};
        constexpr wo_bit_field CC3G{0x40000014, 0x000001, 0x000003};
        constexpr wo_bit_field CC2G{0x40000014, 0x000001, 0x000002};
        constexpr wo_bit_field CC1G{0x40000014, 0x000001, 0x000001};
        constexpr wo_bit_field UG{0x40000014, 0x000001, 0x000000};
    }

    namespace CCMR1_Output {
        constexpr rw_bit_field OC2CE{0x40000018, 0x000001, 0x00000f};
        constexpr rw_bit_field OC2M{0x40000018, 0x000007, 0x00000c};
        constexpr rw_bit_field OC2PE{0x40000018, 0x000001, 0x00000b};
        constexpr rw_bit_field OC2FE{0x40000018, 0x000001, 0x00000a};
        constexpr rw_bit_field CC2S{0x40000018, 0x000003, 0x000008};
        constexpr rw_bit_field OC1CE{0x40000018, 0x000001, 0x000007};
        constexpr rw_bit_field OC1M{0x40000018, 0x000007, 0x000004};
        constexpr rw_bit_field OC1PE{0x40000018, 0x000001, 0x000003};
        constexpr rw_bit_field OC1FE{0x40000018, 0x000001, 0x000002};
        constexpr rw_bit_field CC1S{0x40000018, 0x000003, 0x000000};
    }

    namespace CCMR1_Input {
        constexpr rw_bit_field IC2F{0x40000018, 0x00000f, 0x00000c};
        constexpr rw_bit_field IC2PCS{0x40000018, 0x000003, 0x00000a};
        constexpr rw_bit_field CC2S{0x40000018, 0x000003, 0x000008};
        constexpr rw_bit_field IC1F{0x40000018, 0x00000f, 0x000004};
        constexpr rw_bit_field ICPCS{0x40000018, 0x000003, 0x000002};
        constexpr rw_bit_field CC1S{0x40000018, 0x000003, 0x000000};
    }

    namespace CCMR2_Output {
        constexpr rw_bit_field O24CE{0x4000001c, 0x000001, 0x00000f};
        constexpr rw_bit_field OC4M{0x4000001c, 0x000007, 0x00000c};
        constexpr rw_bit_field OC4PE{0x4000001c, 0x000001, 0x00000b};
        constexpr rw_bit_field OC4FE{0x4000001c, 0x000001, 0x00000a};
        constexpr rw_bit_field CC4S{0x4000001c, 0x000003, 0x000008};
        constexpr rw_bit_field OC3CE{0x4000001c, 0x000001, 0x000007};
        constexpr rw_bit_field OC3M{0x4000001c, 0x000007, 0x000004};
        constexpr rw_bit_field OC3PE{0x4000001c, 0x000001, 0x000003};
        constexpr rw_bit_field OC3FE{0x4000001c, 0x000001, 0x000002};
        constexpr rw_bit_field CC3S{0x4000001c, 0x000003, 0x000000};
    }

    namespace CCMR2_Input {
        constexpr rw_bit_field IC4F{0x4000001c, 0x00000f, 0x00000c};
        constexpr rw_bit_field IC4PSC{0x4000001c, 0x000003, 0x00000a};
        constexpr rw_bit_field CC4S{0x4000001c, 0x000003, 0x000008};
        constexpr rw_bit_field IC3F{0x4000001c, 0x00000f, 0x000004};
        constexpr rw_bit_field IC3PSC{0x4000001c, 0x000003, 0x000002};
        constexpr rw_bit_field CC3S{0x4000001c, 0x000003, 0x000000};
    }

    namespace CCER {
        constexpr rw_bit_field CC4NP{0x40000020, 0x000001, 0x00000f};
        constexpr rw_bit_field CC4P{0x40000020, 0x000001, 0x00000d};
        constexpr rw_bit_field CC4E{0x40000020, 0x000001, 0x00000c};
        constexpr rw_bit_field CC3NP{0x40000020, 0x000001, 0x00000b};
        constexpr rw_bit_field CC3P{0x40000020, 0x000001, 0x000009};
        constexpr rw_bit_field CC3E{0x40000020, 0x000001, 0x000008};
        constexpr rw_bit_field CC2NP{0x40000020, 0x000001, 0x000007};
        constexpr rw_bit_field CC2P{0x40000020, 0x000001, 0x000005};
        constexpr rw_bit_field CC2E{0x40000020, 0x000001, 0x000004};
        constexpr rw_bit_field CC1NP{0x40000020, 0x000001, 0x000003};
        constexpr rw_bit_field CC1P{0x40000020, 0x000001, 0x000001};
        constexpr rw_bit_field CC1E{0x40000020, 0x000001, 0x000000};
    }

    namespace CNT {
        constexpr rw_bit_field CNT_H{0x40000024, 0x00ffff, 0x000010};
        constexpr rw_bit_field CNT_L{0x40000024, 0x00ffff, 0x000000};
    }

    namespace PSC {
        constexpr rw_bit_field PSC{0x40000028, 0x00ffff, 0x000000};
    }

    namespace ARR {
        constexpr rw_bit_field ARR_H{0x4000002c, 0x00ffff, 0x000010};
        constexpr rw_bit_field ARR_L{0x4000002c, 0x00ffff, 0x000000};
    }

    namespace CCR1 {
        constexpr rw_bit_field CCR1_H{0x40000034, 0x00ffff, 0x000010};
        constexpr rw_bit_field CCR1_L{0x40000034, 0x00ffff, 0x000000};
    }

    namespace CCR2 {
        constexpr rw_bit_field CCR2_H{0x40000038, 0x00ffff, 0x000010};
        constexpr rw_bit_field CCR2_L{0x40000038, 0x00ffff, 0x000000};
    }

    namespace CCR3 {
        constexpr rw_bit_field CCR3_H{0x4000003c, 0x00ffff, 0x000010};
        constexpr rw_bit_field CCR3_L{0x4000003c, 0x00ffff, 0x000000};
    }

    namespace CCR4 {
        constexpr rw_bit_field CCR4_H{0x40000040, 0x00ffff, 0x000010};
        constexpr rw_bit_field CCR4_L{0x40000040, 0x00ffff, 0x000000};
    }

    namespace DCR {
        constexpr rw_bit_field DBL{0x40000048, 0x00001f, 0x000008};
        constexpr rw_bit_field DBA{0x40000048, 0x00001f, 0x000000};
    }

    namespace DMAR {
        constexpr rw_bit_field DMAB{0x4000004c, 0x00ffff, 0x000000};
    }

    namespace OR {
        constexpr rw_bit_field ITR1_RMP{0x40000050, 0x000003, 0x00000a};
    }

}

namespace TIM3 {
    namespace CR1 {
        constexpr rw_bit_field CKD{0x40000400, 0x000003, 0x000008};
        constexpr rw_bit_field ARPE{0x40000400, 0x000001, 0x000007};
        constexpr rw_bit_field CMS{0x40000400, 0x000003, 0x000005};
        constexpr rw_bit_field DIR{0x40000400, 0x000001, 0x000004};
        constexpr rw_bit_field OPM{0x40000400, 0x000001, 0x000003};
        constexpr rw_bit_field URS{0x40000400, 0x000001, 0x000002};
        constexpr rw_bit_field UDIS{0x40000400, 0x000001, 0x000001};
        constexpr rw_bit_field CEN{0x40000400, 0x000001, 0x000000};
    }

    namespace CR2 {
        constexpr rw_bit_field TI1S{0x40000404, 0x000001, 0x000007};
        constexpr rw_bit_field MMS{0x40000404, 0x000007, 0x000004};
        constexpr rw_bit_field CCDS{0x40000404, 0x000001, 0x000003};
    }

    namespace SMCR {
        constexpr rw_bit_field ETP{0x40000408, 0x000001, 0x00000f};
        constexpr rw_bit_field ECE{0x40000408, 0x000001, 0x00000e};
        constexpr rw_bit_field ETPS{0x40000408, 0x000003, 0x00000c};
        constexpr rw_bit_field ETF{0x40000408, 0x00000f, 0x000008};
        constexpr rw_bit_field MSM{0x40000408, 0x000001, 0x000007};
        constexpr rw_bit_field TS{0x40000408, 0x000007, 0x000004};
        constexpr rw_bit_field SMS{0x40000408, 0x000007, 0x000000};
    }

    namespace DIER {
        constexpr rw_bit_field TDE{0x4000040c, 0x000001, 0x00000e};
        constexpr rw_bit_field CC4DE{0x4000040c, 0x000001, 0x00000c};
        constexpr rw_bit_field CC3DE{0x4000040c, 0x000001, 0x00000b};
        constexpr rw_bit_field CC2DE{0x4000040c, 0x000001, 0x00000a};
        constexpr rw_bit_field CC1DE{0x4000040c, 0x000001, 0x000009};
        constexpr rw_bit_field UDE{0x4000040c, 0x000001, 0x000008};
        constexpr rw_bit_field TIE{0x4000040c, 0x000001, 0x000006};
        constexpr rw_bit_field CC4IE{0x4000040c, 0x000001, 0x000004};
        constexpr rw_bit_field CC3IE{0x4000040c, 0x000001, 0x000003};
        constexpr rw_bit_field CC2IE{0x4000040c, 0x000001, 0x000002};
        constexpr rw_bit_field CC1IE{0x4000040c, 0x000001, 0x000001};
        constexpr rw_bit_field UIE{0x4000040c, 0x000001, 0x000000};
    }

    namespace SR {
        constexpr rw_bit_field CC4OF{0x40000410, 0x000001, 0x00000c};
        constexpr rw_bit_field CC3OF{0x40000410, 0x000001, 0x00000b};
        constexpr rw_bit_field CC2OF{0x40000410, 0x000001, 0x00000a};
        constexpr rw_bit_field CC1OF{0x40000410, 0x000001, 0x000009};
        constexpr rw_bit_field TIF{0x40000410, 0x000001, 0x000006};
        constexpr rw_bit_field CC4IF{0x40000410, 0x000001, 0x000004};
        constexpr rw_bit_field CC3IF{0x40000410, 0x000001, 0x000003};
        constexpr rw_bit_field CC2IF{0x40000410, 0x000001, 0x000002};
        constexpr rw_bit_field CC1IF{0x40000410, 0x000001, 0x000001};
        constexpr rw_bit_field UIF{0x40000410, 0x000001, 0x000000};
    }

    namespace EGR {
        constexpr wo_bit_field TG{0x40000414, 0x000001, 0x000006};
        constexpr wo_bit_field CC4G{0x40000414, 0x000001, 0x000004};
        constexpr wo_bit_field CC3G{0x40000414, 0x000001, 0x000003};
        constexpr wo_bit_field CC2G{0x40000414, 0x000001, 0x000002};
        constexpr wo_bit_field CC1G{0x40000414, 0x000001, 0x000001};
        constexpr wo_bit_field UG{0x40000414, 0x000001, 0x000000};
    }

    namespace CCMR1_Output {
        constexpr rw_bit_field OC2CE{0x40000418, 0x000001, 0x00000f};
        constexpr rw_bit_field OC2M{0x40000418, 0x000007, 0x00000c};
        constexpr rw_bit_field OC2PE{0x40000418, 0x000001, 0x00000b};
        constexpr rw_bit_field OC2FE{0x40000418, 0x000001, 0x00000a};
        constexpr rw_bit_field CC2S{0x40000418, 0x000003, 0x000008};
        constexpr rw_bit_field OC1CE{0x40000418, 0x000001, 0x000007};
        constexpr rw_bit_field OC1M{0x40000418, 0x000007, 0x000004};
        constexpr rw_bit_field OC1PE{0x40000418, 0x000001, 0x000003};
        constexpr rw_bit_field OC1FE{0x40000418, 0x000001, 0x000002};
        constexpr rw_bit_field CC1S{0x40000418, 0x000003, 0x000000};
    }

    namespace CCMR1_Input {
        constexpr rw_bit_field IC2F{0x40000418, 0x00000f, 0x00000c};
        constexpr rw_bit_field IC2PCS{0x40000418, 0x000003, 0x00000a};
        constexpr rw_bit_field CC2S{0x40000418, 0x000003, 0x000008};
        constexpr rw_bit_field IC1F{0x40000418, 0x00000f, 0x000004};
        constexpr rw_bit_field ICPCS{0x40000418, 0x000003, 0x000002};
        constexpr rw_bit_field CC1S{0x40000418, 0x000003, 0x000000};
    }

    namespace CCMR2_Output {
        constexpr rw_bit_field O24CE{0x4000041c, 0x000001, 0x00000f};
        constexpr rw_bit_field OC4M{0x4000041c, 0x000007, 0x00000c};
        constexpr rw_bit_field OC4PE{0x4000041c, 0x000001, 0x00000b};
        constexpr rw_bit_field OC4FE{0x4000041c, 0x000001, 0x00000a};
        constexpr rw_bit_field CC4S{0x4000041c, 0x000003, 0x000008};
        constexpr rw_bit_field OC3CE{0x4000041c, 0x000001, 0x000007};
        constexpr rw_bit_field OC3M{0x4000041c, 0x000007, 0x000004};
        constexpr rw_bit_field OC3PE{0x4000041c, 0x000001, 0x000003};
        constexpr rw_bit_field OC3FE{0x4000041c, 0x000001, 0x000002};
        constexpr rw_bit_field CC3S{0x4000041c, 0x000003, 0x000000};
    }

    namespace CCMR2_Input {
        constexpr rw_bit_field IC4F{0x4000041c, 0x00000f, 0x00000c};
        constexpr rw_bit_field IC4PSC{0x4000041c, 0x000003, 0x00000a};
        constexpr rw_bit_field CC4S{0x4000041c, 0x000003, 0x000008};
        constexpr rw_bit_field IC3F{0x4000041c, 0x00000f, 0x000004};
        constexpr rw_bit_field IC3PSC{0x4000041c, 0x000003, 0x000002};
        constexpr rw_bit_field CC3S{0x4000041c, 0x000003, 0x000000};
    }

    namespace CCER {
        constexpr rw_bit_field CC4NP{0x40000420, 0x000001, 0x00000f};
        constexpr rw_bit_field CC4P{0x40000420, 0x000001, 0x00000d};
        constexpr rw_bit_field CC4E{0x40000420, 0x000001, 0x00000c};
        constexpr rw_bit_field CC3NP{0x40000420, 0x000001, 0x00000b};
        constexpr rw_bit_field CC3P{0x40000420, 0x000001, 0x000009};
        constexpr rw_bit_field CC3E{0x40000420, 0x000001, 0x000008};
        constexpr rw_bit_field CC2NP{0x40000420, 0x000001, 0x000007};
        constexpr rw_bit_field CC2P{0x40000420, 0x000001, 0x000005};
        constexpr rw_bit_field CC2E{0x40000420, 0x000001, 0x000004};
        constexpr rw_bit_field CC1NP{0x40000420, 0x000001, 0x000003};
        constexpr rw_bit_field CC1P{0x40000420, 0x000001, 0x000001};
        constexpr rw_bit_field CC1E{0x40000420, 0x000001, 0x000000};
    }

    namespace CNT {
        constexpr rw_bit_field CNT_H{0x40000424, 0x00ffff, 0x000010};
        constexpr rw_bit_field CNT_L{0x40000424, 0x00ffff, 0x000000};
    }

    namespace PSC {
        constexpr rw_bit_field PSC{0x40000428, 0x00ffff, 0x000000};
    }

    namespace ARR {
        constexpr rw_bit_field ARR_H{0x4000042c, 0x00ffff, 0x000010};
        constexpr rw_bit_field ARR_L{0x4000042c, 0x00ffff, 0x000000};
    }

    namespace CCR1 {
        constexpr rw_bit_field CCR1_H{0x40000434, 0x00ffff, 0x000010};
        constexpr rw_bit_field CCR1_L{0x40000434, 0x00ffff, 0x000000};
    }

    namespace CCR2 {
        constexpr rw_bit_field CCR2_H{0x40000438, 0x00ffff, 0x000010};
        constexpr rw_bit_field CCR2_L{0x40000438, 0x00ffff, 0x000000};
    }

    namespace CCR3 {
        constexpr rw_bit_field CCR3_H{0x4000043c, 0x00ffff, 0x000010};
        constexpr rw_bit_field CCR3_L{0x4000043c, 0x00ffff, 0x000000};
    }

    namespace CCR4 {
        constexpr rw_bit_field CCR4_H{0x40000440, 0x00ffff, 0x000010};
        constexpr rw_bit_field CCR4_L{0x40000440, 0x00ffff, 0x000000};
    }

    namespace DCR {
        constexpr rw_bit_field DBL{0x40000448, 0x00001f, 0x000008};
        constexpr rw_bit_field DBA{0x40000448, 0x00001f, 0x000000};
    }

    namespace DMAR {
        constexpr rw_bit_field DMAB{0x4000044c, 0x00ffff, 0x000000};
    }

}

namespace TIM4 {
    namespace CR1 {
        constexpr rw_bit_field CKD{0x40000800, 0x000003, 0x000008};
        constexpr rw_bit_field ARPE{0x40000800, 0x000001, 0x000007};
        constexpr rw_bit_field CMS{0x40000800, 0x000003, 0x000005};
        constexpr rw_bit_field DIR{0x40000800, 0x000001, 0x000004};
        constexpr rw_bit_field OPM{0x40000800, 0x000001, 0x000003};
        constexpr rw_bit_field URS{0x40000800, 0x000001, 0x000002};
        constexpr rw_bit_field UDIS{0x40000800, 0x000001, 0x000001};
        constexpr rw_bit_field CEN{0x40000800, 0x000001, 0x000000};
    }

    namespace CR2 {
        constexpr rw_bit_field TI1S{0x40000804, 0x000001, 0x000007};
        constexpr rw_bit_field MMS{0x40000804, 0x000007, 0x000004};
        constexpr rw_bit_field CCDS{0x40000804, 0x000001, 0x000003};
    }

    namespace SMCR {
        constexpr rw_bit_field ETP{0x40000808, 0x000001, 0x00000f};
        constexpr rw_bit_field ECE{0x40000808, 0x000001, 0x00000e};
        constexpr rw_bit_field ETPS{0x40000808, 0x000003, 0x00000c};
        constexpr rw_bit_field ETF{0x40000808, 0x00000f, 0x000008};
        constexpr rw_bit_field MSM{0x40000808, 0x000001, 0x000007};
        constexpr rw_bit_field TS{0x40000808, 0x000007, 0x000004};
        constexpr rw_bit_field SMS{0x40000808, 0x000007, 0x000000};
    }

    namespace DIER {
        constexpr rw_bit_field TDE{0x4000080c, 0x000001, 0x00000e};
        constexpr rw_bit_field CC4DE{0x4000080c, 0x000001, 0x00000c};
        constexpr rw_bit_field CC3DE{0x4000080c, 0x000001, 0x00000b};
        constexpr rw_bit_field CC2DE{0x4000080c, 0x000001, 0x00000a};
        constexpr rw_bit_field CC1DE{0x4000080c, 0x000001, 0x000009};
        constexpr rw_bit_field UDE{0x4000080c, 0x000001, 0x000008};
        constexpr rw_bit_field TIE{0x4000080c, 0x000001, 0x000006};
        constexpr rw_bit_field CC4IE{0x4000080c, 0x000001, 0x000004};
        constexpr rw_bit_field CC3IE{0x4000080c, 0x000001, 0x000003};
        constexpr rw_bit_field CC2IE{0x4000080c, 0x000001, 0x000002};
        constexpr rw_bit_field CC1IE{0x4000080c, 0x000001, 0x000001};
        constexpr rw_bit_field UIE{0x4000080c, 0x000001, 0x000000};
    }

    namespace SR {
        constexpr rw_bit_field CC4OF{0x40000810, 0x000001, 0x00000c};
        constexpr rw_bit_field CC3OF{0x40000810, 0x000001, 0x00000b};
        constexpr rw_bit_field CC2OF{0x40000810, 0x000001, 0x00000a};
        constexpr rw_bit_field CC1OF{0x40000810, 0x000001, 0x000009};
        constexpr rw_bit_field TIF{0x40000810, 0x000001, 0x000006};
        constexpr rw_bit_field CC4IF{0x40000810, 0x000001, 0x000004};
        constexpr rw_bit_field CC3IF{0x40000810, 0x000001, 0x000003};
        constexpr rw_bit_field CC2IF{0x40000810, 0x000001, 0x000002};
        constexpr rw_bit_field CC1IF{0x40000810, 0x000001, 0x000001};
        constexpr rw_bit_field UIF{0x40000810, 0x000001, 0x000000};
    }

    namespace EGR {
        constexpr wo_bit_field TG{0x40000814, 0x000001, 0x000006};
        constexpr wo_bit_field CC4G{0x40000814, 0x000001, 0x000004};
        constexpr wo_bit_field CC3G{0x40000814, 0x000001, 0x000003};
        constexpr wo_bit_field CC2G{0x40000814, 0x000001, 0x000002};
        constexpr wo_bit_field CC1G{0x40000814, 0x000001, 0x000001};
        constexpr wo_bit_field UG{0x40000814, 0x000001, 0x000000};
    }

    namespace CCMR1_Output {
        constexpr rw_bit_field OC2CE{0x40000818, 0x000001, 0x00000f};
        constexpr rw_bit_field OC2M{0x40000818, 0x000007, 0x00000c};
        constexpr rw_bit_field OC2PE{0x40000818, 0x000001, 0x00000b};
        constexpr rw_bit_field OC2FE{0x40000818, 0x000001, 0x00000a};
        constexpr rw_bit_field CC2S{0x40000818, 0x000003, 0x000008};
        constexpr rw_bit_field OC1CE{0x40000818, 0x000001, 0x000007};
        constexpr rw_bit_field OC1M{0x40000818, 0x000007, 0x000004};
        constexpr rw_bit_field OC1PE{0x40000818, 0x000001, 0x000003};
        constexpr rw_bit_field OC1FE{0x40000818, 0x000001, 0x000002};
        constexpr rw_bit_field CC1S{0x40000818, 0x000003, 0x000000};
    }

    namespace CCMR1_Input {
        constexpr rw_bit_field IC2F{0x40000818, 0x00000f, 0x00000c};
        constexpr rw_bit_field IC2PCS{0x40000818, 0x000003, 0x00000a};
        constexpr rw_bit_field CC2S{0x40000818, 0x000003, 0x000008};
        constexpr rw_bit_field IC1F{0x40000818, 0x00000f, 0x000004};
        constexpr rw_bit_field ICPCS{0x40000818, 0x000003, 0x000002};
        constexpr rw_bit_field CC1S{0x40000818, 0x000003, 0x000000};
    }

    namespace CCMR2_Output {
        constexpr rw_bit_field O24CE{0x4000081c, 0x000001, 0x00000f};
        constexpr rw_bit_field OC4M{0x4000081c, 0x000007, 0x00000c};
        constexpr rw_bit_field OC4PE{0x4000081c, 0x000001, 0x00000b};
        constexpr rw_bit_field OC4FE{0x4000081c, 0x000001, 0x00000a};
        constexpr rw_bit_field CC4S{0x4000081c, 0x000003, 0x000008};
        constexpr rw_bit_field OC3CE{0x4000081c, 0x000001, 0x000007};
        constexpr rw_bit_field OC3M{0x4000081c, 0x000007, 0x000004};
        constexpr rw_bit_field OC3PE{0x4000081c, 0x000001, 0x000003};
        constexpr rw_bit_field OC3FE{0x4000081c, 0x000001, 0x000002};
        constexpr rw_bit_field CC3S{0x4000081c, 0x000003, 0x000000};
    }

    namespace CCMR2_Input {
        constexpr rw_bit_field IC4F{0x4000081c, 0x00000f, 0x00000c};
        constexpr rw_bit_field IC4PSC{0x4000081c, 0x000003, 0x00000a};
        constexpr rw_bit_field CC4S{0x4000081c, 0x000003, 0x000008};
        constexpr rw_bit_field IC3F{0x4000081c, 0x00000f, 0x000004};
        constexpr rw_bit_field IC3PSC{0x4000081c, 0x000003, 0x000002};
        constexpr rw_bit_field CC3S{0x4000081c, 0x000003, 0x000000};
    }

    namespace CCER {
        constexpr rw_bit_field CC4NP{0x40000820, 0x000001, 0x00000f};
        constexpr rw_bit_field CC4P{0x40000820, 0x000001, 0x00000d};
        constexpr rw_bit_field CC4E{0x40000820, 0x000001, 0x00000c};
        constexpr rw_bit_field CC3NP{0x40000820, 0x000001, 0x00000b};
        constexpr rw_bit_field CC3P{0x40000820, 0x000001, 0x000009};
        constexpr rw_bit_field CC3E{0x40000820, 0x000001, 0x000008};
        constexpr rw_bit_field CC2NP{0x40000820, 0x000001, 0x000007};
        constexpr rw_bit_field CC2P{0x40000820, 0x000001, 0x000005};
        constexpr rw_bit_field CC2E{0x40000820, 0x000001, 0x000004};
        constexpr rw_bit_field CC1NP{0x40000820, 0x000001, 0x000003};
        constexpr rw_bit_field CC1P{0x40000820, 0x000001, 0x000001};
        constexpr rw_bit_field CC1E{0x40000820, 0x000001, 0x000000};
    }

    namespace CNT {
        constexpr rw_bit_field CNT_H{0x40000824, 0x00ffff, 0x000010};
        constexpr rw_bit_field CNT_L{0x40000824, 0x00ffff, 0x000000};
    }

    namespace PSC {
        constexpr rw_bit_field PSC{0x40000828, 0x00ffff, 0x000000};
    }

    namespace ARR {
        constexpr rw_bit_field ARR_H{0x4000082c, 0x00ffff, 0x000010};
        constexpr rw_bit_field ARR_L{0x4000082c, 0x00ffff, 0x000000};
    }

    namespace CCR1 {
        constexpr rw_bit_field CCR1_H{0x40000834, 0x00ffff, 0x000010};
        constexpr rw_bit_field CCR1_L{0x40000834, 0x00ffff, 0x000000};
    }

    namespace CCR2 {
        constexpr rw_bit_field CCR2_H{0x40000838, 0x00ffff, 0x000010};
        constexpr rw_bit_field CCR2_L{0x40000838, 0x00ffff, 0x000000};
    }

    namespace CCR3 {
        constexpr rw_bit_field CCR3_H{0x4000083c, 0x00ffff, 0x000010};
        constexpr rw_bit_field CCR3_L{0x4000083c, 0x00ffff, 0x000000};
    }

    namespace CCR4 {
        constexpr rw_bit_field CCR4_H{0x40000840, 0x00ffff, 0x000010};
        constexpr rw_bit_field CCR4_L{0x40000840, 0x00ffff, 0x000000};
    }

    namespace DCR {
        constexpr rw_bit_field DBL{0x40000848, 0x00001f, 0x000008};
        constexpr rw_bit_field DBA{0x40000848, 0x00001f, 0x000000};
    }

    namespace DMAR {
        constexpr rw_bit_field DMAB{0x4000084c, 0x00ffff, 0x000000};
    }

}

namespace TIM5 {
    namespace CR1 {
        constexpr rw_bit_field CKD{0x40000c00, 0x000003, 0x000008};
        constexpr rw_bit_field ARPE{0x40000c00, 0x000001, 0x000007};
        constexpr rw_bit_field CMS{0x40000c00, 0x000003, 0x000005};
        constexpr rw_bit_field DIR{0x40000c00, 0x000001, 0x000004};
        constexpr rw_bit_field OPM{0x40000c00, 0x000001, 0x000003};
        constexpr rw_bit_field URS{0x40000c00, 0x000001, 0x000002};
        constexpr rw_bit_field UDIS{0x40000c00, 0x000001, 0x000001};
        constexpr rw_bit_field CEN{0x40000c00, 0x000001, 0x000000};
    }

    namespace CR2 {
        constexpr rw_bit_field TI1S{0x40000c04, 0x000001, 0x000007};
        constexpr rw_bit_field MMS{0x40000c04, 0x000007, 0x000004};
        constexpr rw_bit_field CCDS{0x40000c04, 0x000001, 0x000003};
    }

    namespace SMCR {
        constexpr rw_bit_field ETP{0x40000c08, 0x000001, 0x00000f};
        constexpr rw_bit_field ECE{0x40000c08, 0x000001, 0x00000e};
        constexpr rw_bit_field ETPS{0x40000c08, 0x000003, 0x00000c};
        constexpr rw_bit_field ETF{0x40000c08, 0x00000f, 0x000008};
        constexpr rw_bit_field MSM{0x40000c08, 0x000001, 0x000007};
        constexpr rw_bit_field TS{0x40000c08, 0x000007, 0x000004};
        constexpr rw_bit_field SMS{0x40000c08, 0x000007, 0x000000};
    }

    namespace DIER {
        constexpr rw_bit_field TDE{0x40000c0c, 0x000001, 0x00000e};
        constexpr rw_bit_field CC4DE{0x40000c0c, 0x000001, 0x00000c};
        constexpr rw_bit_field CC3DE{0x40000c0c, 0x000001, 0x00000b};
        constexpr rw_bit_field CC2DE{0x40000c0c, 0x000001, 0x00000a};
        constexpr rw_bit_field CC1DE{0x40000c0c, 0x000001, 0x000009};
        constexpr rw_bit_field UDE{0x40000c0c, 0x000001, 0x000008};
        constexpr rw_bit_field TIE{0x40000c0c, 0x000001, 0x000006};
        constexpr rw_bit_field CC4IE{0x40000c0c, 0x000001, 0x000004};
        constexpr rw_bit_field CC3IE{0x40000c0c, 0x000001, 0x000003};
        constexpr rw_bit_field CC2IE{0x40000c0c, 0x000001, 0x000002};
        constexpr rw_bit_field CC1IE{0x40000c0c, 0x000001, 0x000001};
        constexpr rw_bit_field UIE{0x40000c0c, 0x000001, 0x000000};
    }

    namespace SR {
        constexpr rw_bit_field CC4OF{0x40000c10, 0x000001, 0x00000c};
        constexpr rw_bit_field CC3OF{0x40000c10, 0x000001, 0x00000b};
        constexpr rw_bit_field CC2OF{0x40000c10, 0x000001, 0x00000a};
        constexpr rw_bit_field CC1OF{0x40000c10, 0x000001, 0x000009};
        constexpr rw_bit_field TIF{0x40000c10, 0x000001, 0x000006};
        constexpr rw_bit_field CC4IF{0x40000c10, 0x000001, 0x000004};
        constexpr rw_bit_field CC3IF{0x40000c10, 0x000001, 0x000003};
        constexpr rw_bit_field CC2IF{0x40000c10, 0x000001, 0x000002};
        constexpr rw_bit_field CC1IF{0x40000c10, 0x000001, 0x000001};
        constexpr rw_bit_field UIF{0x40000c10, 0x000001, 0x000000};
    }

    namespace EGR {
        constexpr wo_bit_field TG{0x40000c14, 0x000001, 0x000006};
        constexpr wo_bit_field CC4G{0x40000c14, 0x000001, 0x000004};
        constexpr wo_bit_field CC3G{0x40000c14, 0x000001, 0x000003};
        constexpr wo_bit_field CC2G{0x40000c14, 0x000001, 0x000002};
        constexpr wo_bit_field CC1G{0x40000c14, 0x000001, 0x000001};
        constexpr wo_bit_field UG{0x40000c14, 0x000001, 0x000000};
    }

    namespace CCMR1_Output {
        constexpr rw_bit_field OC2CE{0x40000c18, 0x000001, 0x00000f};
        constexpr rw_bit_field OC2M{0x40000c18, 0x000007, 0x00000c};
        constexpr rw_bit_field OC2PE{0x40000c18, 0x000001, 0x00000b};
        constexpr rw_bit_field OC2FE{0x40000c18, 0x000001, 0x00000a};
        constexpr rw_bit_field CC2S{0x40000c18, 0x000003, 0x000008};
        constexpr rw_bit_field OC1CE{0x40000c18, 0x000001, 0x000007};
        constexpr rw_bit_field OC1M{0x40000c18, 0x000007, 0x000004};
        constexpr rw_bit_field OC1PE{0x40000c18, 0x000001, 0x000003};
        constexpr rw_bit_field OC1FE{0x40000c18, 0x000001, 0x000002};
        constexpr rw_bit_field CC1S{0x40000c18, 0x000003, 0x000000};
    }

    namespace CCMR1_Input {
        constexpr rw_bit_field IC2F{0x40000c18, 0x00000f, 0x00000c};
        constexpr rw_bit_field IC2PCS{0x40000c18, 0x000003, 0x00000a};
        constexpr rw_bit_field CC2S{0x40000c18, 0x000003, 0x000008};
        constexpr rw_bit_field IC1F{0x40000c18, 0x00000f, 0x000004};
        constexpr rw_bit_field ICPCS{0x40000c18, 0x000003, 0x000002};
        constexpr rw_bit_field CC1S{0x40000c18, 0x000003, 0x000000};
    }

    namespace CCMR2_Output {
        constexpr rw_bit_field O24CE{0x40000c1c, 0x000001, 0x00000f};
        constexpr rw_bit_field OC4M{0x40000c1c, 0x000007, 0x00000c};
        constexpr rw_bit_field OC4PE{0x40000c1c, 0x000001, 0x00000b};
        constexpr rw_bit_field OC4FE{0x40000c1c, 0x000001, 0x00000a};
        constexpr rw_bit_field CC4S{0x40000c1c, 0x000003, 0x000008};
        constexpr rw_bit_field OC3CE{0x40000c1c, 0x000001, 0x000007};
        constexpr rw_bit_field OC3M{0x40000c1c, 0x000007, 0x000004};
        constexpr rw_bit_field OC3PE{0x40000c1c, 0x000001, 0x000003};
        constexpr rw_bit_field OC3FE{0x40000c1c, 0x000001, 0x000002};
        constexpr rw_bit_field CC3S{0x40000c1c, 0x000003, 0x000000};
    }

    namespace CCMR2_Input {
        constexpr rw_bit_field IC4F{0x40000c1c, 0x00000f, 0x00000c};
        constexpr rw_bit_field IC4PSC{0x40000c1c, 0x000003, 0x00000a};
        constexpr rw_bit_field CC4S{0x40000c1c, 0x000003, 0x000008};
        constexpr rw_bit_field IC3F{0x40000c1c, 0x00000f, 0x000004};
        constexpr rw_bit_field IC3PSC{0x40000c1c, 0x000003, 0x000002};
        constexpr rw_bit_field CC3S{0x40000c1c, 0x000003, 0x000000};
    }

    namespace CCER {
        constexpr rw_bit_field CC4NP{0x40000c20, 0x000001, 0x00000f};
        constexpr rw_bit_field CC4P{0x40000c20, 0x000001, 0x00000d};
        constexpr rw_bit_field CC4E{0x40000c20, 0x000001, 0x00000c};
        constexpr rw_bit_field CC3NP{0x40000c20, 0x000001, 0x00000b};
        constexpr rw_bit_field CC3P{0x40000c20, 0x000001, 0x000009};
        constexpr rw_bit_field CC3E{0x40000c20, 0x000001, 0x000008};
        constexpr rw_bit_field CC2NP{0x40000c20, 0x000001, 0x000007};
        constexpr rw_bit_field CC2P{0x40000c20, 0x000001, 0x000005};
        constexpr rw_bit_field CC2E{0x40000c20, 0x000001, 0x000004};
        constexpr rw_bit_field CC1NP{0x40000c20, 0x000001, 0x000003};
        constexpr rw_bit_field CC1P{0x40000c20, 0x000001, 0x000001};
        constexpr rw_bit_field CC1E{0x40000c20, 0x000001, 0x000000};
    }

    namespace CNT {
        constexpr rw_bit_field CNT_H{0x40000c24, 0x00ffff, 0x000010};
        constexpr rw_bit_field CNT_L{0x40000c24, 0x00ffff, 0x000000};
    }

    namespace PSC {
        constexpr rw_bit_field PSC{0x40000c28, 0x00ffff, 0x000000};
    }

    namespace ARR {
        constexpr rw_bit_field ARR_H{0x40000c2c, 0x00ffff, 0x000010};
        constexpr rw_bit_field ARR_L{0x40000c2c, 0x00ffff, 0x000000};
    }

    namespace CCR1 {
        constexpr rw_bit_field CCR1_H{0x40000c34, 0x00ffff, 0x000010};
        constexpr rw_bit_field CCR1_L{0x40000c34, 0x00ffff, 0x000000};
    }

    namespace CCR2 {
        constexpr rw_bit_field CCR2_H{0x40000c38, 0x00ffff, 0x000010};
        constexpr rw_bit_field CCR2_L{0x40000c38, 0x00ffff, 0x000000};
    }

    namespace CCR3 {
        constexpr rw_bit_field CCR3_H{0x40000c3c, 0x00ffff, 0x000010};
        constexpr rw_bit_field CCR3_L{0x40000c3c, 0x00ffff, 0x000000};
    }

    namespace CCR4 {
        constexpr rw_bit_field CCR4_H{0x40000c40, 0x00ffff, 0x000010};
        constexpr rw_bit_field CCR4_L{0x40000c40, 0x00ffff, 0x000000};
    }

    namespace DCR {
        constexpr rw_bit_field DBL{0x40000c48, 0x00001f, 0x000008};
        constexpr rw_bit_field DBA{0x40000c48, 0x00001f, 0x000000};
    }

    namespace DMAR {
        constexpr rw_bit_field DMAB{0x40000c4c, 0x00ffff, 0x000000};
    }

    namespace OR {
        constexpr rw_bit_field IT4_RMP{0x40000c50, 0x000003, 0x000006};
    }

}

namespace TIM9 {
    namespace CR1 {
        constexpr rw_bit_field CKD{0x40014000, 0x000003, 0x000008};
        constexpr rw_bit_field ARPE{0x40014000, 0x000001, 0x000007};
        constexpr rw_bit_field OPM{0x40014000, 0x000001, 0x000003};
        constexpr rw_bit_field URS{0x40014000, 0x000001, 0x000002};
        constexpr rw_bit_field UDIS{0x40014000, 0x000001, 0x000001};
        constexpr rw_bit_field CEN{0x40014000, 0x000001, 0x000000};
    }

    namespace CR2 {
        constexpr rw_bit_field MMS{0x40014004, 0x000007, 0x000004};
    }

    namespace SMCR {
        constexpr rw_bit_field MSM{0x40014008, 0x000001, 0x000007};
        constexpr rw_bit_field TS{0x40014008, 0x000007, 0x000004};
        constexpr rw_bit_field SMS{0x40014008, 0x000007, 0x000000};
    }

    namespace DIER {
        constexpr rw_bit_field TIE{0x4001400c, 0x000001, 0x000006};
        constexpr rw_bit_field CC2IE{0x4001400c, 0x000001, 0x000002};
        constexpr rw_bit_field CC1IE{0x4001400c, 0x000001, 0x000001};
        constexpr rw_bit_field UIE{0x4001400c, 0x000001, 0x000000};
    }

    namespace SR {
        constexpr rw_bit_field CC2OF{0x40014010, 0x000001, 0x00000a};
        constexpr rw_bit_field CC1OF{0x40014010, 0x000001, 0x000009};
        constexpr rw_bit_field TIF{0x40014010, 0x000001, 0x000006};
        constexpr rw_bit_field CC2IF{0x40014010, 0x000001, 0x000002};
        constexpr rw_bit_field CC1IF{0x40014010, 0x000001, 0x000001};
        constexpr rw_bit_field UIF{0x40014010, 0x000001, 0x000000};
    }

    namespace EGR {
        constexpr wo_bit_field TG{0x40014014, 0x000001, 0x000006};
        constexpr wo_bit_field CC2G{0x40014014, 0x000001, 0x000002};
        constexpr wo_bit_field CC1G{0x40014014, 0x000001, 0x000001};
        constexpr wo_bit_field UG{0x40014014, 0x000001, 0x000000};
    }

    namespace CCMR1_Output {
        constexpr rw_bit_field OC2M{0x40014018, 0x000007, 0x00000c};
        constexpr rw_bit_field OC2PE{0x40014018, 0x000001, 0x00000b};
        constexpr rw_bit_field OC2FE{0x40014018, 0x000001, 0x00000a};
        constexpr rw_bit_field CC2S{0x40014018, 0x000003, 0x000008};
        constexpr rw_bit_field OC1M{0x40014018, 0x000007, 0x000004};
        constexpr rw_bit_field OC1PE{0x40014018, 0x000001, 0x000003};
        constexpr rw_bit_field OC1FE{0x40014018, 0x000001, 0x000002};
        constexpr rw_bit_field CC1S{0x40014018, 0x000003, 0x000000};
    }

    namespace CCMR1_Input {
        constexpr rw_bit_field IC2F{0x40014018, 0x000007, 0x00000c};
        constexpr rw_bit_field IC2PCS{0x40014018, 0x000003, 0x00000a};
        constexpr rw_bit_field CC2S{0x40014018, 0x000003, 0x000008};
        constexpr rw_bit_field IC1F{0x40014018, 0x000007, 0x000004};
        constexpr rw_bit_field ICPCS{0x40014018, 0x000003, 0x000002};
        constexpr rw_bit_field CC1S{0x40014018, 0x000003, 0x000000};
    }

    namespace CCER {
        constexpr rw_bit_field CC2NP{0x40014020, 0x000001, 0x000007};
        constexpr rw_bit_field CC2P{0x40014020, 0x000001, 0x000005};
        constexpr rw_bit_field CC2E{0x40014020, 0x000001, 0x000004};
        constexpr rw_bit_field CC1NP{0x40014020, 0x000001, 0x000003};
        constexpr rw_bit_field CC1P{0x40014020, 0x000001, 0x000001};
        constexpr rw_bit_field CC1E{0x40014020, 0x000001, 0x000000};
    }

    namespace CNT {
        constexpr rw_bit_field CNT{0x40014024, 0x00ffff, 0x000000};
    }

    namespace PSC {
        constexpr rw_bit_field PSC{0x40014028, 0x00ffff, 0x000000};
    }

    namespace ARR {
        constexpr rw_bit_field ARR{0x4001402c, 0x00ffff, 0x000000};
    }

    namespace CCR1 {
        constexpr rw_bit_field CCR1{0x40014034, 0x00ffff, 0x000000};
    }

    namespace CCR2 {
        constexpr rw_bit_field CCR2{0x40014038, 0x00ffff, 0x000000};
    }

}

namespace USART1 {
    namespace SR {
        constexpr rw_bit_field CTS{0x40011000, 0x000001, 0x000009};
        constexpr rw_bit_field LBD{0x40011000, 0x000001, 0x000008};
        constexpr ro_bit_field TXE{0x40011000, 0x000001, 0x000007};
        constexpr rw_bit_field TC{0x40011000, 0x000001, 0x000006};
        constexpr rw_bit_field RXNE{0x40011000, 0x000001, 0x000005};
        constexpr ro_bit_field IDLE{0x40011000, 0x000001, 0x000004};
        constexpr ro_bit_field ORE{0x40011000, 0x000001, 0x000003};
        constexpr ro_bit_field NF{0x40011000, 0x000001, 0x000002};
        constexpr ro_bit_field FE{0x40011000, 0x000001, 0x000001};
        constexpr ro_bit_field PE{0x40011000, 0x000001, 0x000000};
    }

    namespace DR {
        constexpr rw_bit_field DR{0x40011004, 0x0001ff, 0x000000};
    }

    namespace BRR {
        constexpr rw_bit_field DIV_Mantissa{0x40011008, 0x000fff, 0x000004};
        constexpr rw_bit_field DIV_Fraction{0x40011008, 0x00000f, 0x000000};
    }

    namespace CR1 {
        constexpr rw_bit_field OVER8{0x4001100c, 0x000001, 0x00000f};
        constexpr rw_bit_field UE{0x4001100c, 0x000001, 0x00000d};
        constexpr rw_bit_field M{0x4001100c, 0x000001, 0x00000c};
        constexpr rw_bit_field WAKE{0x4001100c, 0x000001, 0x00000b};
        constexpr rw_bit_field PCE{0x4001100c, 0x000001, 0x00000a};
        constexpr rw_bit_field PS{0x4001100c, 0x000001, 0x000009};
        constexpr rw_bit_field PEIE{0x4001100c, 0x000001, 0x000008};
        constexpr rw_bit_field TXEIE{0x4001100c, 0x000001, 0x000007};
        constexpr rw_bit_field TCIE{0x4001100c, 0x000001, 0x000006};
        constexpr rw_bit_field RXNEIE{0x4001100c, 0x000001, 0x000005};
        constexpr rw_bit_field IDLEIE{0x4001100c, 0x000001, 0x000004};
        constexpr rw_bit_field TE{0x4001100c, 0x000001, 0x000003};
        constexpr rw_bit_field RE{0x4001100c, 0x000001, 0x000002};
        constexpr rw_bit_field RWU{0x4001100c, 0x000001, 0x000001};
        constexpr rw_bit_field SBK{0x4001100c, 0x000001, 0x000000};
    }

    namespace CR2 {
        constexpr rw_bit_field LINEN{0x40011010, 0x000001, 0x00000e};
        constexpr rw_bit_field STOP{0x40011010, 0x000003, 0x00000c};
        constexpr rw_bit_field CLKEN{0x40011010, 0x000001, 0x00000b};
        constexpr rw_bit_field CPOL{0x40011010, 0x000001, 0x00000a};
        constexpr rw_bit_field CPHA{0x40011010, 0x000001, 0x000009};
        constexpr rw_bit_field LBCL{0x40011010, 0x000001, 0x000008};
        constexpr rw_bit_field LBDIE{0x40011010, 0x000001, 0x000006};
        constexpr rw_bit_field LBDL{0x40011010, 0x000001, 0x000005};
        constexpr rw_bit_field ADD{0x40011010, 0x00000f, 0x000000};
    }

    namespace CR3 {
        constexpr rw_bit_field ONEBIT{0x40011014, 0x000001, 0x00000b};
        constexpr rw_bit_field CTSIE{0x40011014, 0x000001, 0x00000a};
        constexpr rw_bit_field CTSE{0x40011014, 0x000001, 0x000009};
        constexpr rw_bit_field RTSE{0x40011014, 0x000001, 0x000008};
        constexpr rw_bit_field DMAT{0x40011014, 0x000001, 0x000007};
        constexpr rw_bit_field DMAR{0x40011014, 0x000001, 0x000006};
        constexpr rw_bit_field SCEN{0x40011014, 0x000001, 0x000005};
        constexpr rw_bit_field NACK{0x40011014, 0x000001, 0x000004};
        constexpr rw_bit_field HDSEL{0x40011014, 0x000001, 0x000003};
        constexpr rw_bit_field IRLP{0x40011014, 0x000001, 0x000002};
        constexpr rw_bit_field IREN{0x40011014, 0x000001, 0x000001};
        constexpr rw_bit_field EIE{0x40011014, 0x000001, 0x000000};
    }

    namespace GTPR {
        constexpr rw_bit_field GT{0x40011018, 0x0000ff, 0x000008};
        constexpr rw_bit_field PSC{0x40011018, 0x0000ff, 0x000000};
    }

}

namespace USART2 {
    namespace SR {
        constexpr rw_bit_field CTS{0x40004400, 0x000001, 0x000009};
        constexpr rw_bit_field LBD{0x40004400, 0x000001, 0x000008};
        constexpr ro_bit_field TXE{0x40004400, 0x000001, 0x000007};
        constexpr rw_bit_field TC{0x40004400, 0x000001, 0x000006};
        constexpr rw_bit_field RXNE{0x40004400, 0x000001, 0x000005};
        constexpr ro_bit_field IDLE{0x40004400, 0x000001, 0x000004};
        constexpr ro_bit_field ORE{0x40004400, 0x000001, 0x000003};
        constexpr ro_bit_field NF{0x40004400, 0x000001, 0x000002};
        constexpr ro_bit_field FE{0x40004400, 0x000001, 0x000001};
        constexpr ro_bit_field PE{0x40004400, 0x000001, 0x000000};
    }

    namespace DR {
        constexpr rw_bit_field DR{0x40004404, 0x0001ff, 0x000000};
    }

    namespace BRR {
        constexpr rw_bit_field DIV_Mantissa{0x40004408, 0x000fff, 0x000004};
        constexpr rw_bit_field DIV_Fraction{0x40004408, 0x00000f, 0x000000};
    }

    namespace CR1 {
        constexpr rw_bit_field OVER8{0x4000440c, 0x000001, 0x00000f};
        constexpr rw_bit_field UE{0x4000440c, 0x000001, 0x00000d};
        constexpr rw_bit_field M{0x4000440c, 0x000001, 0x00000c};
        constexpr rw_bit_field WAKE{0x4000440c, 0x000001, 0x00000b};
        constexpr rw_bit_field PCE{0x4000440c, 0x000001, 0x00000a};
        constexpr rw_bit_field PS{0x4000440c, 0x000001, 0x000009};
        constexpr rw_bit_field PEIE{0x4000440c, 0x000001, 0x000008};
        constexpr rw_bit_field TXEIE{0x4000440c, 0x000001, 0x000007};
        constexpr rw_bit_field TCIE{0x4000440c, 0x000001, 0x000006};
        constexpr rw_bit_field RXNEIE{0x4000440c, 0x000001, 0x000005};
        constexpr rw_bit_field IDLEIE{0x4000440c, 0x000001, 0x000004};
        constexpr rw_bit_field TE{0x4000440c, 0x000001, 0x000003};
        constexpr rw_bit_field RE{0x4000440c, 0x000001, 0x000002};
        constexpr rw_bit_field RWU{0x4000440c, 0x000001, 0x000001};
        constexpr rw_bit_field SBK{0x4000440c, 0x000001, 0x000000};
    }

    namespace CR2 {
        constexpr rw_bit_field LINEN{0x40004410, 0x000001, 0x00000e};
        constexpr rw_bit_field STOP{0x40004410, 0x000003, 0x00000c};
        constexpr rw_bit_field CLKEN{0x40004410, 0x000001, 0x00000b};
        constexpr rw_bit_field CPOL{0x40004410, 0x000001, 0x00000a};
        constexpr rw_bit_field CPHA{0x40004410, 0x000001, 0x000009};
        constexpr rw_bit_field LBCL{0x40004410, 0x000001, 0x000008};
        constexpr rw_bit_field LBDIE{0x40004410, 0x000001, 0x000006};
        constexpr rw_bit_field LBDL{0x40004410, 0x000001, 0x000005};
        constexpr rw_bit_field ADD{0x40004410, 0x00000f, 0x000000};
    }

    namespace CR3 {
        constexpr rw_bit_field ONEBIT{0x40004414, 0x000001, 0x00000b};
        constexpr rw_bit_field CTSIE{0x40004414, 0x000001, 0x00000a};
        constexpr rw_bit_field CTSE{0x40004414, 0x000001, 0x000009};
        constexpr rw_bit_field RTSE{0x40004414, 0x000001, 0x000008};
        constexpr rw_bit_field DMAT{0x40004414, 0x000001, 0x000007};
        constexpr rw_bit_field DMAR{0x40004414, 0x000001, 0x000006};
        constexpr rw_bit_field SCEN{0x40004414, 0x000001, 0x000005};
        constexpr rw_bit_field NACK{0x40004414, 0x000001, 0x000004};
        constexpr rw_bit_field HDSEL{0x40004414, 0x000001, 0x000003};
        constexpr rw_bit_field IRLP{0x40004414, 0x000001, 0x000002};
        constexpr rw_bit_field IREN{0x40004414, 0x000001, 0x000001};
        constexpr rw_bit_field EIE{0x40004414, 0x000001, 0x000000};
    }

    namespace GTPR {
        constexpr rw_bit_field GT{0x40004418, 0x0000ff, 0x000008};
        constexpr rw_bit_field PSC{0x40004418, 0x0000ff, 0x000000};
    }

}

namespace USART6 {
    namespace SR {
        constexpr rw_bit_field CTS{0x40011400, 0x000001, 0x000009};
        constexpr rw_bit_field LBD{0x40011400, 0x000001, 0x000008};
        constexpr ro_bit_field TXE{0x40011400, 0x000001, 0x000007};
        constexpr rw_bit_field TC{0x40011400, 0x000001, 0x000006};
        constexpr rw_bit_field RXNE{0x40011400, 0x000001, 0x000005};
        constexpr ro_bit_field IDLE{0x40011400, 0x000001, 0x000004};
        constexpr ro_bit_field ORE{0x40011400, 0x000001, 0x000003};
        constexpr ro_bit_field NF{0x40011400, 0x000001, 0x000002};
        constexpr ro_bit_field FE{0x40011400, 0x000001, 0x000001};
        constexpr ro_bit_field PE{0x40011400, 0x000001, 0x000000};
    }

    namespace DR {
        constexpr rw_bit_field DR{0x40011404, 0x0001ff, 0x000000};
    }

    namespace BRR {
        constexpr rw_bit_field DIV_Mantissa{0x40011408, 0x000fff, 0x000004};
        constexpr rw_bit_field DIV_Fraction{0x40011408, 0x00000f, 0x000000};
    }

    namespace CR1 {
        constexpr rw_bit_field OVER8{0x4001140c, 0x000001, 0x00000f};
        constexpr rw_bit_field UE{0x4001140c, 0x000001, 0x00000d};
        constexpr rw_bit_field M{0x4001140c, 0x000001, 0x00000c};
        constexpr rw_bit_field WAKE{0x4001140c, 0x000001, 0x00000b};
        constexpr rw_bit_field PCE{0x4001140c, 0x000001, 0x00000a};
        constexpr rw_bit_field PS{0x4001140c, 0x000001, 0x000009};
        constexpr rw_bit_field PEIE{0x4001140c, 0x000001, 0x000008};
        constexpr rw_bit_field TXEIE{0x4001140c, 0x000001, 0x000007};
        constexpr rw_bit_field TCIE{0x4001140c, 0x000001, 0x000006};
        constexpr rw_bit_field RXNEIE{0x4001140c, 0x000001, 0x000005};
        constexpr rw_bit_field IDLEIE{0x4001140c, 0x000001, 0x000004};
        constexpr rw_bit_field TE{0x4001140c, 0x000001, 0x000003};
        constexpr rw_bit_field RE{0x4001140c, 0x000001, 0x000002};
        constexpr rw_bit_field RWU{0x4001140c, 0x000001, 0x000001};
        constexpr rw_bit_field SBK{0x4001140c, 0x000001, 0x000000};
    }

    namespace CR2 {
        constexpr rw_bit_field LINEN{0x40011410, 0x000001, 0x00000e};
        constexpr rw_bit_field STOP{0x40011410, 0x000003, 0x00000c};
        constexpr rw_bit_field CLKEN{0x40011410, 0x000001, 0x00000b};
        constexpr rw_bit_field CPOL{0x40011410, 0x000001, 0x00000a};
        constexpr rw_bit_field CPHA{0x40011410, 0x000001, 0x000009};
        constexpr rw_bit_field LBCL{0x40011410, 0x000001, 0x000008};
        constexpr rw_bit_field LBDIE{0x40011410, 0x000001, 0x000006};
        constexpr rw_bit_field LBDL{0x40011410, 0x000001, 0x000005};
        constexpr rw_bit_field ADD{0x40011410, 0x00000f, 0x000000};
    }

    namespace CR3 {
        constexpr rw_bit_field ONEBIT{0x40011414, 0x000001, 0x00000b};
        constexpr rw_bit_field CTSIE{0x40011414, 0x000001, 0x00000a};
        constexpr rw_bit_field CTSE{0x40011414, 0x000001, 0x000009};
        constexpr rw_bit_field RTSE{0x40011414, 0x000001, 0x000008};
        constexpr rw_bit_field DMAT{0x40011414, 0x000001, 0x000007};
        constexpr rw_bit_field DMAR{0x40011414, 0x000001, 0x000006};
        constexpr rw_bit_field SCEN{0x40011414, 0x000001, 0x000005};
        constexpr rw_bit_field NACK{0x40011414, 0x000001, 0x000004};
        constexpr rw_bit_field HDSEL{0x40011414, 0x000001, 0x000003};
        constexpr rw_bit_field IRLP{0x40011414, 0x000001, 0x000002};
        constexpr rw_bit_field IREN{0x40011414, 0x000001, 0x000001};
        constexpr rw_bit_field EIE{0x40011414, 0x000001, 0x000000};
    }

    namespace GTPR {
        constexpr rw_bit_field GT{0x40011418, 0x0000ff, 0x000008};
        constexpr rw_bit_field PSC{0x40011418, 0x0000ff, 0x000000};
    }

}

namespace WWDG {
    namespace CR {
        constexpr rw_bit_field WDGA{0x40002c00, 0x000001, 0x000007};
        constexpr rw_bit_field T{0x40002c00, 0x00007f, 0x000000};
    }

    namespace CFR {
        constexpr rw_bit_field EWI{0x40002c04, 0x000001, 0x000009};
        constexpr rw_bit_field WDGTB1{0x40002c04, 0x000001, 0x000008};
        constexpr rw_bit_field WDGTB0{0x40002c04, 0x000001, 0x000007};
        constexpr rw_bit_field W{0x40002c04, 0x00007f, 0x000000};
    }

    namespace SR {
        constexpr rw_bit_field EWIF{0x40002c08, 0x000001, 0x000000};
    }

}

namespace DMA2 {
    namespace LISR {
        constexpr ro_bit_field TCIF3{0x40026400, 0x000001, 0x00001b};
        constexpr ro_bit_field HTIF3{0x40026400, 0x000001, 0x00001a};
        constexpr ro_bit_field TEIF3{0x40026400, 0x000001, 0x000019};
        constexpr ro_bit_field DMEIF3{0x40026400, 0x000001, 0x000018};
        constexpr ro_bit_field FEIF3{0x40026400, 0x000001, 0x000016};
        constexpr ro_bit_field TCIF2{0x40026400, 0x000001, 0x000015};
        constexpr ro_bit_field HTIF2{0x40026400, 0x000001, 0x000014};
        constexpr ro_bit_field TEIF2{0x40026400, 0x000001, 0x000013};
        constexpr ro_bit_field DMEIF2{0x40026400, 0x000001, 0x000012};
        constexpr ro_bit_field FEIF2{0x40026400, 0x000001, 0x000010};
        constexpr ro_bit_field TCIF1{0x40026400, 0x000001, 0x00000b};
        constexpr ro_bit_field HTIF1{0x40026400, 0x000001, 0x00000a};
        constexpr ro_bit_field TEIF1{0x40026400, 0x000001, 0x000009};
        constexpr ro_bit_field DMEIF1{0x40026400, 0x000001, 0x000008};
        constexpr ro_bit_field FEIF1{0x40026400, 0x000001, 0x000006};
        constexpr ro_bit_field TCIF0{0x40026400, 0x000001, 0x000005};
        constexpr ro_bit_field HTIF0{0x40026400, 0x000001, 0x000004};
        constexpr ro_bit_field TEIF0{0x40026400, 0x000001, 0x000003};
        constexpr ro_bit_field DMEIF0{0x40026400, 0x000001, 0x000002};
        constexpr ro_bit_field FEIF0{0x40026400, 0x000001, 0x000000};
    }

    namespace HISR {
        constexpr ro_bit_field TCIF7{0x40026404, 0x000001, 0x00001b};
        constexpr ro_bit_field HTIF7{0x40026404, 0x000001, 0x00001a};
        constexpr ro_bit_field TEIF7{0x40026404, 0x000001, 0x000019};
        constexpr ro_bit_field DMEIF7{0x40026404, 0x000001, 0x000018};
        constexpr ro_bit_field FEIF7{0x40026404, 0x000001, 0x000016};
        constexpr ro_bit_field TCIF6{0x40026404, 0x000001, 0x000015};
        constexpr ro_bit_field HTIF6{0x40026404, 0x000001, 0x000014};
        constexpr ro_bit_field TEIF6{0x40026404, 0x000001, 0x000013};
        constexpr ro_bit_field DMEIF6{0x40026404, 0x000001, 0x000012};
        constexpr ro_bit_field FEIF6{0x40026404, 0x000001, 0x000010};
        constexpr ro_bit_field TCIF5{0x40026404, 0x000001, 0x00000b};
        constexpr ro_bit_field HTIF5{0x40026404, 0x000001, 0x00000a};
        constexpr ro_bit_field TEIF5{0x40026404, 0x000001, 0x000009};
        constexpr ro_bit_field DMEIF5{0x40026404, 0x000001, 0x000008};
        constexpr ro_bit_field FEIF5{0x40026404, 0x000001, 0x000006};
        constexpr ro_bit_field TCIF4{0x40026404, 0x000001, 0x000005};
        constexpr ro_bit_field HTIF4{0x40026404, 0x000001, 0x000004};
        constexpr ro_bit_field TEIF4{0x40026404, 0x000001, 0x000003};
        constexpr ro_bit_field DMEIF4{0x40026404, 0x000001, 0x000002};
        constexpr ro_bit_field FEIF4{0x40026404, 0x000001, 0x000000};
    }

    namespace LIFCR {
        constexpr wo_bit_field CTCIF3{0x40026408, 0x000001, 0x00001b};
        constexpr wo_bit_field CHTIF3{0x40026408, 0x000001, 0x00001a};
        constexpr wo_bit_field CTEIF3{0x40026408, 0x000001, 0x000019};
        constexpr wo_bit_field CDMEIF3{0x40026408, 0x000001, 0x000018};
        constexpr wo_bit_field CFEIF3{0x40026408, 0x000001, 0x000016};
        constexpr wo_bit_field CTCIF2{0x40026408, 0x000001, 0x000015};
        constexpr wo_bit_field CHTIF2{0x40026408, 0x000001, 0x000014};
        constexpr wo_bit_field CTEIF2{0x40026408, 0x000001, 0x000013};
        constexpr wo_bit_field CDMEIF2{0x40026408, 0x000001, 0x000012};
        constexpr wo_bit_field CFEIF2{0x40026408, 0x000001, 0x000010};
        constexpr wo_bit_field CTCIF1{0x40026408, 0x000001, 0x00000b};
        constexpr wo_bit_field CHTIF1{0x40026408, 0x000001, 0x00000a};
        constexpr wo_bit_field CTEIF1{0x40026408, 0x000001, 0x000009};
        constexpr wo_bit_field CDMEIF1{0x40026408, 0x000001, 0x000008};
        constexpr wo_bit_field CFEIF1{0x40026408, 0x000001, 0x000006};
        constexpr wo_bit_field CTCIF0{0x40026408, 0x000001, 0x000005};
        constexpr wo_bit_field CHTIF0{0x40026408, 0x000001, 0x000004};
        constexpr wo_bit_field CTEIF0{0x40026408, 0x000001, 0x000003};
        constexpr wo_bit_field CDMEIF0{0x40026408, 0x000001, 0x000002};
        constexpr wo_bit_field CFEIF0{0x40026408, 0x000001, 0x000000};
    }

    namespace HIFCR {
        constexpr wo_bit_field CTCIF7{0x4002640c, 0x000001, 0x00001b};
        constexpr wo_bit_field CHTIF7{0x4002640c, 0x000001, 0x00001a};
        constexpr wo_bit_field CTEIF7{0x4002640c, 0x000001, 0x000019};
        constexpr wo_bit_field CDMEIF7{0x4002640c, 0x000001, 0x000018};
        constexpr wo_bit_field CFEIF7{0x4002640c, 0x000001, 0x000016};
        constexpr wo_bit_field CTCIF6{0x4002640c, 0x000001, 0x000015};
        constexpr wo_bit_field CHTIF6{0x4002640c, 0x000001, 0x000014};
        constexpr wo_bit_field CTEIF6{0x4002640c, 0x000001, 0x000013};
        constexpr wo_bit_field CDMEIF6{0x4002640c, 0x000001, 0x000012};
        constexpr wo_bit_field CFEIF6{0x4002640c, 0x000001, 0x000010};
        constexpr wo_bit_field CTCIF5{0x4002640c, 0x000001, 0x00000b};
        constexpr wo_bit_field CHTIF5{0x4002640c, 0x000001, 0x00000a};
        constexpr wo_bit_field CTEIF5{0x4002640c, 0x000001, 0x000009};
        constexpr wo_bit_field CDMEIF5{0x4002640c, 0x000001, 0x000008};
        constexpr wo_bit_field CFEIF5{0x4002640c, 0x000001, 0x000006};
        constexpr wo_bit_field CTCIF4{0x4002640c, 0x000001, 0x000005};
        constexpr wo_bit_field CHTIF4{0x4002640c, 0x000001, 0x000004};
        constexpr wo_bit_field CTEIF4{0x4002640c, 0x000001, 0x000003};
        constexpr wo_bit_field CDMEIF4{0x4002640c, 0x000001, 0x000002};
        constexpr wo_bit_field CFEIF4{0x4002640c, 0x000001, 0x000000};
    }

    namespace S0CR {
        constexpr rw_bit_field CHSEL{0x40026410, 0x000007, 0x000019};
        constexpr rw_bit_field MBURST{0x40026410, 0x000003, 0x000017};
        constexpr rw_bit_field PBURST{0x40026410, 0x000003, 0x000015};
        constexpr rw_bit_field CT{0x40026410, 0x000001, 0x000013};
        constexpr rw_bit_field DBM{0x40026410, 0x000001, 0x000012};
        constexpr rw_bit_field PL{0x40026410, 0x000003, 0x000010};
        constexpr rw_bit_field PINCOS{0x40026410, 0x000001, 0x00000f};
        constexpr rw_bit_field MSIZE{0x40026410, 0x000003, 0x00000d};
        constexpr rw_bit_field PSIZE{0x40026410, 0x000003, 0x00000b};
        constexpr rw_bit_field MINC{0x40026410, 0x000001, 0x00000a};
        constexpr rw_bit_field PINC{0x40026410, 0x000001, 0x000009};
        constexpr rw_bit_field CIRC{0x40026410, 0x000001, 0x000008};
        constexpr rw_bit_field DIR{0x40026410, 0x000003, 0x000006};
        constexpr rw_bit_field PFCTRL{0x40026410, 0x000001, 0x000005};
        constexpr rw_bit_field TCIE{0x40026410, 0x000001, 0x000004};
        constexpr rw_bit_field HTIE{0x40026410, 0x000001, 0x000003};
        constexpr rw_bit_field TEIE{0x40026410, 0x000001, 0x000002};
        constexpr rw_bit_field DMEIE{0x40026410, 0x000001, 0x000001};
        constexpr rw_bit_field EN{0x40026410, 0x000001, 0x000000};
    }

    namespace S0NDTR {
        constexpr rw_bit_field NDT{0x40026414, 0x00ffff, 0x000000};
    }

    namespace S0PAR {
        constexpr rw_bit_field PA{0x40026418, 0xffffffff, 0x000000};
    }

    namespace S0M0AR {
        constexpr rw_bit_field M0A{0x4002641c, 0xffffffff, 0x000000};
    }

    namespace S0M1AR {
        constexpr rw_bit_field M1A{0x40026420, 0xffffffff, 0x000000};
    }

    namespace S0FCR {
        constexpr rw_bit_field FEIE{0x40026424, 0x000001, 0x000007};
        constexpr ro_bit_field FS{0x40026424, 0x000007, 0x000003};
        constexpr rw_bit_field DMDIS{0x40026424, 0x000001, 0x000002};
        constexpr rw_bit_field FTH{0x40026424, 0x000003, 0x000000};
    }

    namespace S1CR {
        constexpr rw_bit_field CHSEL{0x40026428, 0x000007, 0x000019};
        constexpr rw_bit_field MBURST{0x40026428, 0x000003, 0x000017};
        constexpr rw_bit_field PBURST{0x40026428, 0x000003, 0x000015};
        constexpr rw_bit_field ACK{0x40026428, 0x000001, 0x000014};
        constexpr rw_bit_field CT{0x40026428, 0x000001, 0x000013};
        constexpr rw_bit_field DBM{0x40026428, 0x000001, 0x000012};
        constexpr rw_bit_field PL{0x40026428, 0x000003, 0x000010};
        constexpr rw_bit_field PINCOS{0x40026428, 0x000001, 0x00000f};
        constexpr rw_bit_field MSIZE{0x40026428, 0x000003, 0x00000d};
        constexpr rw_bit_field PSIZE{0x40026428, 0x000003, 0x00000b};
        constexpr rw_bit_field MINC{0x40026428, 0x000001, 0x00000a};
        constexpr rw_bit_field PINC{0x40026428, 0x000001, 0x000009};
        constexpr rw_bit_field CIRC{0x40026428, 0x000001, 0x000008};
        constexpr rw_bit_field DIR{0x40026428, 0x000003, 0x000006};
        constexpr rw_bit_field PFCTRL{0x40026428, 0x000001, 0x000005};
        constexpr rw_bit_field TCIE{0x40026428, 0x000001, 0x000004};
        constexpr rw_bit_field HTIE{0x40026428, 0x000001, 0x000003};
        constexpr rw_bit_field TEIE{0x40026428, 0x000001, 0x000002};
        constexpr rw_bit_field DMEIE{0x40026428, 0x000001, 0x000001};
        constexpr rw_bit_field EN{0x40026428, 0x000001, 0x000000};
    }

    namespace S1NDTR {
        constexpr rw_bit_field NDT{0x4002642c, 0x00ffff, 0x000000};
    }

    namespace S1PAR {
        constexpr rw_bit_field PA{0x40026430, 0xffffffff, 0x000000};
    }

    namespace S1M0AR {
        constexpr rw_bit_field M0A{0x40026434, 0xffffffff, 0x000000};
    }

    namespace S1M1AR {
        constexpr rw_bit_field M1A{0x40026438, 0xffffffff, 0x000000};
    }

    namespace S1FCR {
        constexpr rw_bit_field FEIE{0x4002643c, 0x000001, 0x000007};
        constexpr ro_bit_field FS{0x4002643c, 0x000007, 0x000003};
        constexpr rw_bit_field DMDIS{0x4002643c, 0x000001, 0x000002};
        constexpr rw_bit_field FTH{0x4002643c, 0x000003, 0x000000};
    }

    namespace S2CR {
        constexpr rw_bit_field CHSEL{0x40026440, 0x000007, 0x000019};
        constexpr rw_bit_field MBURST{0x40026440, 0x000003, 0x000017};
        constexpr rw_bit_field PBURST{0x40026440, 0x000003, 0x000015};
        constexpr rw_bit_field ACK{0x40026440, 0x000001, 0x000014};
        constexpr rw_bit_field CT{0x40026440, 0x000001, 0x000013};
        constexpr rw_bit_field DBM{0x40026440, 0x000001, 0x000012};
        constexpr rw_bit_field PL{0x40026440, 0x000003, 0x000010};
        constexpr rw_bit_field PINCOS{0x40026440, 0x000001, 0x00000f};
        constexpr rw_bit_field MSIZE{0x40026440, 0x000003, 0x00000d};
        constexpr rw_bit_field PSIZE{0x40026440, 0x000003, 0x00000b};
        constexpr rw_bit_field MINC{0x40026440, 0x000001, 0x00000a};
        constexpr rw_bit_field PINC{0x40026440, 0x000001, 0x000009};
        constexpr rw_bit_field CIRC{0x40026440, 0x000001, 0x000008};
        constexpr rw_bit_field DIR{0x40026440, 0x000003, 0x000006};
        constexpr rw_bit_field PFCTRL{0x40026440, 0x000001, 0x000005};
        constexpr rw_bit_field TCIE{0x40026440, 0x000001, 0x000004};
        constexpr rw_bit_field HTIE{0x40026440, 0x000001, 0x000003};
        constexpr rw_bit_field TEIE{0x40026440, 0x000001, 0x000002};
        constexpr rw_bit_field DMEIE{0x40026440, 0x000001, 0x000001};
        constexpr rw_bit_field EN{0x40026440, 0x000001, 0x000000};
    }

    namespace S2NDTR {
        constexpr rw_bit_field NDT{0x40026444, 0x00ffff, 0x000000};
    }

    namespace S2PAR {
        constexpr rw_bit_field PA{0x40026448, 0xffffffff, 0x000000};
    }

    namespace S2M0AR {
        constexpr rw_bit_field M0A{0x4002644c, 0xffffffff, 0x000000};
    }

    namespace S2M1AR {
        constexpr rw_bit_field M1A{0x40026450, 0xffffffff, 0x000000};
    }

    namespace S2FCR {
        constexpr rw_bit_field FEIE{0x40026454, 0x000001, 0x000007};
        constexpr ro_bit_field FS{0x40026454, 0x000007, 0x000003};
        constexpr rw_bit_field DMDIS{0x40026454, 0x000001, 0x000002};
        constexpr rw_bit_field FTH{0x40026454, 0x000003, 0x000000};
    }

    namespace S3CR {
        constexpr rw_bit_field CHSEL{0x40026458, 0x000007, 0x000019};
        constexpr rw_bit_field MBURST{0x40026458, 0x000003, 0x000017};
        constexpr rw_bit_field PBURST{0x40026458, 0x000003, 0x000015};
        constexpr rw_bit_field ACK{0x40026458, 0x000001, 0x000014};
        constexpr rw_bit_field CT{0x40026458, 0x000001, 0x000013};
        constexpr rw_bit_field DBM{0x40026458, 0x000001, 0x000012};
        constexpr rw_bit_field PL{0x40026458, 0x000003, 0x000010};
        constexpr rw_bit_field PINCOS{0x40026458, 0x000001, 0x00000f};
        constexpr rw_bit_field MSIZE{0x40026458, 0x000003, 0x00000d};
        constexpr rw_bit_field PSIZE{0x40026458, 0x000003, 0x00000b};
        constexpr rw_bit_field MINC{0x40026458, 0x000001, 0x00000a};
        constexpr rw_bit_field PINC{0x40026458, 0x000001, 0x000009};
        constexpr rw_bit_field CIRC{0x40026458, 0x000001, 0x000008};
        constexpr rw_bit_field DIR{0x40026458, 0x000003, 0x000006};
        constexpr rw_bit_field PFCTRL{0x40026458, 0x000001, 0x000005};
        constexpr rw_bit_field TCIE{0x40026458, 0x000001, 0x000004};
        constexpr rw_bit_field HTIE{0x40026458, 0x000001, 0x000003};
        constexpr rw_bit_field TEIE{0x40026458, 0x000001, 0x000002};
        constexpr rw_bit_field DMEIE{0x40026458, 0x000001, 0x000001};
        constexpr rw_bit_field EN{0x40026458, 0x000001, 0x000000};
    }

    namespace S3NDTR {
        constexpr rw_bit_field NDT{0x4002645c, 0x00ffff, 0x000000};
    }

    namespace S3PAR {
        constexpr rw_bit_field PA{0x40026460, 0xffffffff, 0x000000};
    }

    namespace S3M0AR {
        constexpr rw_bit_field M0A{0x40026464, 0xffffffff, 0x000000};
    }

    namespace S3M1AR {
        constexpr rw_bit_field M1A{0x40026468, 0xffffffff, 0x000000};
    }

    namespace S3FCR {
        constexpr rw_bit_field FEIE{0x4002646c, 0x000001, 0x000007};
        constexpr ro_bit_field FS{0x4002646c, 0x000007, 0x000003};
        constexpr rw_bit_field DMDIS{0x4002646c, 0x000001, 0x000002};
        constexpr rw_bit_field FTH{0x4002646c, 0x000003, 0x000000};
    }

    namespace S4CR {
        constexpr rw_bit_field CHSEL{0x40026470, 0x000007, 0x000019};
        constexpr rw_bit_field MBURST{0x40026470, 0x000003, 0x000017};
        constexpr rw_bit_field PBURST{0x40026470, 0x000003, 0x000015};
        constexpr rw_bit_field ACK{0x40026470, 0x000001, 0x000014};
        constexpr rw_bit_field CT{0x40026470, 0x000001, 0x000013};
        constexpr rw_bit_field DBM{0x40026470, 0x000001, 0x000012};
        constexpr rw_bit_field PL{0x40026470, 0x000003, 0x000010};
        constexpr rw_bit_field PINCOS{0x40026470, 0x000001, 0x00000f};
        constexpr rw_bit_field MSIZE{0x40026470, 0x000003, 0x00000d};
        constexpr rw_bit_field PSIZE{0x40026470, 0x000003, 0x00000b};
        constexpr rw_bit_field MINC{0x40026470, 0x000001, 0x00000a};
        constexpr rw_bit_field PINC{0x40026470, 0x000001, 0x000009};
        constexpr rw_bit_field CIRC{0x40026470, 0x000001, 0x000008};
        constexpr rw_bit_field DIR{0x40026470, 0x000003, 0x000006};
        constexpr rw_bit_field PFCTRL{0x40026470, 0x000001, 0x000005};
        constexpr rw_bit_field TCIE{0x40026470, 0x000001, 0x000004};
        constexpr rw_bit_field HTIE{0x40026470, 0x000001, 0x000003};
        constexpr rw_bit_field TEIE{0x40026470, 0x000001, 0x000002};
        constexpr rw_bit_field DMEIE{0x40026470, 0x000001, 0x000001};
        constexpr rw_bit_field EN{0x40026470, 0x000001, 0x000000};
    }

    namespace S4NDTR {
        constexpr rw_bit_field NDT{0x40026474, 0x00ffff, 0x000000};
    }

    namespace S4PAR {
        constexpr rw_bit_field PA{0x40026478, 0xffffffff, 0x000000};
    }

    namespace S4M0AR {
        constexpr rw_bit_field M0A{0x4002647c, 0xffffffff, 0x000000};
    }

    namespace S4M1AR {
        constexpr rw_bit_field M1A{0x40026480, 0xffffffff, 0x000000};
    }

    namespace S4FCR {
        constexpr rw_bit_field FEIE{0x40026484, 0x000001, 0x000007};
        constexpr ro_bit_field FS{0x40026484, 0x000007, 0x000003};
        constexpr rw_bit_field DMDIS{0x40026484, 0x000001, 0x000002};
        constexpr rw_bit_field FTH{0x40026484, 0x000003, 0x000000};
    }

    namespace S5CR {
        constexpr rw_bit_field CHSEL{0x40026488, 0x000007, 0x000019};
        constexpr rw_bit_field MBURST{0x40026488, 0x000003, 0x000017};
        constexpr rw_bit_field PBURST{0x40026488, 0x000003, 0x000015};
        constexpr rw_bit_field ACK{0x40026488, 0x000001, 0x000014};
        constexpr rw_bit_field CT{0x40026488, 0x000001, 0x000013};
        constexpr rw_bit_field DBM{0x40026488, 0x000001, 0x000012};
        constexpr rw_bit_field PL{0x40026488, 0x000003, 0x000010};
        constexpr rw_bit_field PINCOS{0x40026488, 0x000001, 0x00000f};
        constexpr rw_bit_field MSIZE{0x40026488, 0x000003, 0x00000d};
        constexpr rw_bit_field PSIZE{0x40026488, 0x000003, 0x00000b};
        constexpr rw_bit_field MINC{0x40026488, 0x000001, 0x00000a};
        constexpr rw_bit_field PINC{0x40026488, 0x000001, 0x000009};
        constexpr rw_bit_field CIRC{0x40026488, 0x000001, 0x000008};
        constexpr rw_bit_field DIR{0x40026488, 0x000003, 0x000006};
        constexpr rw_bit_field PFCTRL{0x40026488, 0x000001, 0x000005};
        constexpr rw_bit_field TCIE{0x40026488, 0x000001, 0x000004};
        constexpr rw_bit_field HTIE{0x40026488, 0x000001, 0x000003};
        constexpr rw_bit_field TEIE{0x40026488, 0x000001, 0x000002};
        constexpr rw_bit_field DMEIE{0x40026488, 0x000001, 0x000001};
        constexpr rw_bit_field EN{0x40026488, 0x000001, 0x000000};
    }

    namespace S5NDTR {
        constexpr rw_bit_field NDT{0x4002648c, 0x00ffff, 0x000000};
    }

    namespace S5PAR {
        constexpr rw_bit_field PA{0x40026490, 0xffffffff, 0x000000};
    }

    namespace S5M0AR {
        constexpr rw_bit_field M0A{0x40026494, 0xffffffff, 0x000000};
    }

    namespace S5M1AR {
        constexpr rw_bit_field M1A{0x40026498, 0xffffffff, 0x000000};
    }

    namespace S5FCR {
        constexpr rw_bit_field FEIE{0x4002649c, 0x000001, 0x000007};
        constexpr ro_bit_field FS{0x4002649c, 0x000007, 0x000003};
        constexpr rw_bit_field DMDIS{0x4002649c, 0x000001, 0x000002};
        constexpr rw_bit_field FTH{0x4002649c, 0x000003, 0x000000};
    }

    namespace S6CR {
        constexpr rw_bit_field CHSEL{0x400264a0, 0x000007, 0x000019};
        constexpr rw_bit_field MBURST{0x400264a0, 0x000003, 0x000017};
        constexpr rw_bit_field PBURST{0x400264a0, 0x000003, 0x000015};
        constexpr rw_bit_field ACK{0x400264a0, 0x000001, 0x000014};
        constexpr rw_bit_field CT{0x400264a0, 0x000001, 0x000013};
        constexpr rw_bit_field DBM{0x400264a0, 0x000001, 0x000012};
        constexpr rw_bit_field PL{0x400264a0, 0x000003, 0x000010};
        constexpr rw_bit_field PINCOS{0x400264a0, 0x000001, 0x00000f};
        constexpr rw_bit_field MSIZE{0x400264a0, 0x000003, 0x00000d};
        constexpr rw_bit_field PSIZE{0x400264a0, 0x000003, 0x00000b};
        constexpr rw_bit_field MINC{0x400264a0, 0x000001, 0x00000a};
        constexpr rw_bit_field PINC{0x400264a0, 0x000001, 0x000009};
        constexpr rw_bit_field CIRC{0x400264a0, 0x000001, 0x000008};
        constexpr rw_bit_field DIR{0x400264a0, 0x000003, 0x000006};
        constexpr rw_bit_field PFCTRL{0x400264a0, 0x000001, 0x000005};
        constexpr rw_bit_field TCIE{0x400264a0, 0x000001, 0x000004};
        constexpr rw_bit_field HTIE{0x400264a0, 0x000001, 0x000003};
        constexpr rw_bit_field TEIE{0x400264a0, 0x000001, 0x000002};
        constexpr rw_bit_field DMEIE{0x400264a0, 0x000001, 0x000001};
        constexpr rw_bit_field EN{0x400264a0, 0x000001, 0x000000};
    }

    namespace S6NDTR {
        constexpr rw_bit_field NDT{0x400264a4, 0x00ffff, 0x000000};
    }

    namespace S6PAR {
        constexpr rw_bit_field PA{0x400264a8, 0xffffffff, 0x000000};
    }

    namespace S6M0AR {
        constexpr rw_bit_field M0A{0x400264ac, 0xffffffff, 0x000000};
    }

    namespace S6M1AR {
        constexpr rw_bit_field M1A{0x400264b0, 0xffffffff, 0x000000};
    }

    namespace S6FCR {
        constexpr rw_bit_field FEIE{0x400264b4, 0x000001, 0x000007};
        constexpr ro_bit_field FS{0x400264b4, 0x000007, 0x000003};
        constexpr rw_bit_field DMDIS{0x400264b4, 0x000001, 0x000002};
        constexpr rw_bit_field FTH{0x400264b4, 0x000003, 0x000000};
    }

    namespace S7CR {
        constexpr rw_bit_field CHSEL{0x400264b8, 0x000007, 0x000019};
        constexpr rw_bit_field MBURST{0x400264b8, 0x000003, 0x000017};
        constexpr rw_bit_field PBURST{0x400264b8, 0x000003, 0x000015};
        constexpr rw_bit_field ACK{0x400264b8, 0x000001, 0x000014};
        constexpr rw_bit_field CT{0x400264b8, 0x000001, 0x000013};
        constexpr rw_bit_field DBM{0x400264b8, 0x000001, 0x000012};
        constexpr rw_bit_field PL{0x400264b8, 0x000003, 0x000010};
        constexpr rw_bit_field PINCOS{0x400264b8, 0x000001, 0x00000f};
        constexpr rw_bit_field MSIZE{0x400264b8, 0x000003, 0x00000d};
        constexpr rw_bit_field PSIZE{0x400264b8, 0x000003, 0x00000b};
        constexpr rw_bit_field MINC{0x400264b8, 0x000001, 0x00000a};
        constexpr rw_bit_field PINC{0x400264b8, 0x000001, 0x000009};
        constexpr rw_bit_field CIRC{0x400264b8, 0x000001, 0x000008};
        constexpr rw_bit_field DIR{0x400264b8, 0x000003, 0x000006};
        constexpr rw_bit_field PFCTRL{0x400264b8, 0x000001, 0x000005};
        constexpr rw_bit_field TCIE{0x400264b8, 0x000001, 0x000004};
        constexpr rw_bit_field HTIE{0x400264b8, 0x000001, 0x000003};
        constexpr rw_bit_field TEIE{0x400264b8, 0x000001, 0x000002};
        constexpr rw_bit_field DMEIE{0x400264b8, 0x000001, 0x000001};
        constexpr rw_bit_field EN{0x400264b8, 0x000001, 0x000000};
    }

    namespace S7NDTR {
        constexpr rw_bit_field NDT{0x400264bc, 0x00ffff, 0x000000};
    }

    namespace S7PAR {
        constexpr rw_bit_field PA{0x400264c0, 0xffffffff, 0x000000};
    }

    namespace S7M0AR {
        constexpr rw_bit_field M0A{0x400264c4, 0xffffffff, 0x000000};
    }

    namespace S7M1AR {
        constexpr rw_bit_field M1A{0x400264c8, 0xffffffff, 0x000000};
    }

    namespace S7FCR {
        constexpr rw_bit_field FEIE{0x400264cc, 0x000001, 0x000007};
        constexpr ro_bit_field FS{0x400264cc, 0x000007, 0x000003};
        constexpr rw_bit_field DMDIS{0x400264cc, 0x000001, 0x000002};
        constexpr rw_bit_field FTH{0x400264cc, 0x000003, 0x000000};
    }

}

namespace DMA1 {
    namespace LISR {
        constexpr ro_bit_field TCIF3{0x40026000, 0x000001, 0x00001b};
        constexpr ro_bit_field HTIF3{0x40026000, 0x000001, 0x00001a};
        constexpr ro_bit_field TEIF3{0x40026000, 0x000001, 0x000019};
        constexpr ro_bit_field DMEIF3{0x40026000, 0x000001, 0x000018};
        constexpr ro_bit_field FEIF3{0x40026000, 0x000001, 0x000016};
        constexpr ro_bit_field TCIF2{0x40026000, 0x000001, 0x000015};
        constexpr ro_bit_field HTIF2{0x40026000, 0x000001, 0x000014};
        constexpr ro_bit_field TEIF2{0x40026000, 0x000001, 0x000013};
        constexpr ro_bit_field DMEIF2{0x40026000, 0x000001, 0x000012};
        constexpr ro_bit_field FEIF2{0x40026000, 0x000001, 0x000010};
        constexpr ro_bit_field TCIF1{0x40026000, 0x000001, 0x00000b};
        constexpr ro_bit_field HTIF1{0x40026000, 0x000001, 0x00000a};
        constexpr ro_bit_field TEIF1{0x40026000, 0x000001, 0x000009};
        constexpr ro_bit_field DMEIF1{0x40026000, 0x000001, 0x000008};
        constexpr ro_bit_field FEIF1{0x40026000, 0x000001, 0x000006};
        constexpr ro_bit_field TCIF0{0x40026000, 0x000001, 0x000005};
        constexpr ro_bit_field HTIF0{0x40026000, 0x000001, 0x000004};
        constexpr ro_bit_field TEIF0{0x40026000, 0x000001, 0x000003};
        constexpr ro_bit_field DMEIF0{0x40026000, 0x000001, 0x000002};
        constexpr ro_bit_field FEIF0{0x40026000, 0x000001, 0x000000};
    }

    namespace HISR {
        constexpr ro_bit_field TCIF7{0x40026004, 0x000001, 0x00001b};
        constexpr ro_bit_field HTIF7{0x40026004, 0x000001, 0x00001a};
        constexpr ro_bit_field TEIF7{0x40026004, 0x000001, 0x000019};
        constexpr ro_bit_field DMEIF7{0x40026004, 0x000001, 0x000018};
        constexpr ro_bit_field FEIF7{0x40026004, 0x000001, 0x000016};
        constexpr ro_bit_field TCIF6{0x40026004, 0x000001, 0x000015};
        constexpr ro_bit_field HTIF6{0x40026004, 0x000001, 0x000014};
        constexpr ro_bit_field TEIF6{0x40026004, 0x000001, 0x000013};
        constexpr ro_bit_field DMEIF6{0x40026004, 0x000001, 0x000012};
        constexpr ro_bit_field FEIF6{0x40026004, 0x000001, 0x000010};
        constexpr ro_bit_field TCIF5{0x40026004, 0x000001, 0x00000b};
        constexpr ro_bit_field HTIF5{0x40026004, 0x000001, 0x00000a};
        constexpr ro_bit_field TEIF5{0x40026004, 0x000001, 0x000009};
        constexpr ro_bit_field DMEIF5{0x40026004, 0x000001, 0x000008};
        constexpr ro_bit_field FEIF5{0x40026004, 0x000001, 0x000006};
        constexpr ro_bit_field TCIF4{0x40026004, 0x000001, 0x000005};
        constexpr ro_bit_field HTIF4{0x40026004, 0x000001, 0x000004};
        constexpr ro_bit_field TEIF4{0x40026004, 0x000001, 0x000003};
        constexpr ro_bit_field DMEIF4{0x40026004, 0x000001, 0x000002};
        constexpr ro_bit_field FEIF4{0x40026004, 0x000001, 0x000000};
    }

    namespace LIFCR {
        constexpr wo_bit_field CTCIF3{0x40026008, 0x000001, 0x00001b};
        constexpr wo_bit_field CHTIF3{0x40026008, 0x000001, 0x00001a};
        constexpr wo_bit_field CTEIF3{0x40026008, 0x000001, 0x000019};
        constexpr wo_bit_field CDMEIF3{0x40026008, 0x000001, 0x000018};
        constexpr wo_bit_field CFEIF3{0x40026008, 0x000001, 0x000016};
        constexpr wo_bit_field CTCIF2{0x40026008, 0x000001, 0x000015};
        constexpr wo_bit_field CHTIF2{0x40026008, 0x000001, 0x000014};
        constexpr wo_bit_field CTEIF2{0x40026008, 0x000001, 0x000013};
        constexpr wo_bit_field CDMEIF2{0x40026008, 0x000001, 0x000012};
        constexpr wo_bit_field CFEIF2{0x40026008, 0x000001, 0x000010};
        constexpr wo_bit_field CTCIF1{0x40026008, 0x000001, 0x00000b};
        constexpr wo_bit_field CHTIF1{0x40026008, 0x000001, 0x00000a};
        constexpr wo_bit_field CTEIF1{0x40026008, 0x000001, 0x000009};
        constexpr wo_bit_field CDMEIF1{0x40026008, 0x000001, 0x000008};
        constexpr wo_bit_field CFEIF1{0x40026008, 0x000001, 0x000006};
        constexpr wo_bit_field CTCIF0{0x40026008, 0x000001, 0x000005};
        constexpr wo_bit_field CHTIF0{0x40026008, 0x000001, 0x000004};
        constexpr wo_bit_field CTEIF0{0x40026008, 0x000001, 0x000003};
        constexpr wo_bit_field CDMEIF0{0x40026008, 0x000001, 0x000002};
        constexpr wo_bit_field CFEIF0{0x40026008, 0x000001, 0x000000};
    }

    namespace HIFCR {
        constexpr wo_bit_field CTCIF7{0x4002600c, 0x000001, 0x00001b};
        constexpr wo_bit_field CHTIF7{0x4002600c, 0x000001, 0x00001a};
        constexpr wo_bit_field CTEIF7{0x4002600c, 0x000001, 0x000019};
        constexpr wo_bit_field CDMEIF7{0x4002600c, 0x000001, 0x000018};
        constexpr wo_bit_field CFEIF7{0x4002600c, 0x000001, 0x000016};
        constexpr wo_bit_field CTCIF6{0x4002600c, 0x000001, 0x000015};
        constexpr wo_bit_field CHTIF6{0x4002600c, 0x000001, 0x000014};
        constexpr wo_bit_field CTEIF6{0x4002600c, 0x000001, 0x000013};
        constexpr wo_bit_field CDMEIF6{0x4002600c, 0x000001, 0x000012};
        constexpr wo_bit_field CFEIF6{0x4002600c, 0x000001, 0x000010};
        constexpr wo_bit_field CTCIF5{0x4002600c, 0x000001, 0x00000b};
        constexpr wo_bit_field CHTIF5{0x4002600c, 0x000001, 0x00000a};
        constexpr wo_bit_field CTEIF5{0x4002600c, 0x000001, 0x000009};
        constexpr wo_bit_field CDMEIF5{0x4002600c, 0x000001, 0x000008};
        constexpr wo_bit_field CFEIF5{0x4002600c, 0x000001, 0x000006};
        constexpr wo_bit_field CTCIF4{0x4002600c, 0x000001, 0x000005};
        constexpr wo_bit_field CHTIF4{0x4002600c, 0x000001, 0x000004};
        constexpr wo_bit_field CTEIF4{0x4002600c, 0x000001, 0x000003};
        constexpr wo_bit_field CDMEIF4{0x4002600c, 0x000001, 0x000002};
        constexpr wo_bit_field CFEIF4{0x4002600c, 0x000001, 0x000000};
    }

    namespace S0CR {
        constexpr rw_bit_field CHSEL{0x40026010, 0x000007, 0x000019};
        constexpr rw_bit_field MBURST{0x40026010, 0x000003, 0x000017};
        constexpr rw_bit_field PBURST{0x40026010, 0x000003, 0x000015};
        constexpr rw_bit_field CT{0x40026010, 0x000001, 0x000013};
        constexpr rw_bit_field DBM{0x40026010, 0x000001, 0x000012};
        constexpr rw_bit_field PL{0x40026010, 0x000003, 0x000010};
        constexpr rw_bit_field PINCOS{0x40026010, 0x000001, 0x00000f};
        constexpr rw_bit_field MSIZE{0x40026010, 0x000003, 0x00000d};
        constexpr rw_bit_field PSIZE{0x40026010, 0x000003, 0x00000b};
        constexpr rw_bit_field MINC{0x40026010, 0x000001, 0x00000a};
        constexpr rw_bit_field PINC{0x40026010, 0x000001, 0x000009};
        constexpr rw_bit_field CIRC{0x40026010, 0x000001, 0x000008};
        constexpr rw_bit_field DIR{0x40026010, 0x000003, 0x000006};
        constexpr rw_bit_field PFCTRL{0x40026010, 0x000001, 0x000005};
        constexpr rw_bit_field TCIE{0x40026010, 0x000001, 0x000004};
        constexpr rw_bit_field HTIE{0x40026010, 0x000001, 0x000003};
        constexpr rw_bit_field TEIE{0x40026010, 0x000001, 0x000002};
        constexpr rw_bit_field DMEIE{0x40026010, 0x000001, 0x000001};
        constexpr rw_bit_field EN{0x40026010, 0x000001, 0x000000};
    }

    namespace S0NDTR {
        constexpr rw_bit_field NDT{0x40026014, 0x00ffff, 0x000000};
    }

    namespace S0PAR {
        constexpr rw_bit_field PA{0x40026018, 0xffffffff, 0x000000};
    }

    namespace S0M0AR {
        constexpr rw_bit_field M0A{0x4002601c, 0xffffffff, 0x000000};
    }

    namespace S0M1AR {
        constexpr rw_bit_field M1A{0x40026020, 0xffffffff, 0x000000};
    }

    namespace S0FCR {
        constexpr rw_bit_field FEIE{0x40026024, 0x000001, 0x000007};
        constexpr ro_bit_field FS{0x40026024, 0x000007, 0x000003};
        constexpr rw_bit_field DMDIS{0x40026024, 0x000001, 0x000002};
        constexpr rw_bit_field FTH{0x40026024, 0x000003, 0x000000};
    }

    namespace S1CR {
        constexpr rw_bit_field CHSEL{0x40026028, 0x000007, 0x000019};
        constexpr rw_bit_field MBURST{0x40026028, 0x000003, 0x000017};
        constexpr rw_bit_field PBURST{0x40026028, 0x000003, 0x000015};
        constexpr rw_bit_field ACK{0x40026028, 0x000001, 0x000014};
        constexpr rw_bit_field CT{0x40026028, 0x000001, 0x000013};
        constexpr rw_bit_field DBM{0x40026028, 0x000001, 0x000012};
        constexpr rw_bit_field PL{0x40026028, 0x000003, 0x000010};
        constexpr rw_bit_field PINCOS{0x40026028, 0x000001, 0x00000f};
        constexpr rw_bit_field MSIZE{0x40026028, 0x000003, 0x00000d};
        constexpr rw_bit_field PSIZE{0x40026028, 0x000003, 0x00000b};
        constexpr rw_bit_field MINC{0x40026028, 0x000001, 0x00000a};
        constexpr rw_bit_field PINC{0x40026028, 0x000001, 0x000009};
        constexpr rw_bit_field CIRC{0x40026028, 0x000001, 0x000008};
        constexpr rw_bit_field DIR{0x40026028, 0x000003, 0x000006};
        constexpr rw_bit_field PFCTRL{0x40026028, 0x000001, 0x000005};
        constexpr rw_bit_field TCIE{0x40026028, 0x000001, 0x000004};
        constexpr rw_bit_field HTIE{0x40026028, 0x000001, 0x000003};
        constexpr rw_bit_field TEIE{0x40026028, 0x000001, 0x000002};
        constexpr rw_bit_field DMEIE{0x40026028, 0x000001, 0x000001};
        constexpr rw_bit_field EN{0x40026028, 0x000001, 0x000000};
    }

    namespace S1NDTR {
        constexpr rw_bit_field NDT{0x4002602c, 0x00ffff, 0x000000};
    }

    namespace S1PAR {
        constexpr rw_bit_field PA{0x40026030, 0xffffffff, 0x000000};
    }

    namespace S1M0AR {
        constexpr rw_bit_field M0A{0x40026034, 0xffffffff, 0x000000};
    }

    namespace S1M1AR {
        constexpr rw_bit_field M1A{0x40026038, 0xffffffff, 0x000000};
    }

    namespace S1FCR {
        constexpr rw_bit_field FEIE{0x4002603c, 0x000001, 0x000007};
        constexpr ro_bit_field FS{0x4002603c, 0x000007, 0x000003};
        constexpr rw_bit_field DMDIS{0x4002603c, 0x000001, 0x000002};
        constexpr rw_bit_field FTH{0x4002603c, 0x000003, 0x000000};
    }

    namespace S2CR {
        constexpr rw_bit_field CHSEL{0x40026040, 0x000007, 0x000019};
        constexpr rw_bit_field MBURST{0x40026040, 0x000003, 0x000017};
        constexpr rw_bit_field PBURST{0x40026040, 0x000003, 0x000015};
        constexpr rw_bit_field ACK{0x40026040, 0x000001, 0x000014};
        constexpr rw_bit_field CT{0x40026040, 0x000001, 0x000013};
        constexpr rw_bit_field DBM{0x40026040, 0x000001, 0x000012};
        constexpr rw_bit_field PL{0x40026040, 0x000003, 0x000010};
        constexpr rw_bit_field PINCOS{0x40026040, 0x000001, 0x00000f};
        constexpr rw_bit_field MSIZE{0x40026040, 0x000003, 0x00000d};
        constexpr rw_bit_field PSIZE{0x40026040, 0x000003, 0x00000b};
        constexpr rw_bit_field MINC{0x40026040, 0x000001, 0x00000a};
        constexpr rw_bit_field PINC{0x40026040, 0x000001, 0x000009};
        constexpr rw_bit_field CIRC{0x40026040, 0x000001, 0x000008};
        constexpr rw_bit_field DIR{0x40026040, 0x000003, 0x000006};
        constexpr rw_bit_field PFCTRL{0x40026040, 0x000001, 0x000005};
        constexpr rw_bit_field TCIE{0x40026040, 0x000001, 0x000004};
        constexpr rw_bit_field HTIE{0x40026040, 0x000001, 0x000003};
        constexpr rw_bit_field TEIE{0x40026040, 0x000001, 0x000002};
        constexpr rw_bit_field DMEIE{0x40026040, 0x000001, 0x000001};
        constexpr rw_bit_field EN{0x40026040, 0x000001, 0x000000};
    }

    namespace S2NDTR {
        constexpr rw_bit_field NDT{0x40026044, 0x00ffff, 0x000000};
    }

    namespace S2PAR {
        constexpr rw_bit_field PA{0x40026048, 0xffffffff, 0x000000};
    }

    namespace S2M0AR {
        constexpr rw_bit_field M0A{0x4002604c, 0xffffffff, 0x000000};
    }

    namespace S2M1AR {
        constexpr rw_bit_field M1A{0x40026050, 0xffffffff, 0x000000};
    }

    namespace S2FCR {
        constexpr rw_bit_field FEIE{0x40026054, 0x000001, 0x000007};
        constexpr ro_bit_field FS{0x40026054, 0x000007, 0x000003};
        constexpr rw_bit_field DMDIS{0x40026054, 0x000001, 0x000002};
        constexpr rw_bit_field FTH{0x40026054, 0x000003, 0x000000};
    }

    namespace S3CR {
        constexpr rw_bit_field CHSEL{0x40026058, 0x000007, 0x000019};
        constexpr rw_bit_field MBURST{0x40026058, 0x000003, 0x000017};
        constexpr rw_bit_field PBURST{0x40026058, 0x000003, 0x000015};
        constexpr rw_bit_field ACK{0x40026058, 0x000001, 0x000014};
        constexpr rw_bit_field CT{0x40026058, 0x000001, 0x000013};
        constexpr rw_bit_field DBM{0x40026058, 0x000001, 0x000012};
        constexpr rw_bit_field PL{0x40026058, 0x000003, 0x000010};
        constexpr rw_bit_field PINCOS{0x40026058, 0x000001, 0x00000f};
        constexpr rw_bit_field MSIZE{0x40026058, 0x000003, 0x00000d};
        constexpr rw_bit_field PSIZE{0x40026058, 0x000003, 0x00000b};
        constexpr rw_bit_field MINC{0x40026058, 0x000001, 0x00000a};
        constexpr rw_bit_field PINC{0x40026058, 0x000001, 0x000009};
        constexpr rw_bit_field CIRC{0x40026058, 0x000001, 0x000008};
        constexpr rw_bit_field DIR{0x40026058, 0x000003, 0x000006};
        constexpr rw_bit_field PFCTRL{0x40026058, 0x000001, 0x000005};
        constexpr rw_bit_field TCIE{0x40026058, 0x000001, 0x000004};
        constexpr rw_bit_field HTIE{0x40026058, 0x000001, 0x000003};
        constexpr rw_bit_field TEIE{0x40026058, 0x000001, 0x000002};
        constexpr rw_bit_field DMEIE{0x40026058, 0x000001, 0x000001};
        constexpr rw_bit_field EN{0x40026058, 0x000001, 0x000000};
    }

    namespace S3NDTR {
        constexpr rw_bit_field NDT{0x4002605c, 0x00ffff, 0x000000};
    }

    namespace S3PAR {
        constexpr rw_bit_field PA{0x40026060, 0xffffffff, 0x000000};
    }

    namespace S3M0AR {
        constexpr rw_bit_field M0A{0x40026064, 0xffffffff, 0x000000};
    }

    namespace S3M1AR {
        constexpr rw_bit_field M1A{0x40026068, 0xffffffff, 0x000000};
    }

    namespace S3FCR {
        constexpr rw_bit_field FEIE{0x4002606c, 0x000001, 0x000007};
        constexpr ro_bit_field FS{0x4002606c, 0x000007, 0x000003};
        constexpr rw_bit_field DMDIS{0x4002606c, 0x000001, 0x000002};
        constexpr rw_bit_field FTH{0x4002606c, 0x000003, 0x000000};
    }

    namespace S4CR {
        constexpr rw_bit_field CHSEL{0x40026070, 0x000007, 0x000019};
        constexpr rw_bit_field MBURST{0x40026070, 0x000003, 0x000017};
        constexpr rw_bit_field PBURST{0x40026070, 0x000003, 0x000015};
        constexpr rw_bit_field ACK{0x40026070, 0x000001, 0x000014};
        constexpr rw_bit_field CT{0x40026070, 0x000001, 0x000013};
        constexpr rw_bit_field DBM{0x40026070, 0x000001, 0x000012};
        constexpr rw_bit_field PL{0x40026070, 0x000003, 0x000010};
        constexpr rw_bit_field PINCOS{0x40026070, 0x000001, 0x00000f};
        constexpr rw_bit_field MSIZE{0x40026070, 0x000003, 0x00000d};
        constexpr rw_bit_field PSIZE{0x40026070, 0x000003, 0x00000b};
        constexpr rw_bit_field MINC{0x40026070, 0x000001, 0x00000a};
        constexpr rw_bit_field PINC{0x40026070, 0x000001, 0x000009};
        constexpr rw_bit_field CIRC{0x40026070, 0x000001, 0x000008};
        constexpr rw_bit_field DIR{0x40026070, 0x000003, 0x000006};
        constexpr rw_bit_field PFCTRL{0x40026070, 0x000001, 0x000005};
        constexpr rw_bit_field TCIE{0x40026070, 0x000001, 0x000004};
        constexpr rw_bit_field HTIE{0x40026070, 0x000001, 0x000003};
        constexpr rw_bit_field TEIE{0x40026070, 0x000001, 0x000002};
        constexpr rw_bit_field DMEIE{0x40026070, 0x000001, 0x000001};
        constexpr rw_bit_field EN{0x40026070, 0x000001, 0x000000};
    }

    namespace S4NDTR {
        constexpr rw_bit_field NDT{0x40026074, 0x00ffff, 0x000000};
    }

    namespace S4PAR {
        constexpr rw_bit_field PA{0x40026078, 0xffffffff, 0x000000};
    }

    namespace S4M0AR {
        constexpr rw_bit_field M0A{0x4002607c, 0xffffffff, 0x000000};
    }

    namespace S4M1AR {
        constexpr rw_bit_field M1A{0x40026080, 0xffffffff, 0x000000};
    }

    namespace S4FCR {
        constexpr rw_bit_field FEIE{0x40026084, 0x000001, 0x000007};
        constexpr ro_bit_field FS{0x40026084, 0x000007, 0x000003};
        constexpr rw_bit_field DMDIS{0x40026084, 0x000001, 0x000002};
        constexpr rw_bit_field FTH{0x40026084, 0x000003, 0x000000};
    }

    namespace S5CR {
        constexpr rw_bit_field CHSEL{0x40026088, 0x000007, 0x000019};
        constexpr rw_bit_field MBURST{0x40026088, 0x000003, 0x000017};
        constexpr rw_bit_field PBURST{0x40026088, 0x000003, 0x000015};
        constexpr rw_bit_field ACK{0x40026088, 0x000001, 0x000014};
        constexpr rw_bit_field CT{0x40026088, 0x000001, 0x000013};
        constexpr rw_bit_field DBM{0x40026088, 0x000001, 0x000012};
        constexpr rw_bit_field PL{0x40026088, 0x000003, 0x000010};
        constexpr rw_bit_field PINCOS{0x40026088, 0x000001, 0x00000f};
        constexpr rw_bit_field MSIZE{0x40026088, 0x000003, 0x00000d};
        constexpr rw_bit_field PSIZE{0x40026088, 0x000003, 0x00000b};
        constexpr rw_bit_field MINC{0x40026088, 0x000001, 0x00000a};
        constexpr rw_bit_field PINC{0x40026088, 0x000001, 0x000009};
        constexpr rw_bit_field CIRC{0x40026088, 0x000001, 0x000008};
        constexpr rw_bit_field DIR{0x40026088, 0x000003, 0x000006};
        constexpr rw_bit_field PFCTRL{0x40026088, 0x000001, 0x000005};
        constexpr rw_bit_field TCIE{0x40026088, 0x000001, 0x000004};
        constexpr rw_bit_field HTIE{0x40026088, 0x000001, 0x000003};
        constexpr rw_bit_field TEIE{0x40026088, 0x000001, 0x000002};
        constexpr rw_bit_field DMEIE{0x40026088, 0x000001, 0x000001};
        constexpr rw_bit_field EN{0x40026088, 0x000001, 0x000000};
    }

    namespace S5NDTR {
        constexpr rw_bit_field NDT{0x4002608c, 0x00ffff, 0x000000};
    }

    namespace S5PAR {
        constexpr rw_bit_field PA{0x40026090, 0xffffffff, 0x000000};
    }

    namespace S5M0AR {
        constexpr rw_bit_field M0A{0x40026094, 0xffffffff, 0x000000};
    }

    namespace S5M1AR {
        constexpr rw_bit_field M1A{0x40026098, 0xffffffff, 0x000000};
    }

    namespace S5FCR {
        constexpr rw_bit_field FEIE{0x4002609c, 0x000001, 0x000007};
        constexpr ro_bit_field FS{0x4002609c, 0x000007, 0x000003};
        constexpr rw_bit_field DMDIS{0x4002609c, 0x000001, 0x000002};
        constexpr rw_bit_field FTH{0x4002609c, 0x000003, 0x000000};
    }

    namespace S6CR {
        constexpr rw_bit_field CHSEL{0x400260a0, 0x000007, 0x000019};
        constexpr rw_bit_field MBURST{0x400260a0, 0x000003, 0x000017};
        constexpr rw_bit_field PBURST{0x400260a0, 0x000003, 0x000015};
        constexpr rw_bit_field ACK{0x400260a0, 0x000001, 0x000014};
        constexpr rw_bit_field CT{0x400260a0, 0x000001, 0x000013};
        constexpr rw_bit_field DBM{0x400260a0, 0x000001, 0x000012};
        constexpr rw_bit_field PL{0x400260a0, 0x000003, 0x000010};
        constexpr rw_bit_field PINCOS{0x400260a0, 0x000001, 0x00000f};
        constexpr rw_bit_field MSIZE{0x400260a0, 0x000003, 0x00000d};
        constexpr rw_bit_field PSIZE{0x400260a0, 0x000003, 0x00000b};
        constexpr rw_bit_field MINC{0x400260a0, 0x000001, 0x00000a};
        constexpr rw_bit_field PINC{0x400260a0, 0x000001, 0x000009};
        constexpr rw_bit_field CIRC{0x400260a0, 0x000001, 0x000008};
        constexpr rw_bit_field DIR{0x400260a0, 0x000003, 0x000006};
        constexpr rw_bit_field PFCTRL{0x400260a0, 0x000001, 0x000005};
        constexpr rw_bit_field TCIE{0x400260a0, 0x000001, 0x000004};
        constexpr rw_bit_field HTIE{0x400260a0, 0x000001, 0x000003};
        constexpr rw_bit_field TEIE{0x400260a0, 0x000001, 0x000002};
        constexpr rw_bit_field DMEIE{0x400260a0, 0x000001, 0x000001};
        constexpr rw_bit_field EN{0x400260a0, 0x000001, 0x000000};
    }

    namespace S6NDTR {
        constexpr rw_bit_field NDT{0x400260a4, 0x00ffff, 0x000000};
    }

    namespace S6PAR {
        constexpr rw_bit_field PA{0x400260a8, 0xffffffff, 0x000000};
    }

    namespace S6M0AR {
        constexpr rw_bit_field M0A{0x400260ac, 0xffffffff, 0x000000};
    }

    namespace S6M1AR {
        constexpr rw_bit_field M1A{0x400260b0, 0xffffffff, 0x000000};
    }

    namespace S6FCR {
        constexpr rw_bit_field FEIE{0x400260b4, 0x000001, 0x000007};
        constexpr ro_bit_field FS{0x400260b4, 0x000007, 0x000003};
        constexpr rw_bit_field DMDIS{0x400260b4, 0x000001, 0x000002};
        constexpr rw_bit_field FTH{0x400260b4, 0x000003, 0x000000};
    }

    namespace S7CR {
        constexpr rw_bit_field CHSEL{0x400260b8, 0x000007, 0x000019};
        constexpr rw_bit_field MBURST{0x400260b8, 0x000003, 0x000017};
        constexpr rw_bit_field PBURST{0x400260b8, 0x000003, 0x000015};
        constexpr rw_bit_field ACK{0x400260b8, 0x000001, 0x000014};
        constexpr rw_bit_field CT{0x400260b8, 0x000001, 0x000013};
        constexpr rw_bit_field DBM{0x400260b8, 0x000001, 0x000012};
        constexpr rw_bit_field PL{0x400260b8, 0x000003, 0x000010};
        constexpr rw_bit_field PINCOS{0x400260b8, 0x000001, 0x00000f};
        constexpr rw_bit_field MSIZE{0x400260b8, 0x000003, 0x00000d};
        constexpr rw_bit_field PSIZE{0x400260b8, 0x000003, 0x00000b};
        constexpr rw_bit_field MINC{0x400260b8, 0x000001, 0x00000a};
        constexpr rw_bit_field PINC{0x400260b8, 0x000001, 0x000009};
        constexpr rw_bit_field CIRC{0x400260b8, 0x000001, 0x000008};
        constexpr rw_bit_field DIR{0x400260b8, 0x000003, 0x000006};
        constexpr rw_bit_field PFCTRL{0x400260b8, 0x000001, 0x000005};
        constexpr rw_bit_field TCIE{0x400260b8, 0x000001, 0x000004};
        constexpr rw_bit_field HTIE{0x400260b8, 0x000001, 0x000003};
        constexpr rw_bit_field TEIE{0x400260b8, 0x000001, 0x000002};
        constexpr rw_bit_field DMEIE{0x400260b8, 0x000001, 0x000001};
        constexpr rw_bit_field EN{0x400260b8, 0x000001, 0x000000};
    }

    namespace S7NDTR {
        constexpr rw_bit_field NDT{0x400260bc, 0x00ffff, 0x000000};
    }

    namespace S7PAR {
        constexpr rw_bit_field PA{0x400260c0, 0xffffffff, 0x000000};
    }

    namespace S7M0AR {
        constexpr rw_bit_field M0A{0x400260c4, 0xffffffff, 0x000000};
    }

    namespace S7M1AR {
        constexpr rw_bit_field M1A{0x400260c8, 0xffffffff, 0x000000};
    }

    namespace S7FCR {
        constexpr rw_bit_field FEIE{0x400260cc, 0x000001, 0x000007};
        constexpr ro_bit_field FS{0x400260cc, 0x000007, 0x000003};
        constexpr rw_bit_field DMDIS{0x400260cc, 0x000001, 0x000002};
        constexpr rw_bit_field FTH{0x400260cc, 0x000003, 0x000000};
    }

}

namespace GPIOH {
    namespace MODER {
        constexpr rw_bit_field MODER15{0x40021c00, 0x000003, 0x00001e};
        constexpr rw_bit_field MODER14{0x40021c00, 0x000003, 0x00001c};
        constexpr rw_bit_field MODER13{0x40021c00, 0x000003, 0x00001a};
        constexpr rw_bit_field MODER12{0x40021c00, 0x000003, 0x000018};
        constexpr rw_bit_field MODER11{0x40021c00, 0x000003, 0x000016};
        constexpr rw_bit_field MODER10{0x40021c00, 0x000003, 0x000014};
        constexpr rw_bit_field MODER9{0x40021c00, 0x000003, 0x000012};
        constexpr rw_bit_field MODER8{0x40021c00, 0x000003, 0x000010};
        constexpr rw_bit_field MODER7{0x40021c00, 0x000003, 0x00000e};
        constexpr rw_bit_field MODER6{0x40021c00, 0x000003, 0x00000c};
        constexpr rw_bit_field MODER5{0x40021c00, 0x000003, 0x00000a};
        constexpr rw_bit_field MODER4{0x40021c00, 0x000003, 0x000008};
        constexpr rw_bit_field MODER3{0x40021c00, 0x000003, 0x000006};
        constexpr rw_bit_field MODER2{0x40021c00, 0x000003, 0x000004};
        constexpr rw_bit_field MODER1{0x40021c00, 0x000003, 0x000002};
        constexpr rw_bit_field MODER0{0x40021c00, 0x000003, 0x000000};
    }

    namespace OTYPER {
        constexpr rw_bit_field OT15{0x40021c04, 0x000001, 0x00000f};
        constexpr rw_bit_field OT14{0x40021c04, 0x000001, 0x00000e};
        constexpr rw_bit_field OT13{0x40021c04, 0x000001, 0x00000d};
        constexpr rw_bit_field OT12{0x40021c04, 0x000001, 0x00000c};
        constexpr rw_bit_field OT11{0x40021c04, 0x000001, 0x00000b};
        constexpr rw_bit_field OT10{0x40021c04, 0x000001, 0x00000a};
        constexpr rw_bit_field OT9{0x40021c04, 0x000001, 0x000009};
        constexpr rw_bit_field OT8{0x40021c04, 0x000001, 0x000008};
        constexpr rw_bit_field OT7{0x40021c04, 0x000001, 0x000007};
        constexpr rw_bit_field OT6{0x40021c04, 0x000001, 0x000006};
        constexpr rw_bit_field OT5{0x40021c04, 0x000001, 0x000005};
        constexpr rw_bit_field OT4{0x40021c04, 0x000001, 0x000004};
        constexpr rw_bit_field OT3{0x40021c04, 0x000001, 0x000003};
        constexpr rw_bit_field OT2{0x40021c04, 0x000001, 0x000002};
        constexpr rw_bit_field OT1{0x40021c04, 0x000001, 0x000001};
        constexpr rw_bit_field OT0{0x40021c04, 0x000001, 0x000000};
    }

    namespace OSPEEDR {
        constexpr rw_bit_field OSPEEDR15{0x40021c08, 0x000003, 0x00001e};
        constexpr rw_bit_field OSPEEDR14{0x40021c08, 0x000003, 0x00001c};
        constexpr rw_bit_field OSPEEDR13{0x40021c08, 0x000003, 0x00001a};
        constexpr rw_bit_field OSPEEDR12{0x40021c08, 0x000003, 0x000018};
        constexpr rw_bit_field OSPEEDR11{0x40021c08, 0x000003, 0x000016};
        constexpr rw_bit_field OSPEEDR10{0x40021c08, 0x000003, 0x000014};
        constexpr rw_bit_field OSPEEDR9{0x40021c08, 0x000003, 0x000012};
        constexpr rw_bit_field OSPEEDR8{0x40021c08, 0x000003, 0x000010};
        constexpr rw_bit_field OSPEEDR7{0x40021c08, 0x000003, 0x00000e};
        constexpr rw_bit_field OSPEEDR6{0x40021c08, 0x000003, 0x00000c};
        constexpr rw_bit_field OSPEEDR5{0x40021c08, 0x000003, 0x00000a};
        constexpr rw_bit_field OSPEEDR4{0x40021c08, 0x000003, 0x000008};
        constexpr rw_bit_field OSPEEDR3{0x40021c08, 0x000003, 0x000006};
        constexpr rw_bit_field OSPEEDR2{0x40021c08, 0x000003, 0x000004};
        constexpr rw_bit_field OSPEEDR1{0x40021c08, 0x000003, 0x000002};
        constexpr rw_bit_field OSPEEDR0{0x40021c08, 0x000003, 0x000000};
    }

    namespace PUPDR {
        constexpr rw_bit_field PUPDR15{0x40021c0c, 0x000003, 0x00001e};
        constexpr rw_bit_field PUPDR14{0x40021c0c, 0x000003, 0x00001c};
        constexpr rw_bit_field PUPDR13{0x40021c0c, 0x000003, 0x00001a};
        constexpr rw_bit_field PUPDR12{0x40021c0c, 0x000003, 0x000018};
        constexpr rw_bit_field PUPDR11{0x40021c0c, 0x000003, 0x000016};
        constexpr rw_bit_field PUPDR10{0x40021c0c, 0x000003, 0x000014};
        constexpr rw_bit_field PUPDR9{0x40021c0c, 0x000003, 0x000012};
        constexpr rw_bit_field PUPDR8{0x40021c0c, 0x000003, 0x000010};
        constexpr rw_bit_field PUPDR7{0x40021c0c, 0x000003, 0x00000e};
        constexpr rw_bit_field PUPDR6{0x40021c0c, 0x000003, 0x00000c};
        constexpr rw_bit_field PUPDR5{0x40021c0c, 0x000003, 0x00000a};
        constexpr rw_bit_field PUPDR4{0x40021c0c, 0x000003, 0x000008};
        constexpr rw_bit_field PUPDR3{0x40021c0c, 0x000003, 0x000006};
        constexpr rw_bit_field PUPDR2{0x40021c0c, 0x000003, 0x000004};
        constexpr rw_bit_field PUPDR1{0x40021c0c, 0x000003, 0x000002};
        constexpr rw_bit_field PUPDR0{0x40021c0c, 0x000003, 0x000000};
    }

    namespace IDR {
        constexpr ro_bit_field IDR15{0x40021c10, 0x000001, 0x00000f};
        constexpr ro_bit_field IDR14{0x40021c10, 0x000001, 0x00000e};
        constexpr ro_bit_field IDR13{0x40021c10, 0x000001, 0x00000d};
        constexpr ro_bit_field IDR12{0x40021c10, 0x000001, 0x00000c};
        constexpr ro_bit_field IDR11{0x40021c10, 0x000001, 0x00000b};
        constexpr ro_bit_field IDR10{0x40021c10, 0x000001, 0x00000a};
        constexpr ro_bit_field IDR9{0x40021c10, 0x000001, 0x000009};
        constexpr ro_bit_field IDR8{0x40021c10, 0x000001, 0x000008};
        constexpr ro_bit_field IDR7{0x40021c10, 0x000001, 0x000007};
        constexpr ro_bit_field IDR6{0x40021c10, 0x000001, 0x000006};
        constexpr ro_bit_field IDR5{0x40021c10, 0x000001, 0x000005};
        constexpr ro_bit_field IDR4{0x40021c10, 0x000001, 0x000004};
        constexpr ro_bit_field IDR3{0x40021c10, 0x000001, 0x000003};
        constexpr ro_bit_field IDR2{0x40021c10, 0x000001, 0x000002};
        constexpr ro_bit_field IDR1{0x40021c10, 0x000001, 0x000001};
        constexpr ro_bit_field IDR0{0x40021c10, 0x000001, 0x000000};
    }

    namespace ODR {
        constexpr rw_bit_field ODR15{0x40021c14, 0x000001, 0x00000f};
        constexpr rw_bit_field ODR14{0x40021c14, 0x000001, 0x00000e};
        constexpr rw_bit_field ODR13{0x40021c14, 0x000001, 0x00000d};
        constexpr rw_bit_field ODR12{0x40021c14, 0x000001, 0x00000c};
        constexpr rw_bit_field ODR11{0x40021c14, 0x000001, 0x00000b};
        constexpr rw_bit_field ODR10{0x40021c14, 0x000001, 0x00000a};
        constexpr rw_bit_field ODR9{0x40021c14, 0x000001, 0x000009};
        constexpr rw_bit_field ODR8{0x40021c14, 0x000001, 0x000008};
        constexpr rw_bit_field ODR7{0x40021c14, 0x000001, 0x000007};
        constexpr rw_bit_field ODR6{0x40021c14, 0x000001, 0x000006};
        constexpr rw_bit_field ODR5{0x40021c14, 0x000001, 0x000005};
        constexpr rw_bit_field ODR4{0x40021c14, 0x000001, 0x000004};
        constexpr rw_bit_field ODR3{0x40021c14, 0x000001, 0x000003};
        constexpr rw_bit_field ODR2{0x40021c14, 0x000001, 0x000002};
        constexpr rw_bit_field ODR1{0x40021c14, 0x000001, 0x000001};
        constexpr rw_bit_field ODR0{0x40021c14, 0x000001, 0x000000};
    }

    namespace BSRR {
        constexpr wo_bit_field BR15{0x40021c18, 0x000001, 0x00001f};
        constexpr wo_bit_field BR14{0x40021c18, 0x000001, 0x00001e};
        constexpr wo_bit_field BR13{0x40021c18, 0x000001, 0x00001d};
        constexpr wo_bit_field BR12{0x40021c18, 0x000001, 0x00001c};
        constexpr wo_bit_field BR11{0x40021c18, 0x000001, 0x00001b};
        constexpr wo_bit_field BR10{0x40021c18, 0x000001, 0x00001a};
        constexpr wo_bit_field BR9{0x40021c18, 0x000001, 0x000019};
        constexpr wo_bit_field BR8{0x40021c18, 0x000001, 0x000018};
        constexpr wo_bit_field BR7{0x40021c18, 0x000001, 0x000017};
        constexpr wo_bit_field BR6{0x40021c18, 0x000001, 0x000016};
        constexpr wo_bit_field BR5{0x40021c18, 0x000001, 0x000015};
        constexpr wo_bit_field BR4{0x40021c18, 0x000001, 0x000014};
        constexpr wo_bit_field BR3{0x40021c18, 0x000001, 0x000013};
        constexpr wo_bit_field BR2{0x40021c18, 0x000001, 0x000012};
        constexpr wo_bit_field BR1{0x40021c18, 0x000001, 0x000011};
        constexpr wo_bit_field BR0{0x40021c18, 0x000001, 0x000010};
        constexpr wo_bit_field BS15{0x40021c18, 0x000001, 0x00000f};
        constexpr wo_bit_field BS14{0x40021c18, 0x000001, 0x00000e};
        constexpr wo_bit_field BS13{0x40021c18, 0x000001, 0x00000d};
        constexpr wo_bit_field BS12{0x40021c18, 0x000001, 0x00000c};
        constexpr wo_bit_field BS11{0x40021c18, 0x000001, 0x00000b};
        constexpr wo_bit_field BS10{0x40021c18, 0x000001, 0x00000a};
        constexpr wo_bit_field BS9{0x40021c18, 0x000001, 0x000009};
        constexpr wo_bit_field BS8{0x40021c18, 0x000001, 0x000008};
        constexpr wo_bit_field BS7{0x40021c18, 0x000001, 0x000007};
        constexpr wo_bit_field BS6{0x40021c18, 0x000001, 0x000006};
        constexpr wo_bit_field BS5{0x40021c18, 0x000001, 0x000005};
        constexpr wo_bit_field BS4{0x40021c18, 0x000001, 0x000004};
        constexpr wo_bit_field BS3{0x40021c18, 0x000001, 0x000003};
        constexpr wo_bit_field BS2{0x40021c18, 0x000001, 0x000002};
        constexpr wo_bit_field BS1{0x40021c18, 0x000001, 0x000001};
        constexpr wo_bit_field BS0{0x40021c18, 0x000001, 0x000000};
    }

    namespace LCKR {
        constexpr rw_bit_field LCKK{0x40021c1c, 0x000001, 0x000010};
        constexpr rw_bit_field LCK15{0x40021c1c, 0x000001, 0x00000f};
        constexpr rw_bit_field LCK14{0x40021c1c, 0x000001, 0x00000e};
        constexpr rw_bit_field LCK13{0x40021c1c, 0x000001, 0x00000d};
        constexpr rw_bit_field LCK12{0x40021c1c, 0x000001, 0x00000c};
        constexpr rw_bit_field LCK11{0x40021c1c, 0x000001, 0x00000b};
        constexpr rw_bit_field LCK10{0x40021c1c, 0x000001, 0x00000a};
        constexpr rw_bit_field LCK9{0x40021c1c, 0x000001, 0x000009};
        constexpr rw_bit_field LCK8{0x40021c1c, 0x000001, 0x000008};
        constexpr rw_bit_field LCK7{0x40021c1c, 0x000001, 0x000007};
        constexpr rw_bit_field LCK6{0x40021c1c, 0x000001, 0x000006};
        constexpr rw_bit_field LCK5{0x40021c1c, 0x000001, 0x000005};
        constexpr rw_bit_field LCK4{0x40021c1c, 0x000001, 0x000004};
        constexpr rw_bit_field LCK3{0x40021c1c, 0x000001, 0x000003};
        constexpr rw_bit_field LCK2{0x40021c1c, 0x000001, 0x000002};
        constexpr rw_bit_field LCK1{0x40021c1c, 0x000001, 0x000001};
        constexpr rw_bit_field LCK0{0x40021c1c, 0x000001, 0x000000};
    }

    namespace AFRL {
        constexpr rw_bit_field AFRL7{0x40021c20, 0x00000f, 0x00001c};
        constexpr rw_bit_field AFRL6{0x40021c20, 0x00000f, 0x000018};
        constexpr rw_bit_field AFRL5{0x40021c20, 0x00000f, 0x000014};
        constexpr rw_bit_field AFRL4{0x40021c20, 0x00000f, 0x000010};
        constexpr rw_bit_field AFRL3{0x40021c20, 0x00000f, 0x00000c};
        constexpr rw_bit_field AFRL2{0x40021c20, 0x00000f, 0x000008};
        constexpr rw_bit_field AFRL1{0x40021c20, 0x00000f, 0x000004};
        constexpr rw_bit_field AFRL0{0x40021c20, 0x00000f, 0x000000};
    }

    namespace AFRH {
        constexpr rw_bit_field AFRH15{0x40021c24, 0x00000f, 0x00001c};
        constexpr rw_bit_field AFRH14{0x40021c24, 0x00000f, 0x000018};
        constexpr rw_bit_field AFRH13{0x40021c24, 0x00000f, 0x000014};
        constexpr rw_bit_field AFRH12{0x40021c24, 0x00000f, 0x000010};
        constexpr rw_bit_field AFRH11{0x40021c24, 0x00000f, 0x00000c};
        constexpr rw_bit_field AFRH10{0x40021c24, 0x00000f, 0x000008};
        constexpr rw_bit_field AFRH9{0x40021c24, 0x00000f, 0x000004};
        constexpr rw_bit_field AFRH8{0x40021c24, 0x00000f, 0x000000};
    }

}

namespace GPIOE {
    namespace MODER {
        constexpr rw_bit_field MODER15{0x40021000, 0x000003, 0x00001e};
        constexpr rw_bit_field MODER14{0x40021000, 0x000003, 0x00001c};
        constexpr rw_bit_field MODER13{0x40021000, 0x000003, 0x00001a};
        constexpr rw_bit_field MODER12{0x40021000, 0x000003, 0x000018};
        constexpr rw_bit_field MODER11{0x40021000, 0x000003, 0x000016};
        constexpr rw_bit_field MODER10{0x40021000, 0x000003, 0x000014};
        constexpr rw_bit_field MODER9{0x40021000, 0x000003, 0x000012};
        constexpr rw_bit_field MODER8{0x40021000, 0x000003, 0x000010};
        constexpr rw_bit_field MODER7{0x40021000, 0x000003, 0x00000e};
        constexpr rw_bit_field MODER6{0x40021000, 0x000003, 0x00000c};
        constexpr rw_bit_field MODER5{0x40021000, 0x000003, 0x00000a};
        constexpr rw_bit_field MODER4{0x40021000, 0x000003, 0x000008};
        constexpr rw_bit_field MODER3{0x40021000, 0x000003, 0x000006};
        constexpr rw_bit_field MODER2{0x40021000, 0x000003, 0x000004};
        constexpr rw_bit_field MODER1{0x40021000, 0x000003, 0x000002};
        constexpr rw_bit_field MODER0{0x40021000, 0x000003, 0x000000};
    }

    namespace OTYPER {
        constexpr rw_bit_field OT15{0x40021004, 0x000001, 0x00000f};
        constexpr rw_bit_field OT14{0x40021004, 0x000001, 0x00000e};
        constexpr rw_bit_field OT13{0x40021004, 0x000001, 0x00000d};
        constexpr rw_bit_field OT12{0x40021004, 0x000001, 0x00000c};
        constexpr rw_bit_field OT11{0x40021004, 0x000001, 0x00000b};
        constexpr rw_bit_field OT10{0x40021004, 0x000001, 0x00000a};
        constexpr rw_bit_field OT9{0x40021004, 0x000001, 0x000009};
        constexpr rw_bit_field OT8{0x40021004, 0x000001, 0x000008};
        constexpr rw_bit_field OT7{0x40021004, 0x000001, 0x000007};
        constexpr rw_bit_field OT6{0x40021004, 0x000001, 0x000006};
        constexpr rw_bit_field OT5{0x40021004, 0x000001, 0x000005};
        constexpr rw_bit_field OT4{0x40021004, 0x000001, 0x000004};
        constexpr rw_bit_field OT3{0x40021004, 0x000001, 0x000003};
        constexpr rw_bit_field OT2{0x40021004, 0x000001, 0x000002};
        constexpr rw_bit_field OT1{0x40021004, 0x000001, 0x000001};
        constexpr rw_bit_field OT0{0x40021004, 0x000001, 0x000000};
    }

    namespace OSPEEDR {
        constexpr rw_bit_field OSPEEDR15{0x40021008, 0x000003, 0x00001e};
        constexpr rw_bit_field OSPEEDR14{0x40021008, 0x000003, 0x00001c};
        constexpr rw_bit_field OSPEEDR13{0x40021008, 0x000003, 0x00001a};
        constexpr rw_bit_field OSPEEDR12{0x40021008, 0x000003, 0x000018};
        constexpr rw_bit_field OSPEEDR11{0x40021008, 0x000003, 0x000016};
        constexpr rw_bit_field OSPEEDR10{0x40021008, 0x000003, 0x000014};
        constexpr rw_bit_field OSPEEDR9{0x40021008, 0x000003, 0x000012};
        constexpr rw_bit_field OSPEEDR8{0x40021008, 0x000003, 0x000010};
        constexpr rw_bit_field OSPEEDR7{0x40021008, 0x000003, 0x00000e};
        constexpr rw_bit_field OSPEEDR6{0x40021008, 0x000003, 0x00000c};
        constexpr rw_bit_field OSPEEDR5{0x40021008, 0x000003, 0x00000a};
        constexpr rw_bit_field OSPEEDR4{0x40021008, 0x000003, 0x000008};
        constexpr rw_bit_field OSPEEDR3{0x40021008, 0x000003, 0x000006};
        constexpr rw_bit_field OSPEEDR2{0x40021008, 0x000003, 0x000004};
        constexpr rw_bit_field OSPEEDR1{0x40021008, 0x000003, 0x000002};
        constexpr rw_bit_field OSPEEDR0{0x40021008, 0x000003, 0x000000};
    }

    namespace PUPDR {
        constexpr rw_bit_field PUPDR15{0x4002100c, 0x000003, 0x00001e};
        constexpr rw_bit_field PUPDR14{0x4002100c, 0x000003, 0x00001c};
        constexpr rw_bit_field PUPDR13{0x4002100c, 0x000003, 0x00001a};
        constexpr rw_bit_field PUPDR12{0x4002100c, 0x000003, 0x000018};
        constexpr rw_bit_field PUPDR11{0x4002100c, 0x000003, 0x000016};
        constexpr rw_bit_field PUPDR10{0x4002100c, 0x000003, 0x000014};
        constexpr rw_bit_field PUPDR9{0x4002100c, 0x000003, 0x000012};
        constexpr rw_bit_field PUPDR8{0x4002100c, 0x000003, 0x000010};
        constexpr rw_bit_field PUPDR7{0x4002100c, 0x000003, 0x00000e};
        constexpr rw_bit_field PUPDR6{0x4002100c, 0x000003, 0x00000c};
        constexpr rw_bit_field PUPDR5{0x4002100c, 0x000003, 0x00000a};
        constexpr rw_bit_field PUPDR4{0x4002100c, 0x000003, 0x000008};
        constexpr rw_bit_field PUPDR3{0x4002100c, 0x000003, 0x000006};
        constexpr rw_bit_field PUPDR2{0x4002100c, 0x000003, 0x000004};
        constexpr rw_bit_field PUPDR1{0x4002100c, 0x000003, 0x000002};
        constexpr rw_bit_field PUPDR0{0x4002100c, 0x000003, 0x000000};
    }

    namespace IDR {
        constexpr ro_bit_field IDR15{0x40021010, 0x000001, 0x00000f};
        constexpr ro_bit_field IDR14{0x40021010, 0x000001, 0x00000e};
        constexpr ro_bit_field IDR13{0x40021010, 0x000001, 0x00000d};
        constexpr ro_bit_field IDR12{0x40021010, 0x000001, 0x00000c};
        constexpr ro_bit_field IDR11{0x40021010, 0x000001, 0x00000b};
        constexpr ro_bit_field IDR10{0x40021010, 0x000001, 0x00000a};
        constexpr ro_bit_field IDR9{0x40021010, 0x000001, 0x000009};
        constexpr ro_bit_field IDR8{0x40021010, 0x000001, 0x000008};
        constexpr ro_bit_field IDR7{0x40021010, 0x000001, 0x000007};
        constexpr ro_bit_field IDR6{0x40021010, 0x000001, 0x000006};
        constexpr ro_bit_field IDR5{0x40021010, 0x000001, 0x000005};
        constexpr ro_bit_field IDR4{0x40021010, 0x000001, 0x000004};
        constexpr ro_bit_field IDR3{0x40021010, 0x000001, 0x000003};
        constexpr ro_bit_field IDR2{0x40021010, 0x000001, 0x000002};
        constexpr ro_bit_field IDR1{0x40021010, 0x000001, 0x000001};
        constexpr ro_bit_field IDR0{0x40021010, 0x000001, 0x000000};
    }

    namespace ODR {
        constexpr rw_bit_field ODR15{0x40021014, 0x000001, 0x00000f};
        constexpr rw_bit_field ODR14{0x40021014, 0x000001, 0x00000e};
        constexpr rw_bit_field ODR13{0x40021014, 0x000001, 0x00000d};
        constexpr rw_bit_field ODR12{0x40021014, 0x000001, 0x00000c};
        constexpr rw_bit_field ODR11{0x40021014, 0x000001, 0x00000b};
        constexpr rw_bit_field ODR10{0x40021014, 0x000001, 0x00000a};
        constexpr rw_bit_field ODR9{0x40021014, 0x000001, 0x000009};
        constexpr rw_bit_field ODR8{0x40021014, 0x000001, 0x000008};
        constexpr rw_bit_field ODR7{0x40021014, 0x000001, 0x000007};
        constexpr rw_bit_field ODR6{0x40021014, 0x000001, 0x000006};
        constexpr rw_bit_field ODR5{0x40021014, 0x000001, 0x000005};
        constexpr rw_bit_field ODR4{0x40021014, 0x000001, 0x000004};
        constexpr rw_bit_field ODR3{0x40021014, 0x000001, 0x000003};
        constexpr rw_bit_field ODR2{0x40021014, 0x000001, 0x000002};
        constexpr rw_bit_field ODR1{0x40021014, 0x000001, 0x000001};
        constexpr rw_bit_field ODR0{0x40021014, 0x000001, 0x000000};
    }

    namespace BSRR {
        constexpr wo_bit_field BR15{0x40021018, 0x000001, 0x00001f};
        constexpr wo_bit_field BR14{0x40021018, 0x000001, 0x00001e};
        constexpr wo_bit_field BR13{0x40021018, 0x000001, 0x00001d};
        constexpr wo_bit_field BR12{0x40021018, 0x000001, 0x00001c};
        constexpr wo_bit_field BR11{0x40021018, 0x000001, 0x00001b};
        constexpr wo_bit_field BR10{0x40021018, 0x000001, 0x00001a};
        constexpr wo_bit_field BR9{0x40021018, 0x000001, 0x000019};
        constexpr wo_bit_field BR8{0x40021018, 0x000001, 0x000018};
        constexpr wo_bit_field BR7{0x40021018, 0x000001, 0x000017};
        constexpr wo_bit_field BR6{0x40021018, 0x000001, 0x000016};
        constexpr wo_bit_field BR5{0x40021018, 0x000001, 0x000015};
        constexpr wo_bit_field BR4{0x40021018, 0x000001, 0x000014};
        constexpr wo_bit_field BR3{0x40021018, 0x000001, 0x000013};
        constexpr wo_bit_field BR2{0x40021018, 0x000001, 0x000012};
        constexpr wo_bit_field BR1{0x40021018, 0x000001, 0x000011};
        constexpr wo_bit_field BR0{0x40021018, 0x000001, 0x000010};
        constexpr wo_bit_field BS15{0x40021018, 0x000001, 0x00000f};
        constexpr wo_bit_field BS14{0x40021018, 0x000001, 0x00000e};
        constexpr wo_bit_field BS13{0x40021018, 0x000001, 0x00000d};
        constexpr wo_bit_field BS12{0x40021018, 0x000001, 0x00000c};
        constexpr wo_bit_field BS11{0x40021018, 0x000001, 0x00000b};
        constexpr wo_bit_field BS10{0x40021018, 0x000001, 0x00000a};
        constexpr wo_bit_field BS9{0x40021018, 0x000001, 0x000009};
        constexpr wo_bit_field BS8{0x40021018, 0x000001, 0x000008};
        constexpr wo_bit_field BS7{0x40021018, 0x000001, 0x000007};
        constexpr wo_bit_field BS6{0x40021018, 0x000001, 0x000006};
        constexpr wo_bit_field BS5{0x40021018, 0x000001, 0x000005};
        constexpr wo_bit_field BS4{0x40021018, 0x000001, 0x000004};
        constexpr wo_bit_field BS3{0x40021018, 0x000001, 0x000003};
        constexpr wo_bit_field BS2{0x40021018, 0x000001, 0x000002};
        constexpr wo_bit_field BS1{0x40021018, 0x000001, 0x000001};
        constexpr wo_bit_field BS0{0x40021018, 0x000001, 0x000000};
    }

    namespace LCKR {
        constexpr rw_bit_field LCKK{0x4002101c, 0x000001, 0x000010};
        constexpr rw_bit_field LCK15{0x4002101c, 0x000001, 0x00000f};
        constexpr rw_bit_field LCK14{0x4002101c, 0x000001, 0x00000e};
        constexpr rw_bit_field LCK13{0x4002101c, 0x000001, 0x00000d};
        constexpr rw_bit_field LCK12{0x4002101c, 0x000001, 0x00000c};
        constexpr rw_bit_field LCK11{0x4002101c, 0x000001, 0x00000b};
        constexpr rw_bit_field LCK10{0x4002101c, 0x000001, 0x00000a};
        constexpr rw_bit_field LCK9{0x4002101c, 0x000001, 0x000009};
        constexpr rw_bit_field LCK8{0x4002101c, 0x000001, 0x000008};
        constexpr rw_bit_field LCK7{0x4002101c, 0x000001, 0x000007};
        constexpr rw_bit_field LCK6{0x4002101c, 0x000001, 0x000006};
        constexpr rw_bit_field LCK5{0x4002101c, 0x000001, 0x000005};
        constexpr rw_bit_field LCK4{0x4002101c, 0x000001, 0x000004};
        constexpr rw_bit_field LCK3{0x4002101c, 0x000001, 0x000003};
        constexpr rw_bit_field LCK2{0x4002101c, 0x000001, 0x000002};
        constexpr rw_bit_field LCK1{0x4002101c, 0x000001, 0x000001};
        constexpr rw_bit_field LCK0{0x4002101c, 0x000001, 0x000000};
    }

    namespace AFRL {
        constexpr rw_bit_field AFRL7{0x40021020, 0x00000f, 0x00001c};
        constexpr rw_bit_field AFRL6{0x40021020, 0x00000f, 0x000018};
        constexpr rw_bit_field AFRL5{0x40021020, 0x00000f, 0x000014};
        constexpr rw_bit_field AFRL4{0x40021020, 0x00000f, 0x000010};
        constexpr rw_bit_field AFRL3{0x40021020, 0x00000f, 0x00000c};
        constexpr rw_bit_field AFRL2{0x40021020, 0x00000f, 0x000008};
        constexpr rw_bit_field AFRL1{0x40021020, 0x00000f, 0x000004};
        constexpr rw_bit_field AFRL0{0x40021020, 0x00000f, 0x000000};
    }

    namespace AFRH {
        constexpr rw_bit_field AFRH15{0x40021024, 0x00000f, 0x00001c};
        constexpr rw_bit_field AFRH14{0x40021024, 0x00000f, 0x000018};
        constexpr rw_bit_field AFRH13{0x40021024, 0x00000f, 0x000014};
        constexpr rw_bit_field AFRH12{0x40021024, 0x00000f, 0x000010};
        constexpr rw_bit_field AFRH11{0x40021024, 0x00000f, 0x00000c};
        constexpr rw_bit_field AFRH10{0x40021024, 0x00000f, 0x000008};
        constexpr rw_bit_field AFRH9{0x40021024, 0x00000f, 0x000004};
        constexpr rw_bit_field AFRH8{0x40021024, 0x00000f, 0x000000};
    }

}

namespace GPIOD {
    namespace MODER {
        constexpr rw_bit_field MODER15{0x40020c00, 0x000003, 0x00001e};
        constexpr rw_bit_field MODER14{0x40020c00, 0x000003, 0x00001c};
        constexpr rw_bit_field MODER13{0x40020c00, 0x000003, 0x00001a};
        constexpr rw_bit_field MODER12{0x40020c00, 0x000003, 0x000018};
        constexpr rw_bit_field MODER11{0x40020c00, 0x000003, 0x000016};
        constexpr rw_bit_field MODER10{0x40020c00, 0x000003, 0x000014};
        constexpr rw_bit_field MODER9{0x40020c00, 0x000003, 0x000012};
        constexpr rw_bit_field MODER8{0x40020c00, 0x000003, 0x000010};
        constexpr rw_bit_field MODER7{0x40020c00, 0x000003, 0x00000e};
        constexpr rw_bit_field MODER6{0x40020c00, 0x000003, 0x00000c};
        constexpr rw_bit_field MODER5{0x40020c00, 0x000003, 0x00000a};
        constexpr rw_bit_field MODER4{0x40020c00, 0x000003, 0x000008};
        constexpr rw_bit_field MODER3{0x40020c00, 0x000003, 0x000006};
        constexpr rw_bit_field MODER2{0x40020c00, 0x000003, 0x000004};
        constexpr rw_bit_field MODER1{0x40020c00, 0x000003, 0x000002};
        constexpr rw_bit_field MODER0{0x40020c00, 0x000003, 0x000000};
    }

    namespace OTYPER {
        constexpr rw_bit_field OT15{0x40020c04, 0x000001, 0x00000f};
        constexpr rw_bit_field OT14{0x40020c04, 0x000001, 0x00000e};
        constexpr rw_bit_field OT13{0x40020c04, 0x000001, 0x00000d};
        constexpr rw_bit_field OT12{0x40020c04, 0x000001, 0x00000c};
        constexpr rw_bit_field OT11{0x40020c04, 0x000001, 0x00000b};
        constexpr rw_bit_field OT10{0x40020c04, 0x000001, 0x00000a};
        constexpr rw_bit_field OT9{0x40020c04, 0x000001, 0x000009};
        constexpr rw_bit_field OT8{0x40020c04, 0x000001, 0x000008};
        constexpr rw_bit_field OT7{0x40020c04, 0x000001, 0x000007};
        constexpr rw_bit_field OT6{0x40020c04, 0x000001, 0x000006};
        constexpr rw_bit_field OT5{0x40020c04, 0x000001, 0x000005};
        constexpr rw_bit_field OT4{0x40020c04, 0x000001, 0x000004};
        constexpr rw_bit_field OT3{0x40020c04, 0x000001, 0x000003};
        constexpr rw_bit_field OT2{0x40020c04, 0x000001, 0x000002};
        constexpr rw_bit_field OT1{0x40020c04, 0x000001, 0x000001};
        constexpr rw_bit_field OT0{0x40020c04, 0x000001, 0x000000};
    }

    namespace OSPEEDR {
        constexpr rw_bit_field OSPEEDR15{0x40020c08, 0x000003, 0x00001e};
        constexpr rw_bit_field OSPEEDR14{0x40020c08, 0x000003, 0x00001c};
        constexpr rw_bit_field OSPEEDR13{0x40020c08, 0x000003, 0x00001a};
        constexpr rw_bit_field OSPEEDR12{0x40020c08, 0x000003, 0x000018};
        constexpr rw_bit_field OSPEEDR11{0x40020c08, 0x000003, 0x000016};
        constexpr rw_bit_field OSPEEDR10{0x40020c08, 0x000003, 0x000014};
        constexpr rw_bit_field OSPEEDR9{0x40020c08, 0x000003, 0x000012};
        constexpr rw_bit_field OSPEEDR8{0x40020c08, 0x000003, 0x000010};
        constexpr rw_bit_field OSPEEDR7{0x40020c08, 0x000003, 0x00000e};
        constexpr rw_bit_field OSPEEDR6{0x40020c08, 0x000003, 0x00000c};
        constexpr rw_bit_field OSPEEDR5{0x40020c08, 0x000003, 0x00000a};
        constexpr rw_bit_field OSPEEDR4{0x40020c08, 0x000003, 0x000008};
        constexpr rw_bit_field OSPEEDR3{0x40020c08, 0x000003, 0x000006};
        constexpr rw_bit_field OSPEEDR2{0x40020c08, 0x000003, 0x000004};
        constexpr rw_bit_field OSPEEDR1{0x40020c08, 0x000003, 0x000002};
        constexpr rw_bit_field OSPEEDR0{0x40020c08, 0x000003, 0x000000};
    }

    namespace PUPDR {
        constexpr rw_bit_field PUPDR15{0x40020c0c, 0x000003, 0x00001e};
        constexpr rw_bit_field PUPDR14{0x40020c0c, 0x000003, 0x00001c};
        constexpr rw_bit_field PUPDR13{0x40020c0c, 0x000003, 0x00001a};
        constexpr rw_bit_field PUPDR12{0x40020c0c, 0x000003, 0x000018};
        constexpr rw_bit_field PUPDR11{0x40020c0c, 0x000003, 0x000016};
        constexpr rw_bit_field PUPDR10{0x40020c0c, 0x000003, 0x000014};
        constexpr rw_bit_field PUPDR9{0x40020c0c, 0x000003, 0x000012};
        constexpr rw_bit_field PUPDR8{0x40020c0c, 0x000003, 0x000010};
        constexpr rw_bit_field PUPDR7{0x40020c0c, 0x000003, 0x00000e};
        constexpr rw_bit_field PUPDR6{0x40020c0c, 0x000003, 0x00000c};
        constexpr rw_bit_field PUPDR5{0x40020c0c, 0x000003, 0x00000a};
        constexpr rw_bit_field PUPDR4{0x40020c0c, 0x000003, 0x000008};
        constexpr rw_bit_field PUPDR3{0x40020c0c, 0x000003, 0x000006};
        constexpr rw_bit_field PUPDR2{0x40020c0c, 0x000003, 0x000004};
        constexpr rw_bit_field PUPDR1{0x40020c0c, 0x000003, 0x000002};
        constexpr rw_bit_field PUPDR0{0x40020c0c, 0x000003, 0x000000};
    }

    namespace IDR {
        constexpr ro_bit_field IDR15{0x40020c10, 0x000001, 0x00000f};
        constexpr ro_bit_field IDR14{0x40020c10, 0x000001, 0x00000e};
        constexpr ro_bit_field IDR13{0x40020c10, 0x000001, 0x00000d};
        constexpr ro_bit_field IDR12{0x40020c10, 0x000001, 0x00000c};
        constexpr ro_bit_field IDR11{0x40020c10, 0x000001, 0x00000b};
        constexpr ro_bit_field IDR10{0x40020c10, 0x000001, 0x00000a};
        constexpr ro_bit_field IDR9{0x40020c10, 0x000001, 0x000009};
        constexpr ro_bit_field IDR8{0x40020c10, 0x000001, 0x000008};
        constexpr ro_bit_field IDR7{0x40020c10, 0x000001, 0x000007};
        constexpr ro_bit_field IDR6{0x40020c10, 0x000001, 0x000006};
        constexpr ro_bit_field IDR5{0x40020c10, 0x000001, 0x000005};
        constexpr ro_bit_field IDR4{0x40020c10, 0x000001, 0x000004};
        constexpr ro_bit_field IDR3{0x40020c10, 0x000001, 0x000003};
        constexpr ro_bit_field IDR2{0x40020c10, 0x000001, 0x000002};
        constexpr ro_bit_field IDR1{0x40020c10, 0x000001, 0x000001};
        constexpr ro_bit_field IDR0{0x40020c10, 0x000001, 0x000000};
    }

    namespace ODR {
        constexpr rw_bit_field ODR15{0x40020c14, 0x000001, 0x00000f};
        constexpr rw_bit_field ODR14{0x40020c14, 0x000001, 0x00000e};
        constexpr rw_bit_field ODR13{0x40020c14, 0x000001, 0x00000d};
        constexpr rw_bit_field ODR12{0x40020c14, 0x000001, 0x00000c};
        constexpr rw_bit_field ODR11{0x40020c14, 0x000001, 0x00000b};
        constexpr rw_bit_field ODR10{0x40020c14, 0x000001, 0x00000a};
        constexpr rw_bit_field ODR9{0x40020c14, 0x000001, 0x000009};
        constexpr rw_bit_field ODR8{0x40020c14, 0x000001, 0x000008};
        constexpr rw_bit_field ODR7{0x40020c14, 0x000001, 0x000007};
        constexpr rw_bit_field ODR6{0x40020c14, 0x000001, 0x000006};
        constexpr rw_bit_field ODR5{0x40020c14, 0x000001, 0x000005};
        constexpr rw_bit_field ODR4{0x40020c14, 0x000001, 0x000004};
        constexpr rw_bit_field ODR3{0x40020c14, 0x000001, 0x000003};
        constexpr rw_bit_field ODR2{0x40020c14, 0x000001, 0x000002};
        constexpr rw_bit_field ODR1{0x40020c14, 0x000001, 0x000001};
        constexpr rw_bit_field ODR0{0x40020c14, 0x000001, 0x000000};
    }

    namespace BSRR {
        constexpr wo_bit_field BR15{0x40020c18, 0x000001, 0x00001f};
        constexpr wo_bit_field BR14{0x40020c18, 0x000001, 0x00001e};
        constexpr wo_bit_field BR13{0x40020c18, 0x000001, 0x00001d};
        constexpr wo_bit_field BR12{0x40020c18, 0x000001, 0x00001c};
        constexpr wo_bit_field BR11{0x40020c18, 0x000001, 0x00001b};
        constexpr wo_bit_field BR10{0x40020c18, 0x000001, 0x00001a};
        constexpr wo_bit_field BR9{0x40020c18, 0x000001, 0x000019};
        constexpr wo_bit_field BR8{0x40020c18, 0x000001, 0x000018};
        constexpr wo_bit_field BR7{0x40020c18, 0x000001, 0x000017};
        constexpr wo_bit_field BR6{0x40020c18, 0x000001, 0x000016};
        constexpr wo_bit_field BR5{0x40020c18, 0x000001, 0x000015};
        constexpr wo_bit_field BR4{0x40020c18, 0x000001, 0x000014};
        constexpr wo_bit_field BR3{0x40020c18, 0x000001, 0x000013};
        constexpr wo_bit_field BR2{0x40020c18, 0x000001, 0x000012};
        constexpr wo_bit_field BR1{0x40020c18, 0x000001, 0x000011};
        constexpr wo_bit_field BR0{0x40020c18, 0x000001, 0x000010};
        constexpr wo_bit_field BS15{0x40020c18, 0x000001, 0x00000f};
        constexpr wo_bit_field BS14{0x40020c18, 0x000001, 0x00000e};
        constexpr wo_bit_field BS13{0x40020c18, 0x000001, 0x00000d};
        constexpr wo_bit_field BS12{0x40020c18, 0x000001, 0x00000c};
        constexpr wo_bit_field BS11{0x40020c18, 0x000001, 0x00000b};
        constexpr wo_bit_field BS10{0x40020c18, 0x000001, 0x00000a};
        constexpr wo_bit_field BS9{0x40020c18, 0x000001, 0x000009};
        constexpr wo_bit_field BS8{0x40020c18, 0x000001, 0x000008};
        constexpr wo_bit_field BS7{0x40020c18, 0x000001, 0x000007};
        constexpr wo_bit_field BS6{0x40020c18, 0x000001, 0x000006};
        constexpr wo_bit_field BS5{0x40020c18, 0x000001, 0x000005};
        constexpr wo_bit_field BS4{0x40020c18, 0x000001, 0x000004};
        constexpr wo_bit_field BS3{0x40020c18, 0x000001, 0x000003};
        constexpr wo_bit_field BS2{0x40020c18, 0x000001, 0x000002};
        constexpr wo_bit_field BS1{0x40020c18, 0x000001, 0x000001};
        constexpr wo_bit_field BS0{0x40020c18, 0x000001, 0x000000};
    }

    namespace LCKR {
        constexpr rw_bit_field LCKK{0x40020c1c, 0x000001, 0x000010};
        constexpr rw_bit_field LCK15{0x40020c1c, 0x000001, 0x00000f};
        constexpr rw_bit_field LCK14{0x40020c1c, 0x000001, 0x00000e};
        constexpr rw_bit_field LCK13{0x40020c1c, 0x000001, 0x00000d};
        constexpr rw_bit_field LCK12{0x40020c1c, 0x000001, 0x00000c};
        constexpr rw_bit_field LCK11{0x40020c1c, 0x000001, 0x00000b};
        constexpr rw_bit_field LCK10{0x40020c1c, 0x000001, 0x00000a};
        constexpr rw_bit_field LCK9{0x40020c1c, 0x000001, 0x000009};
        constexpr rw_bit_field LCK8{0x40020c1c, 0x000001, 0x000008};
        constexpr rw_bit_field LCK7{0x40020c1c, 0x000001, 0x000007};
        constexpr rw_bit_field LCK6{0x40020c1c, 0x000001, 0x000006};
        constexpr rw_bit_field LCK5{0x40020c1c, 0x000001, 0x000005};
        constexpr rw_bit_field LCK4{0x40020c1c, 0x000001, 0x000004};
        constexpr rw_bit_field LCK3{0x40020c1c, 0x000001, 0x000003};
        constexpr rw_bit_field LCK2{0x40020c1c, 0x000001, 0x000002};
        constexpr rw_bit_field LCK1{0x40020c1c, 0x000001, 0x000001};
        constexpr rw_bit_field LCK0{0x40020c1c, 0x000001, 0x000000};
    }

    namespace AFRL {
        constexpr rw_bit_field AFRL7{0x40020c20, 0x00000f, 0x00001c};
        constexpr rw_bit_field AFRL6{0x40020c20, 0x00000f, 0x000018};
        constexpr rw_bit_field AFRL5{0x40020c20, 0x00000f, 0x000014};
        constexpr rw_bit_field AFRL4{0x40020c20, 0x00000f, 0x000010};
        constexpr rw_bit_field AFRL3{0x40020c20, 0x00000f, 0x00000c};
        constexpr rw_bit_field AFRL2{0x40020c20, 0x00000f, 0x000008};
        constexpr rw_bit_field AFRL1{0x40020c20, 0x00000f, 0x000004};
        constexpr rw_bit_field AFRL0{0x40020c20, 0x00000f, 0x000000};
    }

    namespace AFRH {
        constexpr rw_bit_field AFRH15{0x40020c24, 0x00000f, 0x00001c};
        constexpr rw_bit_field AFRH14{0x40020c24, 0x00000f, 0x000018};
        constexpr rw_bit_field AFRH13{0x40020c24, 0x00000f, 0x000014};
        constexpr rw_bit_field AFRH12{0x40020c24, 0x00000f, 0x000010};
        constexpr rw_bit_field AFRH11{0x40020c24, 0x00000f, 0x00000c};
        constexpr rw_bit_field AFRH10{0x40020c24, 0x00000f, 0x000008};
        constexpr rw_bit_field AFRH9{0x40020c24, 0x00000f, 0x000004};
        constexpr rw_bit_field AFRH8{0x40020c24, 0x00000f, 0x000000};
    }

}

namespace GPIOC {
    namespace MODER {
        constexpr rw_bit_field MODER15{0x40020800, 0x000003, 0x00001e};
        constexpr rw_bit_field MODER14{0x40020800, 0x000003, 0x00001c};
        constexpr rw_bit_field MODER13{0x40020800, 0x000003, 0x00001a};
        constexpr rw_bit_field MODER12{0x40020800, 0x000003, 0x000018};
        constexpr rw_bit_field MODER11{0x40020800, 0x000003, 0x000016};
        constexpr rw_bit_field MODER10{0x40020800, 0x000003, 0x000014};
        constexpr rw_bit_field MODER9{0x40020800, 0x000003, 0x000012};
        constexpr rw_bit_field MODER8{0x40020800, 0x000003, 0x000010};
        constexpr rw_bit_field MODER7{0x40020800, 0x000003, 0x00000e};
        constexpr rw_bit_field MODER6{0x40020800, 0x000003, 0x00000c};
        constexpr rw_bit_field MODER5{0x40020800, 0x000003, 0x00000a};
        constexpr rw_bit_field MODER4{0x40020800, 0x000003, 0x000008};
        constexpr rw_bit_field MODER3{0x40020800, 0x000003, 0x000006};
        constexpr rw_bit_field MODER2{0x40020800, 0x000003, 0x000004};
        constexpr rw_bit_field MODER1{0x40020800, 0x000003, 0x000002};
        constexpr rw_bit_field MODER0{0x40020800, 0x000003, 0x000000};
    }

    namespace OTYPER {
        constexpr rw_bit_field OT15{0x40020804, 0x000001, 0x00000f};
        constexpr rw_bit_field OT14{0x40020804, 0x000001, 0x00000e};
        constexpr rw_bit_field OT13{0x40020804, 0x000001, 0x00000d};
        constexpr rw_bit_field OT12{0x40020804, 0x000001, 0x00000c};
        constexpr rw_bit_field OT11{0x40020804, 0x000001, 0x00000b};
        constexpr rw_bit_field OT10{0x40020804, 0x000001, 0x00000a};
        constexpr rw_bit_field OT9{0x40020804, 0x000001, 0x000009};
        constexpr rw_bit_field OT8{0x40020804, 0x000001, 0x000008};
        constexpr rw_bit_field OT7{0x40020804, 0x000001, 0x000007};
        constexpr rw_bit_field OT6{0x40020804, 0x000001, 0x000006};
        constexpr rw_bit_field OT5{0x40020804, 0x000001, 0x000005};
        constexpr rw_bit_field OT4{0x40020804, 0x000001, 0x000004};
        constexpr rw_bit_field OT3{0x40020804, 0x000001, 0x000003};
        constexpr rw_bit_field OT2{0x40020804, 0x000001, 0x000002};
        constexpr rw_bit_field OT1{0x40020804, 0x000001, 0x000001};
        constexpr rw_bit_field OT0{0x40020804, 0x000001, 0x000000};
    }

    namespace OSPEEDR {
        constexpr rw_bit_field OSPEEDR15{0x40020808, 0x000003, 0x00001e};
        constexpr rw_bit_field OSPEEDR14{0x40020808, 0x000003, 0x00001c};
        constexpr rw_bit_field OSPEEDR13{0x40020808, 0x000003, 0x00001a};
        constexpr rw_bit_field OSPEEDR12{0x40020808, 0x000003, 0x000018};
        constexpr rw_bit_field OSPEEDR11{0x40020808, 0x000003, 0x000016};
        constexpr rw_bit_field OSPEEDR10{0x40020808, 0x000003, 0x000014};
        constexpr rw_bit_field OSPEEDR9{0x40020808, 0x000003, 0x000012};
        constexpr rw_bit_field OSPEEDR8{0x40020808, 0x000003, 0x000010};
        constexpr rw_bit_field OSPEEDR7{0x40020808, 0x000003, 0x00000e};
        constexpr rw_bit_field OSPEEDR6{0x40020808, 0x000003, 0x00000c};
        constexpr rw_bit_field OSPEEDR5{0x40020808, 0x000003, 0x00000a};
        constexpr rw_bit_field OSPEEDR4{0x40020808, 0x000003, 0x000008};
        constexpr rw_bit_field OSPEEDR3{0x40020808, 0x000003, 0x000006};
        constexpr rw_bit_field OSPEEDR2{0x40020808, 0x000003, 0x000004};
        constexpr rw_bit_field OSPEEDR1{0x40020808, 0x000003, 0x000002};
        constexpr rw_bit_field OSPEEDR0{0x40020808, 0x000003, 0x000000};
    }

    namespace PUPDR {
        constexpr rw_bit_field PUPDR15{0x4002080c, 0x000003, 0x00001e};
        constexpr rw_bit_field PUPDR14{0x4002080c, 0x000003, 0x00001c};
        constexpr rw_bit_field PUPDR13{0x4002080c, 0x000003, 0x00001a};
        constexpr rw_bit_field PUPDR12{0x4002080c, 0x000003, 0x000018};
        constexpr rw_bit_field PUPDR11{0x4002080c, 0x000003, 0x000016};
        constexpr rw_bit_field PUPDR10{0x4002080c, 0x000003, 0x000014};
        constexpr rw_bit_field PUPDR9{0x4002080c, 0x000003, 0x000012};
        constexpr rw_bit_field PUPDR8{0x4002080c, 0x000003, 0x000010};
        constexpr rw_bit_field PUPDR7{0x4002080c, 0x000003, 0x00000e};
        constexpr rw_bit_field PUPDR6{0x4002080c, 0x000003, 0x00000c};
        constexpr rw_bit_field PUPDR5{0x4002080c, 0x000003, 0x00000a};
        constexpr rw_bit_field PUPDR4{0x4002080c, 0x000003, 0x000008};
        constexpr rw_bit_field PUPDR3{0x4002080c, 0x000003, 0x000006};
        constexpr rw_bit_field PUPDR2{0x4002080c, 0x000003, 0x000004};
        constexpr rw_bit_field PUPDR1{0x4002080c, 0x000003, 0x000002};
        constexpr rw_bit_field PUPDR0{0x4002080c, 0x000003, 0x000000};
    }

    namespace IDR {
        constexpr ro_bit_field IDR15{0x40020810, 0x000001, 0x00000f};
        constexpr ro_bit_field IDR14{0x40020810, 0x000001, 0x00000e};
        constexpr ro_bit_field IDR13{0x40020810, 0x000001, 0x00000d};
        constexpr ro_bit_field IDR12{0x40020810, 0x000001, 0x00000c};
        constexpr ro_bit_field IDR11{0x40020810, 0x000001, 0x00000b};
        constexpr ro_bit_field IDR10{0x40020810, 0x000001, 0x00000a};
        constexpr ro_bit_field IDR9{0x40020810, 0x000001, 0x000009};
        constexpr ro_bit_field IDR8{0x40020810, 0x000001, 0x000008};
        constexpr ro_bit_field IDR7{0x40020810, 0x000001, 0x000007};
        constexpr ro_bit_field IDR6{0x40020810, 0x000001, 0x000006};
        constexpr ro_bit_field IDR5{0x40020810, 0x000001, 0x000005};
        constexpr ro_bit_field IDR4{0x40020810, 0x000001, 0x000004};
        constexpr ro_bit_field IDR3{0x40020810, 0x000001, 0x000003};
        constexpr ro_bit_field IDR2{0x40020810, 0x000001, 0x000002};
        constexpr ro_bit_field IDR1{0x40020810, 0x000001, 0x000001};
        constexpr ro_bit_field IDR0{0x40020810, 0x000001, 0x000000};
    }

    namespace ODR {
        constexpr rw_bit_field ODR15{0x40020814, 0x000001, 0x00000f};
        constexpr rw_bit_field ODR14{0x40020814, 0x000001, 0x00000e};
        constexpr rw_bit_field ODR13{0x40020814, 0x000001, 0x00000d};
        constexpr rw_bit_field ODR12{0x40020814, 0x000001, 0x00000c};
        constexpr rw_bit_field ODR11{0x40020814, 0x000001, 0x00000b};
        constexpr rw_bit_field ODR10{0x40020814, 0x000001, 0x00000a};
        constexpr rw_bit_field ODR9{0x40020814, 0x000001, 0x000009};
        constexpr rw_bit_field ODR8{0x40020814, 0x000001, 0x000008};
        constexpr rw_bit_field ODR7{0x40020814, 0x000001, 0x000007};
        constexpr rw_bit_field ODR6{0x40020814, 0x000001, 0x000006};
        constexpr rw_bit_field ODR5{0x40020814, 0x000001, 0x000005};
        constexpr rw_bit_field ODR4{0x40020814, 0x000001, 0x000004};
        constexpr rw_bit_field ODR3{0x40020814, 0x000001, 0x000003};
        constexpr rw_bit_field ODR2{0x40020814, 0x000001, 0x000002};
        constexpr rw_bit_field ODR1{0x40020814, 0x000001, 0x000001};
        constexpr rw_bit_field ODR0{0x40020814, 0x000001, 0x000000};
    }

    namespace BSRR {
        constexpr wo_bit_field BR15{0x40020818, 0x000001, 0x00001f};
        constexpr wo_bit_field BR14{0x40020818, 0x000001, 0x00001e};
        constexpr wo_bit_field BR13{0x40020818, 0x000001, 0x00001d};
        constexpr wo_bit_field BR12{0x40020818, 0x000001, 0x00001c};
        constexpr wo_bit_field BR11{0x40020818, 0x000001, 0x00001b};
        constexpr wo_bit_field BR10{0x40020818, 0x000001, 0x00001a};
        constexpr wo_bit_field BR9{0x40020818, 0x000001, 0x000019};
        constexpr wo_bit_field BR8{0x40020818, 0x000001, 0x000018};
        constexpr wo_bit_field BR7{0x40020818, 0x000001, 0x000017};
        constexpr wo_bit_field BR6{0x40020818, 0x000001, 0x000016};
        constexpr wo_bit_field BR5{0x40020818, 0x000001, 0x000015};
        constexpr wo_bit_field BR4{0x40020818, 0x000001, 0x000014};
        constexpr wo_bit_field BR3{0x40020818, 0x000001, 0x000013};
        constexpr wo_bit_field BR2{0x40020818, 0x000001, 0x000012};
        constexpr wo_bit_field BR1{0x40020818, 0x000001, 0x000011};
        constexpr wo_bit_field BR0{0x40020818, 0x000001, 0x000010};
        constexpr wo_bit_field BS15{0x40020818, 0x000001, 0x00000f};
        constexpr wo_bit_field BS14{0x40020818, 0x000001, 0x00000e};
        constexpr wo_bit_field BS13{0x40020818, 0x000001, 0x00000d};
        constexpr wo_bit_field BS12{0x40020818, 0x000001, 0x00000c};
        constexpr wo_bit_field BS11{0x40020818, 0x000001, 0x00000b};
        constexpr wo_bit_field BS10{0x40020818, 0x000001, 0x00000a};
        constexpr wo_bit_field BS9{0x40020818, 0x000001, 0x000009};
        constexpr wo_bit_field BS8{0x40020818, 0x000001, 0x000008};
        constexpr wo_bit_field BS7{0x40020818, 0x000001, 0x000007};
        constexpr wo_bit_field BS6{0x40020818, 0x000001, 0x000006};
        constexpr wo_bit_field BS5{0x40020818, 0x000001, 0x000005};
        constexpr wo_bit_field BS4{0x40020818, 0x000001, 0x000004};
        constexpr wo_bit_field BS3{0x40020818, 0x000001, 0x000003};
        constexpr wo_bit_field BS2{0x40020818, 0x000001, 0x000002};
        constexpr wo_bit_field BS1{0x40020818, 0x000001, 0x000001};
        constexpr wo_bit_field BS0{0x40020818, 0x000001, 0x000000};
    }

    namespace LCKR {
        constexpr rw_bit_field LCKK{0x4002081c, 0x000001, 0x000010};
        constexpr rw_bit_field LCK15{0x4002081c, 0x000001, 0x00000f};
        constexpr rw_bit_field LCK14{0x4002081c, 0x000001, 0x00000e};
        constexpr rw_bit_field LCK13{0x4002081c, 0x000001, 0x00000d};
        constexpr rw_bit_field LCK12{0x4002081c, 0x000001, 0x00000c};
        constexpr rw_bit_field LCK11{0x4002081c, 0x000001, 0x00000b};
        constexpr rw_bit_field LCK10{0x4002081c, 0x000001, 0x00000a};
        constexpr rw_bit_field LCK9{0x4002081c, 0x000001, 0x000009};
        constexpr rw_bit_field LCK8{0x4002081c, 0x000001, 0x000008};
        constexpr rw_bit_field LCK7{0x4002081c, 0x000001, 0x000007};
        constexpr rw_bit_field LCK6{0x4002081c, 0x000001, 0x000006};
        constexpr rw_bit_field LCK5{0x4002081c, 0x000001, 0x000005};
        constexpr rw_bit_field LCK4{0x4002081c, 0x000001, 0x000004};
        constexpr rw_bit_field LCK3{0x4002081c, 0x000001, 0x000003};
        constexpr rw_bit_field LCK2{0x4002081c, 0x000001, 0x000002};
        constexpr rw_bit_field LCK1{0x4002081c, 0x000001, 0x000001};
        constexpr rw_bit_field LCK0{0x4002081c, 0x000001, 0x000000};
    }

    namespace AFRL {
        constexpr rw_bit_field AFRL7{0x40020820, 0x00000f, 0x00001c};
        constexpr rw_bit_field AFRL6{0x40020820, 0x00000f, 0x000018};
        constexpr rw_bit_field AFRL5{0x40020820, 0x00000f, 0x000014};
        constexpr rw_bit_field AFRL4{0x40020820, 0x00000f, 0x000010};
        constexpr rw_bit_field AFRL3{0x40020820, 0x00000f, 0x00000c};
        constexpr rw_bit_field AFRL2{0x40020820, 0x00000f, 0x000008};
        constexpr rw_bit_field AFRL1{0x40020820, 0x00000f, 0x000004};
        constexpr rw_bit_field AFRL0{0x40020820, 0x00000f, 0x000000};
    }

    namespace AFRH {
        constexpr rw_bit_field AFRH15{0x40020824, 0x00000f, 0x00001c};
        constexpr rw_bit_field AFRH14{0x40020824, 0x00000f, 0x000018};
        constexpr rw_bit_field AFRH13{0x40020824, 0x00000f, 0x000014};
        constexpr rw_bit_field AFRH12{0x40020824, 0x00000f, 0x000010};
        constexpr rw_bit_field AFRH11{0x40020824, 0x00000f, 0x00000c};
        constexpr rw_bit_field AFRH10{0x40020824, 0x00000f, 0x000008};
        constexpr rw_bit_field AFRH9{0x40020824, 0x00000f, 0x000004};
        constexpr rw_bit_field AFRH8{0x40020824, 0x00000f, 0x000000};
    }

}

namespace GPIOB {
    namespace MODER {
        constexpr rw_bit_field MODER15{0x40020400, 0x000003, 0x00001e};
        constexpr rw_bit_field MODER14{0x40020400, 0x000003, 0x00001c};
        constexpr rw_bit_field MODER13{0x40020400, 0x000003, 0x00001a};
        constexpr rw_bit_field MODER12{0x40020400, 0x000003, 0x000018};
        constexpr rw_bit_field MODER11{0x40020400, 0x000003, 0x000016};
        constexpr rw_bit_field MODER10{0x40020400, 0x000003, 0x000014};
        constexpr rw_bit_field MODER9{0x40020400, 0x000003, 0x000012};
        constexpr rw_bit_field MODER8{0x40020400, 0x000003, 0x000010};
        constexpr rw_bit_field MODER7{0x40020400, 0x000003, 0x00000e};
        constexpr rw_bit_field MODER6{0x40020400, 0x000003, 0x00000c};
        constexpr rw_bit_field MODER5{0x40020400, 0x000003, 0x00000a};
        constexpr rw_bit_field MODER4{0x40020400, 0x000003, 0x000008};
        constexpr rw_bit_field MODER3{0x40020400, 0x000003, 0x000006};
        constexpr rw_bit_field MODER2{0x40020400, 0x000003, 0x000004};
        constexpr rw_bit_field MODER1{0x40020400, 0x000003, 0x000002};
        constexpr rw_bit_field MODER0{0x40020400, 0x000003, 0x000000};
    }

    namespace OTYPER {
        constexpr rw_bit_field OT15{0x40020404, 0x000001, 0x00000f};
        constexpr rw_bit_field OT14{0x40020404, 0x000001, 0x00000e};
        constexpr rw_bit_field OT13{0x40020404, 0x000001, 0x00000d};
        constexpr rw_bit_field OT12{0x40020404, 0x000001, 0x00000c};
        constexpr rw_bit_field OT11{0x40020404, 0x000001, 0x00000b};
        constexpr rw_bit_field OT10{0x40020404, 0x000001, 0x00000a};
        constexpr rw_bit_field OT9{0x40020404, 0x000001, 0x000009};
        constexpr rw_bit_field OT8{0x40020404, 0x000001, 0x000008};
        constexpr rw_bit_field OT7{0x40020404, 0x000001, 0x000007};
        constexpr rw_bit_field OT6{0x40020404, 0x000001, 0x000006};
        constexpr rw_bit_field OT5{0x40020404, 0x000001, 0x000005};
        constexpr rw_bit_field OT4{0x40020404, 0x000001, 0x000004};
        constexpr rw_bit_field OT3{0x40020404, 0x000001, 0x000003};
        constexpr rw_bit_field OT2{0x40020404, 0x000001, 0x000002};
        constexpr rw_bit_field OT1{0x40020404, 0x000001, 0x000001};
        constexpr rw_bit_field OT0{0x40020404, 0x000001, 0x000000};
    }

    namespace OSPEEDR {
        constexpr rw_bit_field OSPEEDR15{0x40020408, 0x000003, 0x00001e};
        constexpr rw_bit_field OSPEEDR14{0x40020408, 0x000003, 0x00001c};
        constexpr rw_bit_field OSPEEDR13{0x40020408, 0x000003, 0x00001a};
        constexpr rw_bit_field OSPEEDR12{0x40020408, 0x000003, 0x000018};
        constexpr rw_bit_field OSPEEDR11{0x40020408, 0x000003, 0x000016};
        constexpr rw_bit_field OSPEEDR10{0x40020408, 0x000003, 0x000014};
        constexpr rw_bit_field OSPEEDR9{0x40020408, 0x000003, 0x000012};
        constexpr rw_bit_field OSPEEDR8{0x40020408, 0x000003, 0x000010};
        constexpr rw_bit_field OSPEEDR7{0x40020408, 0x000003, 0x00000e};
        constexpr rw_bit_field OSPEEDR6{0x40020408, 0x000003, 0x00000c};
        constexpr rw_bit_field OSPEEDR5{0x40020408, 0x000003, 0x00000a};
        constexpr rw_bit_field OSPEEDR4{0x40020408, 0x000003, 0x000008};
        constexpr rw_bit_field OSPEEDR3{0x40020408, 0x000003, 0x000006};
        constexpr rw_bit_field OSPEEDR2{0x40020408, 0x000003, 0x000004};
        constexpr rw_bit_field OSPEEDR1{0x40020408, 0x000003, 0x000002};
        constexpr rw_bit_field OSPEEDR0{0x40020408, 0x000003, 0x000000};
    }

    namespace PUPDR {
        constexpr rw_bit_field PUPDR15{0x4002040c, 0x000003, 0x00001e};
        constexpr rw_bit_field PUPDR14{0x4002040c, 0x000003, 0x00001c};
        constexpr rw_bit_field PUPDR13{0x4002040c, 0x000003, 0x00001a};
        constexpr rw_bit_field PUPDR12{0x4002040c, 0x000003, 0x000018};
        constexpr rw_bit_field PUPDR11{0x4002040c, 0x000003, 0x000016};
        constexpr rw_bit_field PUPDR10{0x4002040c, 0x000003, 0x000014};
        constexpr rw_bit_field PUPDR9{0x4002040c, 0x000003, 0x000012};
        constexpr rw_bit_field PUPDR8{0x4002040c, 0x000003, 0x000010};
        constexpr rw_bit_field PUPDR7{0x4002040c, 0x000003, 0x00000e};
        constexpr rw_bit_field PUPDR6{0x4002040c, 0x000003, 0x00000c};
        constexpr rw_bit_field PUPDR5{0x4002040c, 0x000003, 0x00000a};
        constexpr rw_bit_field PUPDR4{0x4002040c, 0x000003, 0x000008};
        constexpr rw_bit_field PUPDR3{0x4002040c, 0x000003, 0x000006};
        constexpr rw_bit_field PUPDR2{0x4002040c, 0x000003, 0x000004};
        constexpr rw_bit_field PUPDR1{0x4002040c, 0x000003, 0x000002};
        constexpr rw_bit_field PUPDR0{0x4002040c, 0x000003, 0x000000};
    }

    namespace IDR {
        constexpr ro_bit_field IDR15{0x40020410, 0x000001, 0x00000f};
        constexpr ro_bit_field IDR14{0x40020410, 0x000001, 0x00000e};
        constexpr ro_bit_field IDR13{0x40020410, 0x000001, 0x00000d};
        constexpr ro_bit_field IDR12{0x40020410, 0x000001, 0x00000c};
        constexpr ro_bit_field IDR11{0x40020410, 0x000001, 0x00000b};
        constexpr ro_bit_field IDR10{0x40020410, 0x000001, 0x00000a};
        constexpr ro_bit_field IDR9{0x40020410, 0x000001, 0x000009};
        constexpr ro_bit_field IDR8{0x40020410, 0x000001, 0x000008};
        constexpr ro_bit_field IDR7{0x40020410, 0x000001, 0x000007};
        constexpr ro_bit_field IDR6{0x40020410, 0x000001, 0x000006};
        constexpr ro_bit_field IDR5{0x40020410, 0x000001, 0x000005};
        constexpr ro_bit_field IDR4{0x40020410, 0x000001, 0x000004};
        constexpr ro_bit_field IDR3{0x40020410, 0x000001, 0x000003};
        constexpr ro_bit_field IDR2{0x40020410, 0x000001, 0x000002};
        constexpr ro_bit_field IDR1{0x40020410, 0x000001, 0x000001};
        constexpr ro_bit_field IDR0{0x40020410, 0x000001, 0x000000};
    }

    namespace ODR {
        constexpr rw_bit_field ODR15{0x40020414, 0x000001, 0x00000f};
        constexpr rw_bit_field ODR14{0x40020414, 0x000001, 0x00000e};
        constexpr rw_bit_field ODR13{0x40020414, 0x000001, 0x00000d};
        constexpr rw_bit_field ODR12{0x40020414, 0x000001, 0x00000c};
        constexpr rw_bit_field ODR11{0x40020414, 0x000001, 0x00000b};
        constexpr rw_bit_field ODR10{0x40020414, 0x000001, 0x00000a};
        constexpr rw_bit_field ODR9{0x40020414, 0x000001, 0x000009};
        constexpr rw_bit_field ODR8{0x40020414, 0x000001, 0x000008};
        constexpr rw_bit_field ODR7{0x40020414, 0x000001, 0x000007};
        constexpr rw_bit_field ODR6{0x40020414, 0x000001, 0x000006};
        constexpr rw_bit_field ODR5{0x40020414, 0x000001, 0x000005};
        constexpr rw_bit_field ODR4{0x40020414, 0x000001, 0x000004};
        constexpr rw_bit_field ODR3{0x40020414, 0x000001, 0x000003};
        constexpr rw_bit_field ODR2{0x40020414, 0x000001, 0x000002};
        constexpr rw_bit_field ODR1{0x40020414, 0x000001, 0x000001};
        constexpr rw_bit_field ODR0{0x40020414, 0x000001, 0x000000};
    }

    namespace BSRR {
        constexpr wo_bit_field BR15{0x40020418, 0x000001, 0x00001f};
        constexpr wo_bit_field BR14{0x40020418, 0x000001, 0x00001e};
        constexpr wo_bit_field BR13{0x40020418, 0x000001, 0x00001d};
        constexpr wo_bit_field BR12{0x40020418, 0x000001, 0x00001c};
        constexpr wo_bit_field BR11{0x40020418, 0x000001, 0x00001b};
        constexpr wo_bit_field BR10{0x40020418, 0x000001, 0x00001a};
        constexpr wo_bit_field BR9{0x40020418, 0x000001, 0x000019};
        constexpr wo_bit_field BR8{0x40020418, 0x000001, 0x000018};
        constexpr wo_bit_field BR7{0x40020418, 0x000001, 0x000017};
        constexpr wo_bit_field BR6{0x40020418, 0x000001, 0x000016};
        constexpr wo_bit_field BR5{0x40020418, 0x000001, 0x000015};
        constexpr wo_bit_field BR4{0x40020418, 0x000001, 0x000014};
        constexpr wo_bit_field BR3{0x40020418, 0x000001, 0x000013};
        constexpr wo_bit_field BR2{0x40020418, 0x000001, 0x000012};
        constexpr wo_bit_field BR1{0x40020418, 0x000001, 0x000011};
        constexpr wo_bit_field BR0{0x40020418, 0x000001, 0x000010};
        constexpr wo_bit_field BS15{0x40020418, 0x000001, 0x00000f};
        constexpr wo_bit_field BS14{0x40020418, 0x000001, 0x00000e};
        constexpr wo_bit_field BS13{0x40020418, 0x000001, 0x00000d};
        constexpr wo_bit_field BS12{0x40020418, 0x000001, 0x00000c};
        constexpr wo_bit_field BS11{0x40020418, 0x000001, 0x00000b};
        constexpr wo_bit_field BS10{0x40020418, 0x000001, 0x00000a};
        constexpr wo_bit_field BS9{0x40020418, 0x000001, 0x000009};
        constexpr wo_bit_field BS8{0x40020418, 0x000001, 0x000008};
        constexpr wo_bit_field BS7{0x40020418, 0x000001, 0x000007};
        constexpr wo_bit_field BS6{0x40020418, 0x000001, 0x000006};
        constexpr wo_bit_field BS5{0x40020418, 0x000001, 0x000005};
        constexpr wo_bit_field BS4{0x40020418, 0x000001, 0x000004};
        constexpr wo_bit_field BS3{0x40020418, 0x000001, 0x000003};
        constexpr wo_bit_field BS2{0x40020418, 0x000001, 0x000002};
        constexpr wo_bit_field BS1{0x40020418, 0x000001, 0x000001};
        constexpr wo_bit_field BS0{0x40020418, 0x000001, 0x000000};
    }

    namespace LCKR {
        constexpr rw_bit_field LCKK{0x4002041c, 0x000001, 0x000010};
        constexpr rw_bit_field LCK15{0x4002041c, 0x000001, 0x00000f};
        constexpr rw_bit_field LCK14{0x4002041c, 0x000001, 0x00000e};
        constexpr rw_bit_field LCK13{0x4002041c, 0x000001, 0x00000d};
        constexpr rw_bit_field LCK12{0x4002041c, 0x000001, 0x00000c};
        constexpr rw_bit_field LCK11{0x4002041c, 0x000001, 0x00000b};
        constexpr rw_bit_field LCK10{0x4002041c, 0x000001, 0x00000a};
        constexpr rw_bit_field LCK9{0x4002041c, 0x000001, 0x000009};
        constexpr rw_bit_field LCK8{0x4002041c, 0x000001, 0x000008};
        constexpr rw_bit_field LCK7{0x4002041c, 0x000001, 0x000007};
        constexpr rw_bit_field LCK6{0x4002041c, 0x000001, 0x000006};
        constexpr rw_bit_field LCK5{0x4002041c, 0x000001, 0x000005};
        constexpr rw_bit_field LCK4{0x4002041c, 0x000001, 0x000004};
        constexpr rw_bit_field LCK3{0x4002041c, 0x000001, 0x000003};
        constexpr rw_bit_field LCK2{0x4002041c, 0x000001, 0x000002};
        constexpr rw_bit_field LCK1{0x4002041c, 0x000001, 0x000001};
        constexpr rw_bit_field LCK0{0x4002041c, 0x000001, 0x000000};
    }

    namespace AFRL {
        constexpr rw_bit_field AFRL7{0x40020420, 0x00000f, 0x00001c};
        constexpr rw_bit_field AFRL6{0x40020420, 0x00000f, 0x000018};
        constexpr rw_bit_field AFRL5{0x40020420, 0x00000f, 0x000014};
        constexpr rw_bit_field AFRL4{0x40020420, 0x00000f, 0x000010};
        constexpr rw_bit_field AFRL3{0x40020420, 0x00000f, 0x00000c};
        constexpr rw_bit_field AFRL2{0x40020420, 0x00000f, 0x000008};
        constexpr rw_bit_field AFRL1{0x40020420, 0x00000f, 0x000004};
        constexpr rw_bit_field AFRL0{0x40020420, 0x00000f, 0x000000};
    }

    namespace AFRH {
        constexpr rw_bit_field AFRH15{0x40020424, 0x00000f, 0x00001c};
        constexpr rw_bit_field AFRH14{0x40020424, 0x00000f, 0x000018};
        constexpr rw_bit_field AFRH13{0x40020424, 0x00000f, 0x000014};
        constexpr rw_bit_field AFRH12{0x40020424, 0x00000f, 0x000010};
        constexpr rw_bit_field AFRH11{0x40020424, 0x00000f, 0x00000c};
        constexpr rw_bit_field AFRH10{0x40020424, 0x00000f, 0x000008};
        constexpr rw_bit_field AFRH9{0x40020424, 0x00000f, 0x000004};
        constexpr rw_bit_field AFRH8{0x40020424, 0x00000f, 0x000000};
    }

}

namespace GPIOA {
    namespace MODER {
        constexpr rw_bit_field MODER15{0x40020000, 0x000003, 0x00001e};
        constexpr rw_bit_field MODER14{0x40020000, 0x000003, 0x00001c};
        constexpr rw_bit_field MODER13{0x40020000, 0x000003, 0x00001a};
        constexpr rw_bit_field MODER12{0x40020000, 0x000003, 0x000018};
        constexpr rw_bit_field MODER11{0x40020000, 0x000003, 0x000016};
        constexpr rw_bit_field MODER10{0x40020000, 0x000003, 0x000014};
        constexpr rw_bit_field MODER9{0x40020000, 0x000003, 0x000012};
        constexpr rw_bit_field MODER8{0x40020000, 0x000003, 0x000010};
        constexpr rw_bit_field MODER7{0x40020000, 0x000003, 0x00000e};
        constexpr rw_bit_field MODER6{0x40020000, 0x000003, 0x00000c};
        constexpr rw_bit_field MODER5{0x40020000, 0x000003, 0x00000a};
        constexpr rw_bit_field MODER4{0x40020000, 0x000003, 0x000008};
        constexpr rw_bit_field MODER3{0x40020000, 0x000003, 0x000006};
        constexpr rw_bit_field MODER2{0x40020000, 0x000003, 0x000004};
        constexpr rw_bit_field MODER1{0x40020000, 0x000003, 0x000002};
        constexpr rw_bit_field MODER0{0x40020000, 0x000003, 0x000000};
    }

    namespace OTYPER {
        constexpr rw_bit_field OT15{0x40020004, 0x000001, 0x00000f};
        constexpr rw_bit_field OT14{0x40020004, 0x000001, 0x00000e};
        constexpr rw_bit_field OT13{0x40020004, 0x000001, 0x00000d};
        constexpr rw_bit_field OT12{0x40020004, 0x000001, 0x00000c};
        constexpr rw_bit_field OT11{0x40020004, 0x000001, 0x00000b};
        constexpr rw_bit_field OT10{0x40020004, 0x000001, 0x00000a};
        constexpr rw_bit_field OT9{0x40020004, 0x000001, 0x000009};
        constexpr rw_bit_field OT8{0x40020004, 0x000001, 0x000008};
        constexpr rw_bit_field OT7{0x40020004, 0x000001, 0x000007};
        constexpr rw_bit_field OT6{0x40020004, 0x000001, 0x000006};
        constexpr rw_bit_field OT5{0x40020004, 0x000001, 0x000005};
        constexpr rw_bit_field OT4{0x40020004, 0x000001, 0x000004};
        constexpr rw_bit_field OT3{0x40020004, 0x000001, 0x000003};
        constexpr rw_bit_field OT2{0x40020004, 0x000001, 0x000002};
        constexpr rw_bit_field OT1{0x40020004, 0x000001, 0x000001};
        constexpr rw_bit_field OT0{0x40020004, 0x000001, 0x000000};
    }

    namespace OSPEEDR {
        constexpr rw_bit_field OSPEEDR15{0x40020008, 0x000003, 0x00001e};
        constexpr rw_bit_field OSPEEDR14{0x40020008, 0x000003, 0x00001c};
        constexpr rw_bit_field OSPEEDR13{0x40020008, 0x000003, 0x00001a};
        constexpr rw_bit_field OSPEEDR12{0x40020008, 0x000003, 0x000018};
        constexpr rw_bit_field OSPEEDR11{0x40020008, 0x000003, 0x000016};
        constexpr rw_bit_field OSPEEDR10{0x40020008, 0x000003, 0x000014};
        constexpr rw_bit_field OSPEEDR9{0x40020008, 0x000003, 0x000012};
        constexpr rw_bit_field OSPEEDR8{0x40020008, 0x000003, 0x000010};
        constexpr rw_bit_field OSPEEDR7{0x40020008, 0x000003, 0x00000e};
        constexpr rw_bit_field OSPEEDR6{0x40020008, 0x000003, 0x00000c};
        constexpr rw_bit_field OSPEEDR5{0x40020008, 0x000003, 0x00000a};
        constexpr rw_bit_field OSPEEDR4{0x40020008, 0x000003, 0x000008};
        constexpr rw_bit_field OSPEEDR3{0x40020008, 0x000003, 0x000006};
        constexpr rw_bit_field OSPEEDR2{0x40020008, 0x000003, 0x000004};
        constexpr rw_bit_field OSPEEDR1{0x40020008, 0x000003, 0x000002};
        constexpr rw_bit_field OSPEEDR0{0x40020008, 0x000003, 0x000000};
    }

    namespace PUPDR {
        constexpr rw_bit_field PUPDR15{0x4002000c, 0x000003, 0x00001e};
        constexpr rw_bit_field PUPDR14{0x4002000c, 0x000003, 0x00001c};
        constexpr rw_bit_field PUPDR13{0x4002000c, 0x000003, 0x00001a};
        constexpr rw_bit_field PUPDR12{0x4002000c, 0x000003, 0x000018};
        constexpr rw_bit_field PUPDR11{0x4002000c, 0x000003, 0x000016};
        constexpr rw_bit_field PUPDR10{0x4002000c, 0x000003, 0x000014};
        constexpr rw_bit_field PUPDR9{0x4002000c, 0x000003, 0x000012};
        constexpr rw_bit_field PUPDR8{0x4002000c, 0x000003, 0x000010};
        constexpr rw_bit_field PUPDR7{0x4002000c, 0x000003, 0x00000e};
        constexpr rw_bit_field PUPDR6{0x4002000c, 0x000003, 0x00000c};
        constexpr rw_bit_field PUPDR5{0x4002000c, 0x000003, 0x00000a};
        constexpr rw_bit_field PUPDR4{0x4002000c, 0x000003, 0x000008};
        constexpr rw_bit_field PUPDR3{0x4002000c, 0x000003, 0x000006};
        constexpr rw_bit_field PUPDR2{0x4002000c, 0x000003, 0x000004};
        constexpr rw_bit_field PUPDR1{0x4002000c, 0x000003, 0x000002};
        constexpr rw_bit_field PUPDR0{0x4002000c, 0x000003, 0x000000};
    }

    namespace IDR {
        constexpr ro_bit_field IDR15{0x40020010, 0x000001, 0x00000f};
        constexpr ro_bit_field IDR14{0x40020010, 0x000001, 0x00000e};
        constexpr ro_bit_field IDR13{0x40020010, 0x000001, 0x00000d};
        constexpr ro_bit_field IDR12{0x40020010, 0x000001, 0x00000c};
        constexpr ro_bit_field IDR11{0x40020010, 0x000001, 0x00000b};
        constexpr ro_bit_field IDR10{0x40020010, 0x000001, 0x00000a};
        constexpr ro_bit_field IDR9{0x40020010, 0x000001, 0x000009};
        constexpr ro_bit_field IDR8{0x40020010, 0x000001, 0x000008};
        constexpr ro_bit_field IDR7{0x40020010, 0x000001, 0x000007};
        constexpr ro_bit_field IDR6{0x40020010, 0x000001, 0x000006};
        constexpr ro_bit_field IDR5{0x40020010, 0x000001, 0x000005};
        constexpr ro_bit_field IDR4{0x40020010, 0x000001, 0x000004};
        constexpr ro_bit_field IDR3{0x40020010, 0x000001, 0x000003};
        constexpr ro_bit_field IDR2{0x40020010, 0x000001, 0x000002};
        constexpr ro_bit_field IDR1{0x40020010, 0x000001, 0x000001};
        constexpr ro_bit_field IDR0{0x40020010, 0x000001, 0x000000};
    }

    namespace ODR {
        constexpr rw_bit_field ODR15{0x40020014, 0x000001, 0x00000f};
        constexpr rw_bit_field ODR14{0x40020014, 0x000001, 0x00000e};
        constexpr rw_bit_field ODR13{0x40020014, 0x000001, 0x00000d};
        constexpr rw_bit_field ODR12{0x40020014, 0x000001, 0x00000c};
        constexpr rw_bit_field ODR11{0x40020014, 0x000001, 0x00000b};
        constexpr rw_bit_field ODR10{0x40020014, 0x000001, 0x00000a};
        constexpr rw_bit_field ODR9{0x40020014, 0x000001, 0x000009};
        constexpr rw_bit_field ODR8{0x40020014, 0x000001, 0x000008};
        constexpr rw_bit_field ODR7{0x40020014, 0x000001, 0x000007};
        constexpr rw_bit_field ODR6{0x40020014, 0x000001, 0x000006};
        constexpr rw_bit_field ODR5{0x40020014, 0x000001, 0x000005};
        constexpr rw_bit_field ODR4{0x40020014, 0x000001, 0x000004};
        constexpr rw_bit_field ODR3{0x40020014, 0x000001, 0x000003};
        constexpr rw_bit_field ODR2{0x40020014, 0x000001, 0x000002};
        constexpr rw_bit_field ODR1{0x40020014, 0x000001, 0x000001};
        constexpr rw_bit_field ODR0{0x40020014, 0x000001, 0x000000};
    }

    namespace BSRR {
        constexpr wo_bit_field BR15{0x40020018, 0x000001, 0x00001f};
        constexpr wo_bit_field BR14{0x40020018, 0x000001, 0x00001e};
        constexpr wo_bit_field BR13{0x40020018, 0x000001, 0x00001d};
        constexpr wo_bit_field BR12{0x40020018, 0x000001, 0x00001c};
        constexpr wo_bit_field BR11{0x40020018, 0x000001, 0x00001b};
        constexpr wo_bit_field BR10{0x40020018, 0x000001, 0x00001a};
        constexpr wo_bit_field BR9{0x40020018, 0x000001, 0x000019};
        constexpr wo_bit_field BR8{0x40020018, 0x000001, 0x000018};
        constexpr wo_bit_field BR7{0x40020018, 0x000001, 0x000017};
        constexpr wo_bit_field BR6{0x40020018, 0x000001, 0x000016};
        constexpr wo_bit_field BR5{0x40020018, 0x000001, 0x000015};
        constexpr wo_bit_field BR4{0x40020018, 0x000001, 0x000014};
        constexpr wo_bit_field BR3{0x40020018, 0x000001, 0x000013};
        constexpr wo_bit_field BR2{0x40020018, 0x000001, 0x000012};
        constexpr wo_bit_field BR1{0x40020018, 0x000001, 0x000011};
        constexpr wo_bit_field BR0{0x40020018, 0x000001, 0x000010};
        constexpr wo_bit_field BS15{0x40020018, 0x000001, 0x00000f};
        constexpr wo_bit_field BS14{0x40020018, 0x000001, 0x00000e};
        constexpr wo_bit_field BS13{0x40020018, 0x000001, 0x00000d};
        constexpr wo_bit_field BS12{0x40020018, 0x000001, 0x00000c};
        constexpr wo_bit_field BS11{0x40020018, 0x000001, 0x00000b};
        constexpr wo_bit_field BS10{0x40020018, 0x000001, 0x00000a};
        constexpr wo_bit_field BS9{0x40020018, 0x000001, 0x000009};
        constexpr wo_bit_field BS8{0x40020018, 0x000001, 0x000008};
        constexpr wo_bit_field BS7{0x40020018, 0x000001, 0x000007};
        constexpr wo_bit_field BS6{0x40020018, 0x000001, 0x000006};
        constexpr wo_bit_field BS5{0x40020018, 0x000001, 0x000005};
        constexpr wo_bit_field BS4{0x40020018, 0x000001, 0x000004};
        constexpr wo_bit_field BS3{0x40020018, 0x000001, 0x000003};
        constexpr wo_bit_field BS2{0x40020018, 0x000001, 0x000002};
        constexpr wo_bit_field BS1{0x40020018, 0x000001, 0x000001};
        constexpr wo_bit_field BS0{0x40020018, 0x000001, 0x000000};
    }

    namespace LCKR {
        constexpr rw_bit_field LCKK{0x4002001c, 0x000001, 0x000010};
        constexpr rw_bit_field LCK15{0x4002001c, 0x000001, 0x00000f};
        constexpr rw_bit_field LCK14{0x4002001c, 0x000001, 0x00000e};
        constexpr rw_bit_field LCK13{0x4002001c, 0x000001, 0x00000d};
        constexpr rw_bit_field LCK12{0x4002001c, 0x000001, 0x00000c};
        constexpr rw_bit_field LCK11{0x4002001c, 0x000001, 0x00000b};
        constexpr rw_bit_field LCK10{0x4002001c, 0x000001, 0x00000a};
        constexpr rw_bit_field LCK9{0x4002001c, 0x000001, 0x000009};
        constexpr rw_bit_field LCK8{0x4002001c, 0x000001, 0x000008};
        constexpr rw_bit_field LCK7{0x4002001c, 0x000001, 0x000007};
        constexpr rw_bit_field LCK6{0x4002001c, 0x000001, 0x000006};
        constexpr rw_bit_field LCK5{0x4002001c, 0x000001, 0x000005};
        constexpr rw_bit_field LCK4{0x4002001c, 0x000001, 0x000004};
        constexpr rw_bit_field LCK3{0x4002001c, 0x000001, 0x000003};
        constexpr rw_bit_field LCK2{0x4002001c, 0x000001, 0x000002};
        constexpr rw_bit_field LCK1{0x4002001c, 0x000001, 0x000001};
        constexpr rw_bit_field LCK0{0x4002001c, 0x000001, 0x000000};
    }

    namespace AFRL {
        constexpr rw_bit_field AFRL7{0x40020020, 0x00000f, 0x00001c};
        constexpr rw_bit_field AFRL6{0x40020020, 0x00000f, 0x000018};
        constexpr rw_bit_field AFRL5{0x40020020, 0x00000f, 0x000014};
        constexpr rw_bit_field AFRL4{0x40020020, 0x00000f, 0x000010};
        constexpr rw_bit_field AFRL3{0x40020020, 0x00000f, 0x00000c};
        constexpr rw_bit_field AFRL2{0x40020020, 0x00000f, 0x000008};
        constexpr rw_bit_field AFRL1{0x40020020, 0x00000f, 0x000004};
        constexpr rw_bit_field AFRL0{0x40020020, 0x00000f, 0x000000};
    }

    namespace AFRH {
        constexpr rw_bit_field AFRH15{0x40020024, 0x00000f, 0x00001c};
        constexpr rw_bit_field AFRH14{0x40020024, 0x00000f, 0x000018};
        constexpr rw_bit_field AFRH13{0x40020024, 0x00000f, 0x000014};
        constexpr rw_bit_field AFRH12{0x40020024, 0x00000f, 0x000010};
        constexpr rw_bit_field AFRH11{0x40020024, 0x00000f, 0x00000c};
        constexpr rw_bit_field AFRH10{0x40020024, 0x00000f, 0x000008};
        constexpr rw_bit_field AFRH9{0x40020024, 0x00000f, 0x000004};
        constexpr rw_bit_field AFRH8{0x40020024, 0x00000f, 0x000000};
    }

}

namespace I2C3 {
    namespace CR1 {
        constexpr rw_bit_field SWRST{0x40005c00, 0x000001, 0x00000f};
        constexpr rw_bit_field ALERT{0x40005c00, 0x000001, 0x00000d};
        constexpr rw_bit_field PEC{0x40005c00, 0x000001, 0x00000c};
        constexpr rw_bit_field POS{0x40005c00, 0x000001, 0x00000b};
        constexpr rw_bit_field ACK{0x40005c00, 0x000001, 0x00000a};
        constexpr rw_bit_field STOP{0x40005c00, 0x000001, 0x000009};
        constexpr rw_bit_field START{0x40005c00, 0x000001, 0x000008};
        constexpr rw_bit_field NOSTRETCH{0x40005c00, 0x000001, 0x000007};
        constexpr rw_bit_field ENGC{0x40005c00, 0x000001, 0x000006};
        constexpr rw_bit_field ENPEC{0x40005c00, 0x000001, 0x000005};
        constexpr rw_bit_field ENARP{0x40005c00, 0x000001, 0x000004};
        constexpr rw_bit_field SMBTYPE{0x40005c00, 0x000001, 0x000003};
        constexpr rw_bit_field SMBUS{0x40005c00, 0x000001, 0x000001};
        constexpr rw_bit_field PE{0x40005c00, 0x000001, 0x000000};
    }

    namespace CR2 {
        constexpr rw_bit_field LAST{0x40005c04, 0x000001, 0x00000c};
        constexpr rw_bit_field DMAEN{0x40005c04, 0x000001, 0x00000b};
        constexpr rw_bit_field ITBUFEN{0x40005c04, 0x000001, 0x00000a};
        constexpr rw_bit_field ITEVTEN{0x40005c04, 0x000001, 0x000009};
        constexpr rw_bit_field ITERREN{0x40005c04, 0x000001, 0x000008};
        constexpr rw_bit_field FREQ{0x40005c04, 0x00003f, 0x000000};
    }

    namespace OAR1 {
        constexpr rw_bit_field ADDMODE{0x40005c08, 0x000001, 0x00000f};
        constexpr rw_bit_field ADD10{0x40005c08, 0x000003, 0x000008};
        constexpr rw_bit_field ADD7{0x40005c08, 0x00007f, 0x000001};
        constexpr rw_bit_field ADD0{0x40005c08, 0x000001, 0x000000};
    }

    namespace OAR2 {
        constexpr rw_bit_field ADD2{0x40005c0c, 0x00007f, 0x000001};
        constexpr rw_bit_field ENDUAL{0x40005c0c, 0x000001, 0x000000};
    }

    namespace DR {
        constexpr rw_bit_field DR{0x40005c10, 0x0000ff, 0x000000};
    }

    namespace SR1 {
        constexpr rw_bit_field SMBALERT{0x40005c14, 0x000001, 0x00000f};
        constexpr rw_bit_field TIMEOUT{0x40005c14, 0x000001, 0x00000e};
        constexpr rw_bit_field PECERR{0x40005c14, 0x000001, 0x00000c};
        constexpr rw_bit_field OVR{0x40005c14, 0x000001, 0x00000b};
        constexpr rw_bit_field AF{0x40005c14, 0x000001, 0x00000a};
        constexpr rw_bit_field ARLO{0x40005c14, 0x000001, 0x000009};
        constexpr rw_bit_field BERR{0x40005c14, 0x000001, 0x000008};
        constexpr ro_bit_field TxE{0x40005c14, 0x000001, 0x000007};
        constexpr ro_bit_field RxNE{0x40005c14, 0x000001, 0x000006};
        constexpr ro_bit_field STOPF{0x40005c14, 0x000001, 0x000004};
        constexpr ro_bit_field ADD10{0x40005c14, 0x000001, 0x000003};
        constexpr ro_bit_field BTF{0x40005c14, 0x000001, 0x000002};
        constexpr ro_bit_field ADDR{0x40005c14, 0x000001, 0x000001};
        constexpr ro_bit_field SB{0x40005c14, 0x000001, 0x000000};
    }

    namespace SR2 {
        constexpr ro_bit_field PEC{0x40005c18, 0x0000ff, 0x000008};
        constexpr ro_bit_field DUALF{0x40005c18, 0x000001, 0x000007};
        constexpr ro_bit_field SMBHOST{0x40005c18, 0x000001, 0x000006};
        constexpr ro_bit_field SMBDEFAULT{0x40005c18, 0x000001, 0x000005};
        constexpr ro_bit_field GENCALL{0x40005c18, 0x000001, 0x000004};
        constexpr ro_bit_field TRA{0x40005c18, 0x000001, 0x000002};
        constexpr ro_bit_field BUSY{0x40005c18, 0x000001, 0x000001};
        constexpr ro_bit_field MSL{0x40005c18, 0x000001, 0x000000};
    }

    namespace CCR {
        constexpr rw_bit_field F_S{0x40005c1c, 0x000001, 0x00000f};
        constexpr rw_bit_field DUTY{0x40005c1c, 0x000001, 0x00000e};
        constexpr rw_bit_field CCR{0x40005c1c, 0x000fff, 0x000000};
    }

    namespace TRISE {
        constexpr rw_bit_field TRISE{0x40005c20, 0x00003f, 0x000000};
    }

}

namespace I2C2 {
    namespace CR1 {
        constexpr rw_bit_field SWRST{0x40005800, 0x000001, 0x00000f};
        constexpr rw_bit_field ALERT{0x40005800, 0x000001, 0x00000d};
        constexpr rw_bit_field PEC{0x40005800, 0x000001, 0x00000c};
        constexpr rw_bit_field POS{0x40005800, 0x000001, 0x00000b};
        constexpr rw_bit_field ACK{0x40005800, 0x000001, 0x00000a};
        constexpr rw_bit_field STOP{0x40005800, 0x000001, 0x000009};
        constexpr rw_bit_field START{0x40005800, 0x000001, 0x000008};
        constexpr rw_bit_field NOSTRETCH{0x40005800, 0x000001, 0x000007};
        constexpr rw_bit_field ENGC{0x40005800, 0x000001, 0x000006};
        constexpr rw_bit_field ENPEC{0x40005800, 0x000001, 0x000005};
        constexpr rw_bit_field ENARP{0x40005800, 0x000001, 0x000004};
        constexpr rw_bit_field SMBTYPE{0x40005800, 0x000001, 0x000003};
        constexpr rw_bit_field SMBUS{0x40005800, 0x000001, 0x000001};
        constexpr rw_bit_field PE{0x40005800, 0x000001, 0x000000};
    }

    namespace CR2 {
        constexpr rw_bit_field LAST{0x40005804, 0x000001, 0x00000c};
        constexpr rw_bit_field DMAEN{0x40005804, 0x000001, 0x00000b};
        constexpr rw_bit_field ITBUFEN{0x40005804, 0x000001, 0x00000a};
        constexpr rw_bit_field ITEVTEN{0x40005804, 0x000001, 0x000009};
        constexpr rw_bit_field ITERREN{0x40005804, 0x000001, 0x000008};
        constexpr rw_bit_field FREQ{0x40005804, 0x00003f, 0x000000};
    }

    namespace OAR1 {
        constexpr rw_bit_field ADDMODE{0x40005808, 0x000001, 0x00000f};
        constexpr rw_bit_field ADD10{0x40005808, 0x000003, 0x000008};
        constexpr rw_bit_field ADD7{0x40005808, 0x00007f, 0x000001};
        constexpr rw_bit_field ADD0{0x40005808, 0x000001, 0x000000};
    }

    namespace OAR2 {
        constexpr rw_bit_field ADD2{0x4000580c, 0x00007f, 0x000001};
        constexpr rw_bit_field ENDUAL{0x4000580c, 0x000001, 0x000000};
    }

    namespace DR {
        constexpr rw_bit_field DR{0x40005810, 0x0000ff, 0x000000};
    }

    namespace SR1 {
        constexpr rw_bit_field SMBALERT{0x40005814, 0x000001, 0x00000f};
        constexpr rw_bit_field TIMEOUT{0x40005814, 0x000001, 0x00000e};
        constexpr rw_bit_field PECERR{0x40005814, 0x000001, 0x00000c};
        constexpr rw_bit_field OVR{0x40005814, 0x000001, 0x00000b};
        constexpr rw_bit_field AF{0x40005814, 0x000001, 0x00000a};
        constexpr rw_bit_field ARLO{0x40005814, 0x000001, 0x000009};
        constexpr rw_bit_field BERR{0x40005814, 0x000001, 0x000008};
        constexpr ro_bit_field TxE{0x40005814, 0x000001, 0x000007};
        constexpr ro_bit_field RxNE{0x40005814, 0x000001, 0x000006};
        constexpr ro_bit_field STOPF{0x40005814, 0x000001, 0x000004};
        constexpr ro_bit_field ADD10{0x40005814, 0x000001, 0x000003};
        constexpr ro_bit_field BTF{0x40005814, 0x000001, 0x000002};
        constexpr ro_bit_field ADDR{0x40005814, 0x000001, 0x000001};
        constexpr ro_bit_field SB{0x40005814, 0x000001, 0x000000};
    }

    namespace SR2 {
        constexpr ro_bit_field PEC{0x40005818, 0x0000ff, 0x000008};
        constexpr ro_bit_field DUALF{0x40005818, 0x000001, 0x000007};
        constexpr ro_bit_field SMBHOST{0x40005818, 0x000001, 0x000006};
        constexpr ro_bit_field SMBDEFAULT{0x40005818, 0x000001, 0x000005};
        constexpr ro_bit_field GENCALL{0x40005818, 0x000001, 0x000004};
        constexpr ro_bit_field TRA{0x40005818, 0x000001, 0x000002};
        constexpr ro_bit_field BUSY{0x40005818, 0x000001, 0x000001};
        constexpr ro_bit_field MSL{0x40005818, 0x000001, 0x000000};
    }

    namespace CCR {
        constexpr rw_bit_field F_S{0x4000581c, 0x000001, 0x00000f};
        constexpr rw_bit_field DUTY{0x4000581c, 0x000001, 0x00000e};
        constexpr rw_bit_field CCR{0x4000581c, 0x000fff, 0x000000};
    }

    namespace TRISE {
        constexpr rw_bit_field TRISE{0x40005820, 0x00003f, 0x000000};
    }

}

namespace I2C1 {
    namespace CR1 {
        constexpr rw_bit_field SWRST{0x40005400, 0x000001, 0x00000f};
        constexpr rw_bit_field ALERT{0x40005400, 0x000001, 0x00000d};
        constexpr rw_bit_field PEC{0x40005400, 0x000001, 0x00000c};
        constexpr rw_bit_field POS{0x40005400, 0x000001, 0x00000b};
        constexpr rw_bit_field ACK{0x40005400, 0x000001, 0x00000a};
        constexpr rw_bit_field STOP{0x40005400, 0x000001, 0x000009};
        constexpr rw_bit_field START{0x40005400, 0x000001, 0x000008};
        constexpr rw_bit_field NOSTRETCH{0x40005400, 0x000001, 0x000007};
        constexpr rw_bit_field ENGC{0x40005400, 0x000001, 0x000006};
        constexpr rw_bit_field ENPEC{0x40005400, 0x000001, 0x000005};
        constexpr rw_bit_field ENARP{0x40005400, 0x000001, 0x000004};
        constexpr rw_bit_field SMBTYPE{0x40005400, 0x000001, 0x000003};
        constexpr rw_bit_field SMBUS{0x40005400, 0x000001, 0x000001};
        constexpr rw_bit_field PE{0x40005400, 0x000001, 0x000000};
    }

    namespace CR2 {
        constexpr rw_bit_field LAST{0x40005404, 0x000001, 0x00000c};
        constexpr rw_bit_field DMAEN{0x40005404, 0x000001, 0x00000b};
        constexpr rw_bit_field ITBUFEN{0x40005404, 0x000001, 0x00000a};
        constexpr rw_bit_field ITEVTEN{0x40005404, 0x000001, 0x000009};
        constexpr rw_bit_field ITERREN{0x40005404, 0x000001, 0x000008};
        constexpr rw_bit_field FREQ{0x40005404, 0x00003f, 0x000000};
    }

    namespace OAR1 {
        constexpr rw_bit_field ADDMODE{0x40005408, 0x000001, 0x00000f};
        constexpr rw_bit_field ADD10{0x40005408, 0x000003, 0x000008};
        constexpr rw_bit_field ADD7{0x40005408, 0x00007f, 0x000001};
        constexpr rw_bit_field ADD0{0x40005408, 0x000001, 0x000000};
    }

    namespace OAR2 {
        constexpr rw_bit_field ADD2{0x4000540c, 0x00007f, 0x000001};
        constexpr rw_bit_field ENDUAL{0x4000540c, 0x000001, 0x000000};
    }

    namespace DR {
        constexpr rw_bit_field DR{0x40005410, 0x0000ff, 0x000000};
    }

    namespace SR1 {
        constexpr rw_bit_field SMBALERT{0x40005414, 0x000001, 0x00000f};
        constexpr rw_bit_field TIMEOUT{0x40005414, 0x000001, 0x00000e};
        constexpr rw_bit_field PECERR{0x40005414, 0x000001, 0x00000c};
        constexpr rw_bit_field OVR{0x40005414, 0x000001, 0x00000b};
        constexpr rw_bit_field AF{0x40005414, 0x000001, 0x00000a};
        constexpr rw_bit_field ARLO{0x40005414, 0x000001, 0x000009};
        constexpr rw_bit_field BERR{0x40005414, 0x000001, 0x000008};
        constexpr ro_bit_field TxE{0x40005414, 0x000001, 0x000007};
        constexpr ro_bit_field RxNE{0x40005414, 0x000001, 0x000006};
        constexpr ro_bit_field STOPF{0x40005414, 0x000001, 0x000004};
        constexpr ro_bit_field ADD10{0x40005414, 0x000001, 0x000003};
        constexpr ro_bit_field BTF{0x40005414, 0x000001, 0x000002};
        constexpr ro_bit_field ADDR{0x40005414, 0x000001, 0x000001};
        constexpr ro_bit_field SB{0x40005414, 0x000001, 0x000000};
    }

    namespace SR2 {
        constexpr ro_bit_field PEC{0x40005418, 0x0000ff, 0x000008};
        constexpr ro_bit_field DUALF{0x40005418, 0x000001, 0x000007};
        constexpr ro_bit_field SMBHOST{0x40005418, 0x000001, 0x000006};
        constexpr ro_bit_field SMBDEFAULT{0x40005418, 0x000001, 0x000005};
        constexpr ro_bit_field GENCALL{0x40005418, 0x000001, 0x000004};
        constexpr ro_bit_field TRA{0x40005418, 0x000001, 0x000002};
        constexpr ro_bit_field BUSY{0x40005418, 0x000001, 0x000001};
        constexpr ro_bit_field MSL{0x40005418, 0x000001, 0x000000};
    }

    namespace CCR {
        constexpr rw_bit_field F_S{0x4000541c, 0x000001, 0x00000f};
        constexpr rw_bit_field DUTY{0x4000541c, 0x000001, 0x00000e};
        constexpr rw_bit_field CCR{0x4000541c, 0x000fff, 0x000000};
    }

    namespace TRISE {
        constexpr rw_bit_field TRISE{0x40005420, 0x00003f, 0x000000};
    }

}

namespace I2S2ext {
    namespace CR1 {
        constexpr rw_bit_field BIDIMODE{0x40003400, 0x000001, 0x00000f};
        constexpr rw_bit_field BIDIOE{0x40003400, 0x000001, 0x00000e};
        constexpr rw_bit_field CRCEN{0x40003400, 0x000001, 0x00000d};
        constexpr rw_bit_field CRCNEXT{0x40003400, 0x000001, 0x00000c};
        constexpr rw_bit_field DFF{0x40003400, 0x000001, 0x00000b};
        constexpr rw_bit_field RXONLY{0x40003400, 0x000001, 0x00000a};
        constexpr rw_bit_field SSM{0x40003400, 0x000001, 0x000009};
        constexpr rw_bit_field SSI{0x40003400, 0x000001, 0x000008};
        constexpr rw_bit_field LSBFIRST{0x40003400, 0x000001, 0x000007};
        constexpr rw_bit_field SPE{0x40003400, 0x000001, 0x000006};
        constexpr rw_bit_field BR{0x40003400, 0x000007, 0x000003};
        constexpr rw_bit_field MSTR{0x40003400, 0x000001, 0x000002};
        constexpr rw_bit_field CPOL{0x40003400, 0x000001, 0x000001};
        constexpr rw_bit_field CPHA{0x40003400, 0x000001, 0x000000};
    }

    namespace CR2 {
        constexpr rw_bit_field TXEIE{0x40003404, 0x000001, 0x000007};
        constexpr rw_bit_field RXNEIE{0x40003404, 0x000001, 0x000006};
        constexpr rw_bit_field ERRIE{0x40003404, 0x000001, 0x000005};
        constexpr rw_bit_field FRF{0x40003404, 0x000001, 0x000004};
        constexpr rw_bit_field SSOE{0x40003404, 0x000001, 0x000002};
        constexpr rw_bit_field TXDMAEN{0x40003404, 0x000001, 0x000001};
        constexpr rw_bit_field RXDMAEN{0x40003404, 0x000001, 0x000000};
    }

    namespace SR {
        constexpr ro_bit_field TIFRFE{0x40003408, 0x000001, 0x000008};
        constexpr ro_bit_field BSY{0x40003408, 0x000001, 0x000007};
        constexpr ro_bit_field OVR{0x40003408, 0x000001, 0x000006};
        constexpr ro_bit_field MODF{0x40003408, 0x000001, 0x000005};
        constexpr rw_bit_field CRCERR{0x40003408, 0x000001, 0x000004};
        constexpr ro_bit_field UDR{0x40003408, 0x000001, 0x000003};
        constexpr ro_bit_field CHSIDE{0x40003408, 0x000001, 0x000002};
        constexpr ro_bit_field TXE{0x40003408, 0x000001, 0x000001};
        constexpr ro_bit_field RXNE{0x40003408, 0x000001, 0x000000};
    }

    namespace DR {
        constexpr rw_bit_field DR{0x4000340c, 0x00ffff, 0x000000};
    }

    namespace CRCPR {
        constexpr rw_bit_field CRCPOLY{0x40003410, 0x00ffff, 0x000000};
    }

    namespace RXCRCR {
        constexpr ro_bit_field RxCRC{0x40003414, 0x00ffff, 0x000000};
    }

    namespace TXCRCR {
        constexpr ro_bit_field TxCRC{0x40003418, 0x00ffff, 0x000000};
    }

    namespace I2SCFGR {
        constexpr rw_bit_field I2SMOD{0x4000341c, 0x000001, 0x00000b};
        constexpr rw_bit_field I2SE{0x4000341c, 0x000001, 0x00000a};
        constexpr rw_bit_field I2SCFG{0x4000341c, 0x000003, 0x000008};
        constexpr rw_bit_field PCMSYNC{0x4000341c, 0x000001, 0x000007};
        constexpr rw_bit_field I2SSTD{0x4000341c, 0x000003, 0x000004};
        constexpr rw_bit_field CKPOL{0x4000341c, 0x000001, 0x000003};
        constexpr rw_bit_field DATLEN{0x4000341c, 0x000003, 0x000001};
        constexpr rw_bit_field CHLEN{0x4000341c, 0x000001, 0x000000};
    }

    namespace I2SPR {
        constexpr rw_bit_field MCKOE{0x40003420, 0x000001, 0x000009};
        constexpr rw_bit_field ODD{0x40003420, 0x000001, 0x000008};
        constexpr rw_bit_field I2SDIV{0x40003420, 0x0000ff, 0x000000};
    }

}

namespace I2S3ext {
    namespace CR1 {
        constexpr rw_bit_field BIDIMODE{0x40004000, 0x000001, 0x00000f};
        constexpr rw_bit_field BIDIOE{0x40004000, 0x000001, 0x00000e};
        constexpr rw_bit_field CRCEN{0x40004000, 0x000001, 0x00000d};
        constexpr rw_bit_field CRCNEXT{0x40004000, 0x000001, 0x00000c};
        constexpr rw_bit_field DFF{0x40004000, 0x000001, 0x00000b};
        constexpr rw_bit_field RXONLY{0x40004000, 0x000001, 0x00000a};
        constexpr rw_bit_field SSM{0x40004000, 0x000001, 0x000009};
        constexpr rw_bit_field SSI{0x40004000, 0x000001, 0x000008};
        constexpr rw_bit_field LSBFIRST{0x40004000, 0x000001, 0x000007};
        constexpr rw_bit_field SPE{0x40004000, 0x000001, 0x000006};
        constexpr rw_bit_field BR{0x40004000, 0x000007, 0x000003};
        constexpr rw_bit_field MSTR{0x40004000, 0x000001, 0x000002};
        constexpr rw_bit_field CPOL{0x40004000, 0x000001, 0x000001};
        constexpr rw_bit_field CPHA{0x40004000, 0x000001, 0x000000};
    }

    namespace CR2 {
        constexpr rw_bit_field TXEIE{0x40004004, 0x000001, 0x000007};
        constexpr rw_bit_field RXNEIE{0x40004004, 0x000001, 0x000006};
        constexpr rw_bit_field ERRIE{0x40004004, 0x000001, 0x000005};
        constexpr rw_bit_field FRF{0x40004004, 0x000001, 0x000004};
        constexpr rw_bit_field SSOE{0x40004004, 0x000001, 0x000002};
        constexpr rw_bit_field TXDMAEN{0x40004004, 0x000001, 0x000001};
        constexpr rw_bit_field RXDMAEN{0x40004004, 0x000001, 0x000000};
    }

    namespace SR {
        constexpr ro_bit_field TIFRFE{0x40004008, 0x000001, 0x000008};
        constexpr ro_bit_field BSY{0x40004008, 0x000001, 0x000007};
        constexpr ro_bit_field OVR{0x40004008, 0x000001, 0x000006};
        constexpr ro_bit_field MODF{0x40004008, 0x000001, 0x000005};
        constexpr rw_bit_field CRCERR{0x40004008, 0x000001, 0x000004};
        constexpr ro_bit_field UDR{0x40004008, 0x000001, 0x000003};
        constexpr ro_bit_field CHSIDE{0x40004008, 0x000001, 0x000002};
        constexpr ro_bit_field TXE{0x40004008, 0x000001, 0x000001};
        constexpr ro_bit_field RXNE{0x40004008, 0x000001, 0x000000};
    }

    namespace DR {
        constexpr rw_bit_field DR{0x4000400c, 0x00ffff, 0x000000};
    }

    namespace CRCPR {
        constexpr rw_bit_field CRCPOLY{0x40004010, 0x00ffff, 0x000000};
    }

    namespace RXCRCR {
        constexpr ro_bit_field RxCRC{0x40004014, 0x00ffff, 0x000000};
    }

    namespace TXCRCR {
        constexpr ro_bit_field TxCRC{0x40004018, 0x00ffff, 0x000000};
    }

    namespace I2SCFGR {
        constexpr rw_bit_field I2SMOD{0x4000401c, 0x000001, 0x00000b};
        constexpr rw_bit_field I2SE{0x4000401c, 0x000001, 0x00000a};
        constexpr rw_bit_field I2SCFG{0x4000401c, 0x000003, 0x000008};
        constexpr rw_bit_field PCMSYNC{0x4000401c, 0x000001, 0x000007};
        constexpr rw_bit_field I2SSTD{0x4000401c, 0x000003, 0x000004};
        constexpr rw_bit_field CKPOL{0x4000401c, 0x000001, 0x000003};
        constexpr rw_bit_field DATLEN{0x4000401c, 0x000003, 0x000001};
        constexpr rw_bit_field CHLEN{0x4000401c, 0x000001, 0x000000};
    }

    namespace I2SPR {
        constexpr rw_bit_field MCKOE{0x40004020, 0x000001, 0x000009};
        constexpr rw_bit_field ODD{0x40004020, 0x000001, 0x000008};
        constexpr rw_bit_field I2SDIV{0x40004020, 0x0000ff, 0x000000};
    }

}

namespace SPI1 {
    namespace CR1 {
        constexpr rw_bit_field BIDIMODE{0x40013000, 0x000001, 0x00000f};
        constexpr rw_bit_field BIDIOE{0x40013000, 0x000001, 0x00000e};
        constexpr rw_bit_field CRCEN{0x40013000, 0x000001, 0x00000d};
        constexpr rw_bit_field CRCNEXT{0x40013000, 0x000001, 0x00000c};
        constexpr rw_bit_field DFF{0x40013000, 0x000001, 0x00000b};
        constexpr rw_bit_field RXONLY{0x40013000, 0x000001, 0x00000a};
        constexpr rw_bit_field SSM{0x40013000, 0x000001, 0x000009};
        constexpr rw_bit_field SSI{0x40013000, 0x000001, 0x000008};
        constexpr rw_bit_field LSBFIRST{0x40013000, 0x000001, 0x000007};
        constexpr rw_bit_field SPE{0x40013000, 0x000001, 0x000006};
        constexpr rw_bit_field BR{0x40013000, 0x000007, 0x000003};
        constexpr rw_bit_field MSTR{0x40013000, 0x000001, 0x000002};
        constexpr rw_bit_field CPOL{0x40013000, 0x000001, 0x000001};
        constexpr rw_bit_field CPHA{0x40013000, 0x000001, 0x000000};
    }

    namespace CR2 {
        constexpr rw_bit_field TXEIE{0x40013004, 0x000001, 0x000007};
        constexpr rw_bit_field RXNEIE{0x40013004, 0x000001, 0x000006};
        constexpr rw_bit_field ERRIE{0x40013004, 0x000001, 0x000005};
        constexpr rw_bit_field FRF{0x40013004, 0x000001, 0x000004};
        constexpr rw_bit_field SSOE{0x40013004, 0x000001, 0x000002};
        constexpr rw_bit_field TXDMAEN{0x40013004, 0x000001, 0x000001};
        constexpr rw_bit_field RXDMAEN{0x40013004, 0x000001, 0x000000};
    }

    namespace SR {
        constexpr ro_bit_field TIFRFE{0x40013008, 0x000001, 0x000008};
        constexpr ro_bit_field BSY{0x40013008, 0x000001, 0x000007};
        constexpr ro_bit_field OVR{0x40013008, 0x000001, 0x000006};
        constexpr ro_bit_field MODF{0x40013008, 0x000001, 0x000005};
        constexpr rw_bit_field CRCERR{0x40013008, 0x000001, 0x000004};
        constexpr ro_bit_field UDR{0x40013008, 0x000001, 0x000003};
        constexpr ro_bit_field CHSIDE{0x40013008, 0x000001, 0x000002};
        constexpr ro_bit_field TXE{0x40013008, 0x000001, 0x000001};
        constexpr ro_bit_field RXNE{0x40013008, 0x000001, 0x000000};
    }

    namespace DR {
        constexpr rw_bit_field DR{0x4001300c, 0x00ffff, 0x000000};
    }

    namespace CRCPR {
        constexpr rw_bit_field CRCPOLY{0x40013010, 0x00ffff, 0x000000};
    }

    namespace RXCRCR {
        constexpr ro_bit_field RxCRC{0x40013014, 0x00ffff, 0x000000};
    }

    namespace TXCRCR {
        constexpr ro_bit_field TxCRC{0x40013018, 0x00ffff, 0x000000};
    }

    namespace I2SCFGR {
        constexpr rw_bit_field I2SMOD{0x4001301c, 0x000001, 0x00000b};
        constexpr rw_bit_field I2SE{0x4001301c, 0x000001, 0x00000a};
        constexpr rw_bit_field I2SCFG{0x4001301c, 0x000003, 0x000008};
        constexpr rw_bit_field PCMSYNC{0x4001301c, 0x000001, 0x000007};
        constexpr rw_bit_field I2SSTD{0x4001301c, 0x000003, 0x000004};
        constexpr rw_bit_field CKPOL{0x4001301c, 0x000001, 0x000003};
        constexpr rw_bit_field DATLEN{0x4001301c, 0x000003, 0x000001};
        constexpr rw_bit_field CHLEN{0x4001301c, 0x000001, 0x000000};
    }

    namespace I2SPR {
        constexpr rw_bit_field MCKOE{0x40013020, 0x000001, 0x000009};
        constexpr rw_bit_field ODD{0x40013020, 0x000001, 0x000008};
        constexpr rw_bit_field I2SDIV{0x40013020, 0x0000ff, 0x000000};
    }

}

namespace SPI2 {
    namespace CR1 {
        constexpr rw_bit_field BIDIMODE{0x40003800, 0x000001, 0x00000f};
        constexpr rw_bit_field BIDIOE{0x40003800, 0x000001, 0x00000e};
        constexpr rw_bit_field CRCEN{0x40003800, 0x000001, 0x00000d};
        constexpr rw_bit_field CRCNEXT{0x40003800, 0x000001, 0x00000c};
        constexpr rw_bit_field DFF{0x40003800, 0x000001, 0x00000b};
        constexpr rw_bit_field RXONLY{0x40003800, 0x000001, 0x00000a};
        constexpr rw_bit_field SSM{0x40003800, 0x000001, 0x000009};
        constexpr rw_bit_field SSI{0x40003800, 0x000001, 0x000008};
        constexpr rw_bit_field LSBFIRST{0x40003800, 0x000001, 0x000007};
        constexpr rw_bit_field SPE{0x40003800, 0x000001, 0x000006};
        constexpr rw_bit_field BR{0x40003800, 0x000007, 0x000003};
        constexpr rw_bit_field MSTR{0x40003800, 0x000001, 0x000002};
        constexpr rw_bit_field CPOL{0x40003800, 0x000001, 0x000001};
        constexpr rw_bit_field CPHA{0x40003800, 0x000001, 0x000000};
    }

    namespace CR2 {
        constexpr rw_bit_field TXEIE{0x40003804, 0x000001, 0x000007};
        constexpr rw_bit_field RXNEIE{0x40003804, 0x000001, 0x000006};
        constexpr rw_bit_field ERRIE{0x40003804, 0x000001, 0x000005};
        constexpr rw_bit_field FRF{0x40003804, 0x000001, 0x000004};
        constexpr rw_bit_field SSOE{0x40003804, 0x000001, 0x000002};
        constexpr rw_bit_field TXDMAEN{0x40003804, 0x000001, 0x000001};
        constexpr rw_bit_field RXDMAEN{0x40003804, 0x000001, 0x000000};
    }

    namespace SR {
        constexpr ro_bit_field TIFRFE{0x40003808, 0x000001, 0x000008};
        constexpr ro_bit_field BSY{0x40003808, 0x000001, 0x000007};
        constexpr ro_bit_field OVR{0x40003808, 0x000001, 0x000006};
        constexpr ro_bit_field MODF{0x40003808, 0x000001, 0x000005};
        constexpr rw_bit_field CRCERR{0x40003808, 0x000001, 0x000004};
        constexpr ro_bit_field UDR{0x40003808, 0x000001, 0x000003};
        constexpr ro_bit_field CHSIDE{0x40003808, 0x000001, 0x000002};
        constexpr ro_bit_field TXE{0x40003808, 0x000001, 0x000001};
        constexpr ro_bit_field RXNE{0x40003808, 0x000001, 0x000000};
    }

    namespace DR {
        constexpr rw_bit_field DR{0x4000380c, 0x00ffff, 0x000000};
    }

    namespace CRCPR {
        constexpr rw_bit_field CRCPOLY{0x40003810, 0x00ffff, 0x000000};
    }

    namespace RXCRCR {
        constexpr ro_bit_field RxCRC{0x40003814, 0x00ffff, 0x000000};
    }

    namespace TXCRCR {
        constexpr ro_bit_field TxCRC{0x40003818, 0x00ffff, 0x000000};
    }

    namespace I2SCFGR {
        constexpr rw_bit_field I2SMOD{0x4000381c, 0x000001, 0x00000b};
        constexpr rw_bit_field I2SE{0x4000381c, 0x000001, 0x00000a};
        constexpr rw_bit_field I2SCFG{0x4000381c, 0x000003, 0x000008};
        constexpr rw_bit_field PCMSYNC{0x4000381c, 0x000001, 0x000007};
        constexpr rw_bit_field I2SSTD{0x4000381c, 0x000003, 0x000004};
        constexpr rw_bit_field CKPOL{0x4000381c, 0x000001, 0x000003};
        constexpr rw_bit_field DATLEN{0x4000381c, 0x000003, 0x000001};
        constexpr rw_bit_field CHLEN{0x4000381c, 0x000001, 0x000000};
    }

    namespace I2SPR {
        constexpr rw_bit_field MCKOE{0x40003820, 0x000001, 0x000009};
        constexpr rw_bit_field ODD{0x40003820, 0x000001, 0x000008};
        constexpr rw_bit_field I2SDIV{0x40003820, 0x0000ff, 0x000000};
    }

}

namespace SPI3 {
    namespace CR1 {
        constexpr rw_bit_field BIDIMODE{0x40003c00, 0x000001, 0x00000f};
        constexpr rw_bit_field BIDIOE{0x40003c00, 0x000001, 0x00000e};
        constexpr rw_bit_field CRCEN{0x40003c00, 0x000001, 0x00000d};
        constexpr rw_bit_field CRCNEXT{0x40003c00, 0x000001, 0x00000c};
        constexpr rw_bit_field DFF{0x40003c00, 0x000001, 0x00000b};
        constexpr rw_bit_field RXONLY{0x40003c00, 0x000001, 0x00000a};
        constexpr rw_bit_field SSM{0x40003c00, 0x000001, 0x000009};
        constexpr rw_bit_field SSI{0x40003c00, 0x000001, 0x000008};
        constexpr rw_bit_field LSBFIRST{0x40003c00, 0x000001, 0x000007};
        constexpr rw_bit_field SPE{0x40003c00, 0x000001, 0x000006};
        constexpr rw_bit_field BR{0x40003c00, 0x000007, 0x000003};
        constexpr rw_bit_field MSTR{0x40003c00, 0x000001, 0x000002};
        constexpr rw_bit_field CPOL{0x40003c00, 0x000001, 0x000001};
        constexpr rw_bit_field CPHA{0x40003c00, 0x000001, 0x000000};
    }

    namespace CR2 {
        constexpr rw_bit_field TXEIE{0x40003c04, 0x000001, 0x000007};
        constexpr rw_bit_field RXNEIE{0x40003c04, 0x000001, 0x000006};
        constexpr rw_bit_field ERRIE{0x40003c04, 0x000001, 0x000005};
        constexpr rw_bit_field FRF{0x40003c04, 0x000001, 0x000004};
        constexpr rw_bit_field SSOE{0x40003c04, 0x000001, 0x000002};
        constexpr rw_bit_field TXDMAEN{0x40003c04, 0x000001, 0x000001};
        constexpr rw_bit_field RXDMAEN{0x40003c04, 0x000001, 0x000000};
    }

    namespace SR {
        constexpr ro_bit_field TIFRFE{0x40003c08, 0x000001, 0x000008};
        constexpr ro_bit_field BSY{0x40003c08, 0x000001, 0x000007};
        constexpr ro_bit_field OVR{0x40003c08, 0x000001, 0x000006};
        constexpr ro_bit_field MODF{0x40003c08, 0x000001, 0x000005};
        constexpr rw_bit_field CRCERR{0x40003c08, 0x000001, 0x000004};
        constexpr ro_bit_field UDR{0x40003c08, 0x000001, 0x000003};
        constexpr ro_bit_field CHSIDE{0x40003c08, 0x000001, 0x000002};
        constexpr ro_bit_field TXE{0x40003c08, 0x000001, 0x000001};
        constexpr ro_bit_field RXNE{0x40003c08, 0x000001, 0x000000};
    }

    namespace DR {
        constexpr rw_bit_field DR{0x40003c0c, 0x00ffff, 0x000000};
    }

    namespace CRCPR {
        constexpr rw_bit_field CRCPOLY{0x40003c10, 0x00ffff, 0x000000};
    }

    namespace RXCRCR {
        constexpr ro_bit_field RxCRC{0x40003c14, 0x00ffff, 0x000000};
    }

    namespace TXCRCR {
        constexpr ro_bit_field TxCRC{0x40003c18, 0x00ffff, 0x000000};
    }

    namespace I2SCFGR {
        constexpr rw_bit_field I2SMOD{0x40003c1c, 0x000001, 0x00000b};
        constexpr rw_bit_field I2SE{0x40003c1c, 0x000001, 0x00000a};
        constexpr rw_bit_field I2SCFG{0x40003c1c, 0x000003, 0x000008};
        constexpr rw_bit_field PCMSYNC{0x40003c1c, 0x000001, 0x000007};
        constexpr rw_bit_field I2SSTD{0x40003c1c, 0x000003, 0x000004};
        constexpr rw_bit_field CKPOL{0x40003c1c, 0x000001, 0x000003};
        constexpr rw_bit_field DATLEN{0x40003c1c, 0x000003, 0x000001};
        constexpr rw_bit_field CHLEN{0x40003c1c, 0x000001, 0x000000};
    }

    namespace I2SPR {
        constexpr rw_bit_field MCKOE{0x40003c20, 0x000001, 0x000009};
        constexpr rw_bit_field ODD{0x40003c20, 0x000001, 0x000008};
        constexpr rw_bit_field I2SDIV{0x40003c20, 0x0000ff, 0x000000};
    }

}

namespace SPI4 {
    namespace CR1 {
        constexpr rw_bit_field BIDIMODE{0x40013400, 0x000001, 0x00000f};
        constexpr rw_bit_field BIDIOE{0x40013400, 0x000001, 0x00000e};
        constexpr rw_bit_field CRCEN{0x40013400, 0x000001, 0x00000d};
        constexpr rw_bit_field CRCNEXT{0x40013400, 0x000001, 0x00000c};
        constexpr rw_bit_field DFF{0x40013400, 0x000001, 0x00000b};
        constexpr rw_bit_field RXONLY{0x40013400, 0x000001, 0x00000a};
        constexpr rw_bit_field SSM{0x40013400, 0x000001, 0x000009};
        constexpr rw_bit_field SSI{0x40013400, 0x000001, 0x000008};
        constexpr rw_bit_field LSBFIRST{0x40013400, 0x000001, 0x000007};
        constexpr rw_bit_field SPE{0x40013400, 0x000001, 0x000006};
        constexpr rw_bit_field BR{0x40013400, 0x000007, 0x000003};
        constexpr rw_bit_field MSTR{0x40013400, 0x000001, 0x000002};
        constexpr rw_bit_field CPOL{0x40013400, 0x000001, 0x000001};
        constexpr rw_bit_field CPHA{0x40013400, 0x000001, 0x000000};
    }

    namespace CR2 {
        constexpr rw_bit_field TXEIE{0x40013404, 0x000001, 0x000007};
        constexpr rw_bit_field RXNEIE{0x40013404, 0x000001, 0x000006};
        constexpr rw_bit_field ERRIE{0x40013404, 0x000001, 0x000005};
        constexpr rw_bit_field FRF{0x40013404, 0x000001, 0x000004};
        constexpr rw_bit_field SSOE{0x40013404, 0x000001, 0x000002};
        constexpr rw_bit_field TXDMAEN{0x40013404, 0x000001, 0x000001};
        constexpr rw_bit_field RXDMAEN{0x40013404, 0x000001, 0x000000};
    }

    namespace SR {
        constexpr ro_bit_field TIFRFE{0x40013408, 0x000001, 0x000008};
        constexpr ro_bit_field BSY{0x40013408, 0x000001, 0x000007};
        constexpr ro_bit_field OVR{0x40013408, 0x000001, 0x000006};
        constexpr ro_bit_field MODF{0x40013408, 0x000001, 0x000005};
        constexpr rw_bit_field CRCERR{0x40013408, 0x000001, 0x000004};
        constexpr ro_bit_field UDR{0x40013408, 0x000001, 0x000003};
        constexpr ro_bit_field CHSIDE{0x40013408, 0x000001, 0x000002};
        constexpr ro_bit_field TXE{0x40013408, 0x000001, 0x000001};
        constexpr ro_bit_field RXNE{0x40013408, 0x000001, 0x000000};
    }

    namespace DR {
        constexpr rw_bit_field DR{0x4001340c, 0x00ffff, 0x000000};
    }

    namespace CRCPR {
        constexpr rw_bit_field CRCPOLY{0x40013410, 0x00ffff, 0x000000};
    }

    namespace RXCRCR {
        constexpr ro_bit_field RxCRC{0x40013414, 0x00ffff, 0x000000};
    }

    namespace TXCRCR {
        constexpr ro_bit_field TxCRC{0x40013418, 0x00ffff, 0x000000};
    }

    namespace I2SCFGR {
        constexpr rw_bit_field I2SMOD{0x4001341c, 0x000001, 0x00000b};
        constexpr rw_bit_field I2SE{0x4001341c, 0x000001, 0x00000a};
        constexpr rw_bit_field I2SCFG{0x4001341c, 0x000003, 0x000008};
        constexpr rw_bit_field PCMSYNC{0x4001341c, 0x000001, 0x000007};
        constexpr rw_bit_field I2SSTD{0x4001341c, 0x000003, 0x000004};
        constexpr rw_bit_field CKPOL{0x4001341c, 0x000001, 0x000003};
        constexpr rw_bit_field DATLEN{0x4001341c, 0x000003, 0x000001};
        constexpr rw_bit_field CHLEN{0x4001341c, 0x000001, 0x000000};
    }

    namespace I2SPR {
        constexpr rw_bit_field MCKOE{0x40013420, 0x000001, 0x000009};
        constexpr rw_bit_field ODD{0x40013420, 0x000001, 0x000008};
        constexpr rw_bit_field I2SDIV{0x40013420, 0x0000ff, 0x000000};
    }

}

namespace SPI5 {
    namespace CR1 {
        constexpr rw_bit_field BIDIMODE{0x40015000, 0x000001, 0x00000f};
        constexpr rw_bit_field BIDIOE{0x40015000, 0x000001, 0x00000e};
        constexpr rw_bit_field CRCEN{0x40015000, 0x000001, 0x00000d};
        constexpr rw_bit_field CRCNEXT{0x40015000, 0x000001, 0x00000c};
        constexpr rw_bit_field DFF{0x40015000, 0x000001, 0x00000b};
        constexpr rw_bit_field RXONLY{0x40015000, 0x000001, 0x00000a};
        constexpr rw_bit_field SSM{0x40015000, 0x000001, 0x000009};
        constexpr rw_bit_field SSI{0x40015000, 0x000001, 0x000008};
        constexpr rw_bit_field LSBFIRST{0x40015000, 0x000001, 0x000007};
        constexpr rw_bit_field SPE{0x40015000, 0x000001, 0x000006};
        constexpr rw_bit_field BR{0x40015000, 0x000007, 0x000003};
        constexpr rw_bit_field MSTR{0x40015000, 0x000001, 0x000002};
        constexpr rw_bit_field CPOL{0x40015000, 0x000001, 0x000001};
        constexpr rw_bit_field CPHA{0x40015000, 0x000001, 0x000000};
    }

    namespace CR2 {
        constexpr rw_bit_field TXEIE{0x40015004, 0x000001, 0x000007};
        constexpr rw_bit_field RXNEIE{0x40015004, 0x000001, 0x000006};
        constexpr rw_bit_field ERRIE{0x40015004, 0x000001, 0x000005};
        constexpr rw_bit_field FRF{0x40015004, 0x000001, 0x000004};
        constexpr rw_bit_field SSOE{0x40015004, 0x000001, 0x000002};
        constexpr rw_bit_field TXDMAEN{0x40015004, 0x000001, 0x000001};
        constexpr rw_bit_field RXDMAEN{0x40015004, 0x000001, 0x000000};
    }

    namespace SR {
        constexpr ro_bit_field TIFRFE{0x40015008, 0x000001, 0x000008};
        constexpr ro_bit_field BSY{0x40015008, 0x000001, 0x000007};
        constexpr ro_bit_field OVR{0x40015008, 0x000001, 0x000006};
        constexpr ro_bit_field MODF{0x40015008, 0x000001, 0x000005};
        constexpr rw_bit_field CRCERR{0x40015008, 0x000001, 0x000004};
        constexpr ro_bit_field UDR{0x40015008, 0x000001, 0x000003};
        constexpr ro_bit_field CHSIDE{0x40015008, 0x000001, 0x000002};
        constexpr ro_bit_field TXE{0x40015008, 0x000001, 0x000001};
        constexpr ro_bit_field RXNE{0x40015008, 0x000001, 0x000000};
    }

    namespace DR {
        constexpr rw_bit_field DR{0x4001500c, 0x00ffff, 0x000000};
    }

    namespace CRCPR {
        constexpr rw_bit_field CRCPOLY{0x40015010, 0x00ffff, 0x000000};
    }

    namespace RXCRCR {
        constexpr ro_bit_field RxCRC{0x40015014, 0x00ffff, 0x000000};
    }

    namespace TXCRCR {
        constexpr ro_bit_field TxCRC{0x40015018, 0x00ffff, 0x000000};
    }

    namespace I2SCFGR {
        constexpr rw_bit_field I2SMOD{0x4001501c, 0x000001, 0x00000b};
        constexpr rw_bit_field I2SE{0x4001501c, 0x000001, 0x00000a};
        constexpr rw_bit_field I2SCFG{0x4001501c, 0x000003, 0x000008};
        constexpr rw_bit_field PCMSYNC{0x4001501c, 0x000001, 0x000007};
        constexpr rw_bit_field I2SSTD{0x4001501c, 0x000003, 0x000004};
        constexpr rw_bit_field CKPOL{0x4001501c, 0x000001, 0x000003};
        constexpr rw_bit_field DATLEN{0x4001501c, 0x000003, 0x000001};
        constexpr rw_bit_field CHLEN{0x4001501c, 0x000001, 0x000000};
    }

    namespace I2SPR {
        constexpr rw_bit_field MCKOE{0x40015020, 0x000001, 0x000009};
        constexpr rw_bit_field ODD{0x40015020, 0x000001, 0x000008};
        constexpr rw_bit_field I2SDIV{0x40015020, 0x0000ff, 0x000000};
    }

}

namespace NVIC {
    namespace ISER0 {
        constexpr rw_bit_field SETENA{0xe000e100, 0xffffffff, 0x000000};
    }

    namespace ISER1 {
        constexpr rw_bit_field SETENA{0xe000e104, 0xffffffff, 0x000000};
    }

    namespace ISER2 {
        constexpr rw_bit_field SETENA{0xe000e108, 0xffffffff, 0x000000};
    }

    namespace ICER0 {
        constexpr rw_bit_field CLRENA{0xe000e180, 0xffffffff, 0x000000};
    }

    namespace ICER1 {
        constexpr rw_bit_field CLRENA{0xe000e184, 0xffffffff, 0x000000};
    }

    namespace ICER2 {
        constexpr rw_bit_field CLRENA{0xe000e188, 0xffffffff, 0x000000};
    }

    namespace ISPR0 {
        constexpr rw_bit_field SETPEND{0xe000e200, 0xffffffff, 0x000000};
    }

    namespace ISPR1 {
        constexpr rw_bit_field SETPEND{0xe000e204, 0xffffffff, 0x000000};
    }

    namespace ISPR2 {
        constexpr rw_bit_field SETPEND{0xe000e208, 0xffffffff, 0x000000};
    }

    namespace ICPR0 {
        constexpr rw_bit_field CLRPEND{0xe000e280, 0xffffffff, 0x000000};
    }

    namespace ICPR1 {
        constexpr rw_bit_field CLRPEND{0xe000e284, 0xffffffff, 0x000000};
    }

    namespace ICPR2 {
        constexpr rw_bit_field CLRPEND{0xe000e288, 0xffffffff, 0x000000};
    }

    namespace IABR0 {
        constexpr ro_bit_field ACTIVE{0xe000e300, 0xffffffff, 0x000000};
    }

    namespace IABR1 {
        constexpr ro_bit_field ACTIVE{0xe000e304, 0xffffffff, 0x000000};
    }

    namespace IABR2 {
        constexpr ro_bit_field ACTIVE{0xe000e308, 0xffffffff, 0x000000};
    }

    namespace IPR0 {
        constexpr rw_bit_field IPR_N0{0xe000e400, 0x0000ff, 0x000000};
        constexpr rw_bit_field IPR_N1{0xe000e400, 0x0000ff, 0x000008};
        constexpr rw_bit_field IPR_N2{0xe000e400, 0x0000ff, 0x000010};
        constexpr rw_bit_field IPR_N3{0xe000e400, 0x0000ff, 0x000018};
    }

    namespace IPR1 {
        constexpr rw_bit_field IPR_N0{0xe000e404, 0x0000ff, 0x000000};
        constexpr rw_bit_field IPR_N1{0xe000e404, 0x0000ff, 0x000008};
        constexpr rw_bit_field IPR_N2{0xe000e404, 0x0000ff, 0x000010};
        constexpr rw_bit_field IPR_N3{0xe000e404, 0x0000ff, 0x000018};
    }

    namespace IPR2 {
        constexpr rw_bit_field IPR_N0{0xe000e408, 0x0000ff, 0x000000};
        constexpr rw_bit_field IPR_N1{0xe000e408, 0x0000ff, 0x000008};
        constexpr rw_bit_field IPR_N2{0xe000e408, 0x0000ff, 0x000010};
        constexpr rw_bit_field IPR_N3{0xe000e408, 0x0000ff, 0x000018};
    }

    namespace IPR3 {
        constexpr rw_bit_field IPR_N0{0xe000e40c, 0x0000ff, 0x000000};
        constexpr rw_bit_field IPR_N1{0xe000e40c, 0x0000ff, 0x000008};
        constexpr rw_bit_field IPR_N2{0xe000e40c, 0x0000ff, 0x000010};
        constexpr rw_bit_field IPR_N3{0xe000e40c, 0x0000ff, 0x000018};
    }

    namespace IPR4 {
        constexpr rw_bit_field IPR_N0{0xe000e410, 0x0000ff, 0x000000};
        constexpr rw_bit_field IPR_N1{0xe000e410, 0x0000ff, 0x000008};
        constexpr rw_bit_field IPR_N2{0xe000e410, 0x0000ff, 0x000010};
        constexpr rw_bit_field IPR_N3{0xe000e410, 0x0000ff, 0x000018};
    }

    namespace IPR5 {
        constexpr rw_bit_field IPR_N0{0xe000e414, 0x0000ff, 0x000000};
        constexpr rw_bit_field IPR_N1{0xe000e414, 0x0000ff, 0x000008};
        constexpr rw_bit_field IPR_N2{0xe000e414, 0x0000ff, 0x000010};
        constexpr rw_bit_field IPR_N3{0xe000e414, 0x0000ff, 0x000018};
    }

    namespace IPR6 {
        constexpr rw_bit_field IPR_N0{0xe000e418, 0x0000ff, 0x000000};
        constexpr rw_bit_field IPR_N1{0xe000e418, 0x0000ff, 0x000008};
        constexpr rw_bit_field IPR_N2{0xe000e418, 0x0000ff, 0x000010};
        constexpr rw_bit_field IPR_N3{0xe000e418, 0x0000ff, 0x000018};
    }

    namespace IPR7 {
        constexpr rw_bit_field IPR_N0{0xe000e41c, 0x0000ff, 0x000000};
        constexpr rw_bit_field IPR_N1{0xe000e41c, 0x0000ff, 0x000008};
        constexpr rw_bit_field IPR_N2{0xe000e41c, 0x0000ff, 0x000010};
        constexpr rw_bit_field IPR_N3{0xe000e41c, 0x0000ff, 0x000018};
    }

    namespace IPR8 {
        constexpr rw_bit_field IPR_N0{0xe000e420, 0x0000ff, 0x000000};
        constexpr rw_bit_field IPR_N1{0xe000e420, 0x0000ff, 0x000008};
        constexpr rw_bit_field IPR_N2{0xe000e420, 0x0000ff, 0x000010};
        constexpr rw_bit_field IPR_N3{0xe000e420, 0x0000ff, 0x000018};
    }

    namespace IPR9 {
        constexpr rw_bit_field IPR_N0{0xe000e424, 0x0000ff, 0x000000};
        constexpr rw_bit_field IPR_N1{0xe000e424, 0x0000ff, 0x000008};
        constexpr rw_bit_field IPR_N2{0xe000e424, 0x0000ff, 0x000010};
        constexpr rw_bit_field IPR_N3{0xe000e424, 0x0000ff, 0x000018};
    }

    namespace IPR10 {
        constexpr rw_bit_field IPR_N0{0xe000e428, 0x0000ff, 0x000000};
        constexpr rw_bit_field IPR_N1{0xe000e428, 0x0000ff, 0x000008};
        constexpr rw_bit_field IPR_N2{0xe000e428, 0x0000ff, 0x000010};
        constexpr rw_bit_field IPR_N3{0xe000e428, 0x0000ff, 0x000018};
    }

    namespace IPR11 {
        constexpr rw_bit_field IPR_N0{0xe000e42c, 0x0000ff, 0x000000};
        constexpr rw_bit_field IPR_N1{0xe000e42c, 0x0000ff, 0x000008};
        constexpr rw_bit_field IPR_N2{0xe000e42c, 0x0000ff, 0x000010};
        constexpr rw_bit_field IPR_N3{0xe000e42c, 0x0000ff, 0x000018};
    }

    namespace IPR12 {
        constexpr rw_bit_field IPR_N0{0xe000e430, 0x0000ff, 0x000000};
        constexpr rw_bit_field IPR_N1{0xe000e430, 0x0000ff, 0x000008};
        constexpr rw_bit_field IPR_N2{0xe000e430, 0x0000ff, 0x000010};
        constexpr rw_bit_field IPR_N3{0xe000e430, 0x0000ff, 0x000018};
    }

    namespace IPR13 {
        constexpr rw_bit_field IPR_N0{0xe000e434, 0x0000ff, 0x000000};
        constexpr rw_bit_field IPR_N1{0xe000e434, 0x0000ff, 0x000008};
        constexpr rw_bit_field IPR_N2{0xe000e434, 0x0000ff, 0x000010};
        constexpr rw_bit_field IPR_N3{0xe000e434, 0x0000ff, 0x000018};
    }

    namespace IPR14 {
        constexpr rw_bit_field IPR_N0{0xe000e438, 0x0000ff, 0x000000};
        constexpr rw_bit_field IPR_N1{0xe000e438, 0x0000ff, 0x000008};
        constexpr rw_bit_field IPR_N2{0xe000e438, 0x0000ff, 0x000010};
        constexpr rw_bit_field IPR_N3{0xe000e438, 0x0000ff, 0x000018};
    }

    namespace IPR15 {
        constexpr rw_bit_field IPR_N0{0xe000e43c, 0x0000ff, 0x000000};
        constexpr rw_bit_field IPR_N1{0xe000e43c, 0x0000ff, 0x000008};
        constexpr rw_bit_field IPR_N2{0xe000e43c, 0x0000ff, 0x000010};
        constexpr rw_bit_field IPR_N3{0xe000e43c, 0x0000ff, 0x000018};
    }

    namespace IPR16 {
        constexpr rw_bit_field IPR_N0{0xe000e440, 0x0000ff, 0x000000};
        constexpr rw_bit_field IPR_N1{0xe000e440, 0x0000ff, 0x000008};
        constexpr rw_bit_field IPR_N2{0xe000e440, 0x0000ff, 0x000010};
        constexpr rw_bit_field IPR_N3{0xe000e440, 0x0000ff, 0x000018};
    }

    namespace IPR17 {
        constexpr rw_bit_field IPR_N0{0xe000e444, 0x0000ff, 0x000000};
        constexpr rw_bit_field IPR_N1{0xe000e444, 0x0000ff, 0x000008};
        constexpr rw_bit_field IPR_N2{0xe000e444, 0x0000ff, 0x000010};
        constexpr rw_bit_field IPR_N3{0xe000e444, 0x0000ff, 0x000018};
    }

    namespace IPR18 {
        constexpr rw_bit_field IPR_N0{0xe000e448, 0x0000ff, 0x000000};
        constexpr rw_bit_field IPR_N1{0xe000e448, 0x0000ff, 0x000008};
        constexpr rw_bit_field IPR_N2{0xe000e448, 0x0000ff, 0x000010};
        constexpr rw_bit_field IPR_N3{0xe000e448, 0x0000ff, 0x000018};
    }

    namespace IPR19 {
        constexpr rw_bit_field IPR_N0{0xe000e44c, 0x0000ff, 0x000000};
        constexpr rw_bit_field IPR_N1{0xe000e44c, 0x0000ff, 0x000008};
        constexpr rw_bit_field IPR_N2{0xe000e44c, 0x0000ff, 0x000010};
        constexpr rw_bit_field IPR_N3{0xe000e44c, 0x0000ff, 0x000018};
    }

}

namespace FPU {
    namespace FPCCR {
        constexpr rw_bit_field LSPACT{0xe000ef34, 0x000001, 0x000000};
        constexpr rw_bit_field USER{0xe000ef34, 0x000001, 0x000001};
        constexpr rw_bit_field THREAD{0xe000ef34, 0x000001, 0x000003};
        constexpr rw_bit_field HFRDY{0xe000ef34, 0x000001, 0x000004};
        constexpr rw_bit_field MMRDY{0xe000ef34, 0x000001, 0x000005};
        constexpr rw_bit_field BFRDY{0xe000ef34, 0x000001, 0x000006};
        constexpr rw_bit_field MONRDY{0xe000ef34, 0x000001, 0x000008};
        constexpr rw_bit_field LSPEN{0xe000ef34, 0x000001, 0x00001e};
        constexpr rw_bit_field ASPEN{0xe000ef34, 0x000001, 0x00001f};
    }

    namespace FPCAR {
        constexpr rw_bit_field ADDRESS{0xe000ef38, 0x1fffffff, 0x000003};
    }

    namespace FPSCR {
        constexpr rw_bit_field IOC{0xe000ef3c, 0x000001, 0x000000};
        constexpr rw_bit_field DZC{0xe000ef3c, 0x000001, 0x000001};
        constexpr rw_bit_field OFC{0xe000ef3c, 0x000001, 0x000002};
        constexpr rw_bit_field UFC{0xe000ef3c, 0x000001, 0x000003};
        constexpr rw_bit_field IXC{0xe000ef3c, 0x000001, 0x000004};
        constexpr rw_bit_field IDC{0xe000ef3c, 0x000001, 0x000007};
        constexpr rw_bit_field RMode{0xe000ef3c, 0x000003, 0x000016};
        constexpr rw_bit_field FZ{0xe000ef3c, 0x000001, 0x000018};
        constexpr rw_bit_field DN{0xe000ef3c, 0x000001, 0x000019};
        constexpr rw_bit_field AHP{0xe000ef3c, 0x000001, 0x00001a};
        constexpr rw_bit_field V{0xe000ef3c, 0x000001, 0x00001c};
        constexpr rw_bit_field C{0xe000ef3c, 0x000001, 0x00001d};
        constexpr rw_bit_field Z{0xe000ef3c, 0x000001, 0x00001e};
        constexpr rw_bit_field N{0xe000ef3c, 0x000001, 0x00001f};
    }

}

namespace MPU {
    namespace MPU_TYPER {
        constexpr ro_bit_field SEPARATE{0xe000ed90, 0x000001, 0x000000};
        constexpr ro_bit_field DREGION{0xe000ed90, 0x0000ff, 0x000008};
        constexpr ro_bit_field IREGION{0xe000ed90, 0x0000ff, 0x000010};
    }

    namespace MPU_CTRL {
        constexpr ro_bit_field ENABLE{0xe000ed94, 0x000001, 0x000000};
        constexpr ro_bit_field HFNMIENA{0xe000ed94, 0x000001, 0x000001};
        constexpr ro_bit_field PRIVDEFENA{0xe000ed94, 0x000001, 0x000002};
    }

    namespace MPU_RNR {
        constexpr rw_bit_field REGION{0xe000ed98, 0x0000ff, 0x000000};
    }

    namespace MPU_RBAR {
        constexpr rw_bit_field REGION{0xe000ed9c, 0x00000f, 0x000000};
        constexpr rw_bit_field VALID{0xe000ed9c, 0x000001, 0x000004};
        constexpr rw_bit_field ADDR{0xe000ed9c, 0x7ffffff, 0x000005};
    }

    namespace MPU_RASR {
        constexpr rw_bit_field ENABLE{0xe000eda0, 0x000001, 0x000000};
        constexpr rw_bit_field SIZE{0xe000eda0, 0x00001f, 0x000001};
        constexpr rw_bit_field SRD{0xe000eda0, 0x0000ff, 0x000008};
        constexpr rw_bit_field B{0xe000eda0, 0x000001, 0x000010};
        constexpr rw_bit_field C{0xe000eda0, 0x000001, 0x000011};
        constexpr rw_bit_field S{0xe000eda0, 0x000001, 0x000012};
        constexpr rw_bit_field TEX{0xe000eda0, 0x000007, 0x000013};
        constexpr rw_bit_field AP{0xe000eda0, 0x000007, 0x000018};
        constexpr rw_bit_field XN{0xe000eda0, 0x000001, 0x00001c};
    }

}

namespace STK {
    namespace CTRL {
        constexpr rw_bit_field ENABLE{0xe000e010, 0x000001, 0x000000};
        constexpr rw_bit_field TICKINT{0xe000e010, 0x000001, 0x000001};
        constexpr rw_bit_field CLKSOURCE{0xe000e010, 0x000001, 0x000002};
        constexpr rw_bit_field COUNTFLAG{0xe000e010, 0x000001, 0x000010};
    }

    namespace LOAD {
        constexpr rw_bit_field RELOAD{0xe000e014, 0xffffff, 0x000000};
    }

    namespace VAL {
        constexpr rw_bit_field CURRENT{0xe000e018, 0xffffff, 0x000000};
    }

    namespace CALIB {
        constexpr rw_bit_field TENMS{0xe000e01c, 0xffffff, 0x000000};
        constexpr rw_bit_field SKEW{0xe000e01c, 0x000001, 0x00001e};
        constexpr rw_bit_field NOREF{0xe000e01c, 0x000001, 0x00001f};
    }

}

namespace SCB {
    namespace CPUID {
        constexpr ro_bit_field Revision{0xe000ed00, 0x00000f, 0x000000};
        constexpr ro_bit_field PartNo{0xe000ed00, 0x000fff, 0x000004};
        constexpr ro_bit_field Constant{0xe000ed00, 0x00000f, 0x000010};
        constexpr ro_bit_field Variant{0xe000ed00, 0x00000f, 0x000014};
        constexpr ro_bit_field Implementer{0xe000ed00, 0x0000ff, 0x000018};
    }

    namespace ICSR {
        constexpr rw_bit_field VECTACTIVE{0xe000ed04, 0x0001ff, 0x000000};
        constexpr rw_bit_field RETTOBASE{0xe000ed04, 0x000001, 0x00000b};
        constexpr rw_bit_field VECTPENDING{0xe000ed04, 0x00007f, 0x00000c};
        constexpr rw_bit_field ISRPENDING{0xe000ed04, 0x000001, 0x000016};
        constexpr rw_bit_field PENDSTCLR{0xe000ed04, 0x000001, 0x000019};
        constexpr rw_bit_field PENDSTSET{0xe000ed04, 0x000001, 0x00001a};
        constexpr rw_bit_field PENDSVCLR{0xe000ed04, 0x000001, 0x00001b};
        constexpr rw_bit_field PENDSVSET{0xe000ed04, 0x000001, 0x00001c};
        constexpr rw_bit_field NMIPENDSET{0xe000ed04, 0x000001, 0x00001f};
    }

    namespace VTOR {
        constexpr rw_bit_field TBLOFF{0xe000ed08, 0x1fffff, 0x000009};
    }

    namespace AIRCR {
        constexpr rw_bit_field VECTRESET{0xe000ed0c, 0x000001, 0x000000};
        constexpr rw_bit_field VECTCLRACTIVE{0xe000ed0c, 0x000001, 0x000001};
        constexpr rw_bit_field SYSRESETREQ{0xe000ed0c, 0x000001, 0x000002};
        constexpr rw_bit_field PRIGROUP{0xe000ed0c, 0x000007, 0x000008};
        constexpr rw_bit_field ENDIANESS{0xe000ed0c, 0x000001, 0x00000f};
        constexpr rw_bit_field VECTKEYSTAT{0xe000ed0c, 0x00ffff, 0x000010};
    }

    namespace SCR {
        constexpr rw_bit_field SLEEPONEXIT{0xe000ed10, 0x000001, 0x000001};
        constexpr rw_bit_field SLEEPDEEP{0xe000ed10, 0x000001, 0x000002};
        constexpr rw_bit_field SEVEONPEND{0xe000ed10, 0x000001, 0x000004};
    }

    namespace CCR {
        constexpr rw_bit_field NONBASETHRDENA{0xe000ed14, 0x000001, 0x000000};
        constexpr rw_bit_field USERSETMPEND{0xe000ed14, 0x000001, 0x000001};
        constexpr rw_bit_field UNALIGN__TRP{0xe000ed14, 0x000001, 0x000003};
        constexpr rw_bit_field DIV_0_TRP{0xe000ed14, 0x000001, 0x000004};
        constexpr rw_bit_field BFHFNMIGN{0xe000ed14, 0x000001, 0x000008};
        constexpr rw_bit_field STKALIGN{0xe000ed14, 0x000001, 0x000009};
    }

    namespace SHPR1 {
        constexpr rw_bit_field PRI_4{0xe000ed18, 0x0000ff, 0x000000};
        constexpr rw_bit_field PRI_5{0xe000ed18, 0x0000ff, 0x000008};
        constexpr rw_bit_field PRI_6{0xe000ed18, 0x0000ff, 0x000010};
    }

    namespace SHPR2 {
        constexpr rw_bit_field PRI_11{0xe000ed1c, 0x0000ff, 0x000018};
    }

    namespace SHPR3 {
        constexpr rw_bit_field PRI_14{0xe000ed20, 0x0000ff, 0x000010};
        constexpr rw_bit_field PRI_15{0xe000ed20, 0x0000ff, 0x000018};
    }

    namespace SHCRS {
        constexpr rw_bit_field MEMFAULTACT{0xe000ed24, 0x000001, 0x000000};
        constexpr rw_bit_field BUSFAULTACT{0xe000ed24, 0x000001, 0x000001};
        constexpr rw_bit_field USGFAULTACT{0xe000ed24, 0x000001, 0x000003};
        constexpr rw_bit_field SVCALLACT{0xe000ed24, 0x000001, 0x000007};
        constexpr rw_bit_field MONITORACT{0xe000ed24, 0x000001, 0x000008};
        constexpr rw_bit_field PENDSVACT{0xe000ed24, 0x000001, 0x00000a};
        constexpr rw_bit_field SYSTICKACT{0xe000ed24, 0x000001, 0x00000b};
        constexpr rw_bit_field USGFAULTPENDED{0xe000ed24, 0x000001, 0x00000c};
        constexpr rw_bit_field MEMFAULTPENDED{0xe000ed24, 0x000001, 0x00000d};
        constexpr rw_bit_field BUSFAULTPENDED{0xe000ed24, 0x000001, 0x00000e};
        constexpr rw_bit_field SVCALLPENDED{0xe000ed24, 0x000001, 0x00000f};
        constexpr rw_bit_field MEMFAULTENA{0xe000ed24, 0x000001, 0x000010};
        constexpr rw_bit_field BUSFAULTENA{0xe000ed24, 0x000001, 0x000011};
        constexpr rw_bit_field USGFAULTENA{0xe000ed24, 0x000001, 0x000012};
    }

    namespace CFSR_UFSR_BFSR_MMFSR {
        constexpr rw_bit_field IACCVIOL{0xe000ed28, 0x000001, 0x000001};
        constexpr rw_bit_field MUNSTKERR{0xe000ed28, 0x000001, 0x000003};
        constexpr rw_bit_field MSTKERR{0xe000ed28, 0x000001, 0x000004};
        constexpr rw_bit_field MLSPERR{0xe000ed28, 0x000001, 0x000005};
        constexpr rw_bit_field MMARVALID{0xe000ed28, 0x000001, 0x000007};
        constexpr rw_bit_field IBUSERR{0xe000ed28, 0x000001, 0x000008};
        constexpr rw_bit_field PRECISERR{0xe000ed28, 0x000001, 0x000009};
        constexpr rw_bit_field IMPRECISERR{0xe000ed28, 0x000001, 0x00000a};
        constexpr rw_bit_field UNSTKERR{0xe000ed28, 0x000001, 0x00000b};
        constexpr rw_bit_field STKERR{0xe000ed28, 0x000001, 0x00000c};
        constexpr rw_bit_field LSPERR{0xe000ed28, 0x000001, 0x00000d};
        constexpr rw_bit_field BFARVALID{0xe000ed28, 0x000001, 0x00000f};
        constexpr rw_bit_field UNDEFINSTR{0xe000ed28, 0x000001, 0x000010};
        constexpr rw_bit_field INVSTATE{0xe000ed28, 0x000001, 0x000011};
        constexpr rw_bit_field INVPC{0xe000ed28, 0x000001, 0x000012};
        constexpr rw_bit_field NOCP{0xe000ed28, 0x000001, 0x000013};
        constexpr rw_bit_field UNALIGNED{0xe000ed28, 0x000001, 0x000018};
        constexpr rw_bit_field DIVBYZERO{0xe000ed28, 0x000001, 0x000019};
    }

    namespace HFSR {
        constexpr rw_bit_field VECTTBL{0xe000ed2c, 0x000001, 0x000001};
        constexpr rw_bit_field FORCED{0xe000ed2c, 0x000001, 0x00001e};
        constexpr rw_bit_field DEBUG_VT{0xe000ed2c, 0x000001, 0x00001f};
    }

    namespace MMFAR {
        constexpr rw_bit_field MMFAR{0xe000ed34, 0xffffffff, 0x000000};
    }

    namespace BFAR {
        constexpr rw_bit_field BFAR{0xe000ed38, 0xffffffff, 0x000000};
    }

    namespace AFSR {
        constexpr rw_bit_field IMPDEF{0xe000ed3c, 0xffffffff, 0x000000};
    }

}

namespace NVIC_STIR {
    namespace STIR {
        constexpr rw_bit_field INTID{0xe000ef00, 0x0001ff, 0x000000};
    }

}

namespace FPU_CPACR {
    namespace CPACR {
        constexpr rw_bit_field CP{0xe000ed88, 0x00000f, 0x000014};
    }

}

namespace SCB_ACTRL {
    namespace ACTRL {
        constexpr rw_bit_field DISMCYCINT{0xe000e008, 0x000001, 0x000000};
        constexpr rw_bit_field DISDEFWBUF{0xe000e008, 0x000001, 0x000001};
        constexpr rw_bit_field DISFOLD{0xe000e008, 0x000001, 0x000002};
        constexpr rw_bit_field DISFPCA{0xe000e008, 0x000001, 0x000008};
        constexpr rw_bit_field DISOOFP{0xe000e008, 0x000001, 0x000009};
    }

}

#endif