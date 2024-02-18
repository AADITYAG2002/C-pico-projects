cmake_minimum_required(VERSION 3.15)
include(pico_sdk_import.cmake)

set(PICO_BOARD pico_w)

project(lcd_screen_lib C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(${PROJECT_NAME}
    lcd_screen_lib.c
)

target_link_libraries(${PROJECT_NAME}
    pico_stdlib
    hardware_i2c
    LCD
    )
add_subdirectory(LCD)

# target_include_directories(${PROJECT_NAME} PUBLIC 
#                            "${PROJECT_BINARY_DIR}")

pico_enable_stdio_usb(${PROJECT_NAME} 1)
pico_enable_stdio_uart(${PROJECT_NAME} 1)

pico_add_extra_outputs(${PROJECT_NAME})
