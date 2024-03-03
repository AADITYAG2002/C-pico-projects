add_library(LCD
    lcd.c
)

target_link_libraries(LCD
    hardware_i2c
    pico_stdlib
)