cmake_minimum_required(VERSION 3.7)
option(USE_ARM_COMPILER "Compile for stm32" ON)


# specify the cross compiler

if (USE_ARM_COMPILER)
    set(CMAKE_SYSTEM_NAME Generic)
    set(CMAKE_SYSTEM_VERSION 1)
    set(CMAKE_C_COMPILER_WORKS 1)
    set(CMAKE_C_COMPILER arm-none-eabi-gcc)
    set(CMAKE_CXX_COMPILER_WORKS 1)
    set(CMAKE_CXX_COMPILER arm-none-eabi-g++)
    set(AS arm-none-eabi-as)
    set(AR arm-none-eabi-ar)
    set(OBJCOPY arm-none-eabi-objcopy)
    set(OBJDUMP arm-none-eabi-objdump)
    set(SIZE arm-none-eabi-size)

    project(stm32_hal_dev)
    enable_language(ASM)
    set(ELF ${PROJECT_NAME}.elf)
    set(STARTUP_FILE "startup_stm32f411retx.s")

    add_executable(${ELF} ${STARTUP_FILE} src/main.cpp)

    set_target_properties(
            ${ELF}
            PROPERTIES
            LINK_FLAGS
            "-T${PROJECT_SOURCE_DIR}/STM32F411RETX_FLASH.ld\
       -mthumb -mcpu=cortex-m4\
       --specs=nosys.specs -Wl,-Map=${ProjName}.map\
       -Wl,--gc-sections\
       -static --specs=nano.specs\
       -mfpu=fpv4-sp-d16 -mfloat-abi=hard\
       -Wl,--start-group\
       -lc -lm -lstdc++\
       -lsupc++ -Wl,--end-group")

    target_compile_options(${ELF} PUBLIC
            -mcpu=cortex-m4
            -g3
            -O3
            -ffunction-sections
            -fdata-sections
            -fno-exceptions
            -fno-rtti
            -fno-threadsafe-statics
            -fno-use-cxa-atexit
            -Wall
            -std=c++17
            -fstack-usage
            --specs=nano.specs
            -mfpu=fpv4-sp-d16
            -mfloat-abi=hard
            -mthumb)

    add_custom_command(TARGET ${ELF} POST_BUILD
            COMMAND arm-none-eabi-objdump -D "${ELF}" > "${PROJECT_NAME}.lst")
endif ()

include_directories(inc/hydra_hal/core)
include_directories(inc/hydra_hal/device)
include_directories(inc/hydra_hal/drivers)

if (NOT USE_ARM_COMPILER)
    add_subdirectory(tests)
endif ()
