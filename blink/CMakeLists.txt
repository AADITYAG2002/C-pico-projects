cmake_minimum_required(VERSION 3.12)
include(pico_sdk_import.cmake)

set(PICO_BOARD pico_w)

project(blink C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(blink
  blink.c
)

target_link_libraries(blink 
  pico_stdlib
  pico_cyw43_arch_none
)

pico_enable_stdio_usb(blink 1)
pico_enable_stdio_uart(blink 1)

pico_add_extra_outputs(blink)
