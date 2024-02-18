#ifndef LCD_H_
#define LCD_H_

#include "/pico/binary_info.h"

extern const int LCD_CLEARDISPLAY ;
extern const int LCD_RETURNHOME ;
extern const int LCD_ENTRYMODESET ;
extern const int LCD_DISPLAYCONTROL ;
extern const int LCD_CURSORSHIFT ;
extern const int LCD_FUNCTIONSET ;
extern const int LCD_SETCGRAMADDR ;
extern const int LCD_SETDDRAMADDR ;

// flags for display entry mode
extern const int LCD_ENTRYSHIFTINCREMENT ;
extern const int LCD_ENTRYLEFT ;

// flags for display and cursor control
extern const int LCD_BLINKON ;
extern const int LCD_CURSORON ;
extern const int LCD_DISPLAYON ;

// flags for display and cursor shift
extern const int LCD_MOVERIGHT ;
extern const int LCD_DISPLAYMOVE ;

// flags for function set
extern const int LCD_5x10DOTS ;
extern const int LCD_2LINE ;
extern const int LCD_8BITMODE ;

// flag for backlight control
extern const int LCD_BACKLIGHT ;

extern const int LCD_ENABLE_BIT ;

// By default these LCD display drivers are on bus address 0x27
static int addr ;

#define LCD_CHARACTER  1
#define LCD_COMMAND    0

#define MAX_LINES      2
#define MAX_CHARS      16

void i2c_write_byte(uint8_t val);

void lcd_toggle_enable(uint8_t val);

void lcd_send_byte(uint8_t val, int mode);

void lcd_clear(void);

void lcd_set_cursor(int line, int position);

static void inline lcd_char(char val) {
    lcd_send_byte(val, LCD_CHARACTER);
}

void lcd_string(const char *s);

#endif