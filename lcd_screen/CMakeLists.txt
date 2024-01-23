cmake_minimum_required(VERSION 3.15)
include(pico_sdk_import.cmake)

set(PICO_BOARD pico_w)

project(lcd_screen C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_subdirectory(Lcd)

add_executable(lcd_screen
    lcd_screen.c
)

target_link_libraries(lcd_screen 
    pico_stdlib
    hardware_i2c
    Lcd
    )

target_include_directories(lcd_screen PUBLIC 
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/Lcd")

pico_enable_stdio_usb(lcd_screen 1)
pico_enable_stdio_uart(lcd_screen 1)

pico_add_extra_outputs(lcd_screen)
