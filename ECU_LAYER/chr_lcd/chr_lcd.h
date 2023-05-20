/* 
 * File:   chr_lcd.h
 * Author: Mousa
 *
 * Created on April 14, 2023, 2:09 PM
 */

#ifndef CHR_LCD_H
#define	CHR_LCD_H


/* ----------------SECTION: INCLUDES----------------------------- */
#include "../../MCAL_Layer/mcal_std_types.h"

#include "../../MCAL_Layer/GPIO/hal_gpio.h"
/*------------ SECTION: Macros Declarations------------------------ */
#define _LCD_CLEAR                                       0X01
#define _LCD_RETURN_HOME                                 0X02
#define _LCD_ENTRY_MODE                                  0X06
#define _LCD_CURSOR_OFF_DISPLAY_ON                       0X0C
#define _LCD_CURSOR_OFF_DISPLAY_OFF                      0X08
#define _LCD_BLOCK_CURSOR_ON_DISPLAY_ON                  0X0D
#define _LCD_CURSOR_ON_BLINK_ON                          0X0F
#define _LCD_CURSOR_ON_BLINK_OFF                         0X0E
#define _LCD_DISPLAY_SHIFT_RIGHT                         0X1C
#define _LCD_DISPLAY_SHIFT_LEFT                          0X18
#define _LCD_8BIT_MODE_2LINE                             0X38
#define _LCD_4BIT_MODE_2LINE                             0X28
#define _LCD_CGRAM_START                                 0X40
#define _LCD_DDRAM_START                                 0X80

#define ROW1                                                1
#define ROW2                                                2
#define ROW3                                                3
#define ROW4                                                4

#define DDRAM_ROW1                                       0X80
#define DDRAM_ROW2                                       0XC0
#define DDRAM_ROW3                                       0X94
#define DDRAM_ROW4                                       0XD4

#define DOT_MATRIX_8_ROWS                               8

/*--------------- SECTION: Data Type Declarations---------------- */
typedef struct{
    pin_config_t lcd_rs;
    pin_config_t lcd_en;
    pin_config_t lcd_data[4];
}chr_lcd_4bit_t;

typedef struct{
    pin_config_t lcd_rs;
    pin_config_t lcd_en;
    pin_config_t lcd_data[8];
}chr_lcd_8bit_t;

/*-------------SECTION: Macros Function Declarations-------------- */

/*------------- SECTION: Functions Declarations------------------- */
Std_ReturnType lcd_4bit_initialize(const chr_lcd_4bit_t *lcd);
Std_ReturnType lcd_4bit_send_command(const chr_lcd_4bit_t *lcd, uint8 command);
Std_ReturnType lcd_4bit_send_char_data(const chr_lcd_4bit_t *lcd, uint8 data);
Std_ReturnType lcd_4bit_send_char_data_pos(const chr_lcd_4bit_t *lcd, uint8 row, uint8 coloumn, uint8 data);
Std_ReturnType lcd_4bit_send_string(const chr_lcd_4bit_t *lcd, uint8 *str);
Std_ReturnType lcd_4bit_send_string_pos(const chr_lcd_4bit_t *lcd, uint8 row, uint8 coloumn, uint8 *str);
Std_ReturnType lcd_4bit_send_custom_char(const chr_lcd_4bit_t *lcd, uint8 row, uint8 coloumn, const uint8 _chr[], uint8 mem_pos);

Std_ReturnType lcd_8bit_initialize(const chr_lcd_8bit_t *lcd);
Std_ReturnType lcd_8bit_send_command(const chr_lcd_8bit_t *lcd, uint8 command);
Std_ReturnType lcd_8bit_send_char_data(const chr_lcd_8bit_t *lcd, uint8 data);
Std_ReturnType lcd_8bit_send_char_data_pos(const chr_lcd_8bit_t *lcd, uint8 row, uint8 coloumn, uint8 data);
Std_ReturnType lcd_8bit_send_string(const chr_lcd_8bit_t *lcd, uint8 *str);
Std_ReturnType lcd_8bit_send_string_pos(const chr_lcd_8bit_t *lcd, uint8 row, uint8 coloumn, uint8 *str);
Std_ReturnType lcd_8bit_send_custom_char(const chr_lcd_8bit_t *lcd, uint8 row, uint8 coloumn, const uint8 _chr[], uint8 mem_pos);

void convert_byte_to_string(uint8 value, uint8 *str);
void convert_short_to_string(uint16 value, uint8 *str);
void convert_long_to_string(uint32 value, uint8 *str);

#endif	/* CHR_LCD_H */

