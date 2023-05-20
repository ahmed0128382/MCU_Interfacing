/* 
 * File:   chr_lcd.c
 * Author: Mousa
 *
 * Created on April 14, 2023, 2:09 PM
 */



/* ----------------SECTION: INCLUDES----------------------------- */
#include "chr_lcd.h"
/*------------ SECTION: Macros Declarations------------------------ */

/*--------------- SECTION: Data Type Declarations---------------- */

/*-------------SECTION: Macros Function Declarations-------------- */

/*------------- SECTION: Functions Definitions------------------- */
static Std_ReturnType lcd_send_4bits(const chr_lcd_4bit_t *lcd, uint8 _data_command);
static Std_ReturnType lcd_4bit_send_enable_signal(const chr_lcd_4bit_t *lcd);
static Std_ReturnType lcd_8bit_send_enable_signal(const chr_lcd_8bit_t *lcd);
static Std_ReturnType lcd_4bit_set_cursor(const chr_lcd_4bit_t *lcd, uint8 row, uint8 coloumn);
static Std_ReturnType lcd_8bit_set_cursor(const chr_lcd_8bit_t *lcd, uint8 row, uint8 coloumn);

Std_ReturnType lcd_4bit_initialize(const chr_lcd_4bit_t *lcd)
{
    Std_ReturnType ret = E_OK;
    uint8 counter=0;
    if(NULL == lcd )
    {
        ret = E_NOT_OK;
    }
    else
    {
        gpio_pin_initialize(&(lcd->lcd_rs));
        gpio_pin_initialize(&(lcd->lcd_en));
        for(counter=0; counter<4; counter++)
        {
            gpio_pin_initialize(&(lcd->lcd_data[counter]));
        }
        __delay_ms(20);
        lcd_4bit_send_command(lcd, _LCD_8BIT_MODE_2LINE);
        __delay_ms(5);
        lcd_4bit_send_command(lcd, _LCD_8BIT_MODE_2LINE);
        __delay_us(150);
        lcd_4bit_send_command(lcd, _LCD_8BIT_MODE_2LINE);
        lcd_4bit_send_command(lcd, _LCD_CLEAR);
        lcd_4bit_send_command(lcd, _LCD_RETURN_HOME);
        lcd_4bit_send_command(lcd, _LCD_ENTRY_MODE);
        lcd_4bit_send_command(lcd, _LCD_CURSOR_OFF_DISPLAY_ON);
        lcd_4bit_send_command(lcd, _LCD_4BIT_MODE_2LINE);
        lcd_4bit_send_command(lcd, _LCD_DDRAM_START);
    }
    return ret;
}
Std_ReturnType lcd_4bit_send_command(const chr_lcd_4bit_t *lcd, uint8 command)
{
    Std_ReturnType ret = E_OK;
    if(NULL == lcd )
    {
        ret = E_NOT_OK;
    }
    else
    {
        gpio_pin_write_logic(&(lcd->lcd_rs),GPIO_LOW);
        lcd_send_4bits(lcd, command>>4);
        lcd_4bit_send_enable_signal(lcd);
        lcd_send_4bits(lcd, command);
        lcd_4bit_send_enable_signal(lcd);
    }
    return ret;
}
Std_ReturnType lcd_4bit_send_char_data(const chr_lcd_4bit_t *lcd, uint8 data)
{
   Std_ReturnType ret = E_OK;
    if(NULL == lcd )
    {
        ret = E_NOT_OK;
    }
    else
    {
        gpio_pin_write_logic(&(lcd->lcd_rs),GPIO_HIGH);
        lcd_send_4bits(lcd, data>>4);
        lcd_4bit_send_enable_signal(lcd);
        lcd_send_4bits(lcd, data);
        lcd_4bit_send_enable_signal(lcd);
    }
    return ret; 
}
Std_ReturnType lcd_4bit_send_char_data_pos(const chr_lcd_4bit_t *lcd, uint8 row, uint8 coloumn, uint8 data)
{
    Std_ReturnType ret = E_OK;
    if(NULL == lcd )
    {
        ret = E_NOT_OK;
    }
    else
    {
        lcd_4bit_set_cursor(lcd, row, coloumn);
        lcd_4bit_send_char_data(lcd,data);
        
    }
    return ret;
}
Std_ReturnType lcd_4bit_send_string(const chr_lcd_4bit_t *lcd, uint8 *str)
{
    Std_ReturnType ret = E_OK;
    if(NULL == lcd || NULL == str )
    {
        ret = E_NOT_OK;
    }
    else
    {
        while(*str)
        { 
           lcd_4bit_send_char_data(lcd, *str);
           str++; 
        }
    }
    return ret;
}
Std_ReturnType lcd_4bit_send_string_pos(const chr_lcd_4bit_t *lcd, uint8 row, uint8 coloumn, uint8 *str)
{
    Std_ReturnType ret = E_OK;
    if(NULL == lcd || NULL == str )
    {
        ret = E_NOT_OK;
    }
    else
    {
        lcd_4bit_set_cursor(lcd, row, coloumn);
        lcd_4bit_send_string(lcd, str);
    }
    return ret;
}
Std_ReturnType lcd_4bit_send_custom_char(const chr_lcd_4bit_t *lcd, uint8 row, uint8 coloumn, const uint8 _chr[], uint8 mem_pos)
{
    Std_ReturnType ret = E_OK;
    uint8 counter=0;
    if(NULL == lcd )
    {
        ret = E_NOT_OK;
    }
    else
    {
        lcd_4bit_send_command(lcd,(_LCD_CGRAM_START+(mem_pos*DOT_MATRIX_8_ROWS)));
        for(counter=0; counter<8;counter++)
        {
            lcd_4bit_send_char_data(lcd, _chr[counter]);
        }
        lcd_4bit_send_char_data_pos(lcd,row, coloumn, mem_pos);
    }
    return ret;
}

Std_ReturnType lcd_8bit_initialize(const chr_lcd_8bit_t *lcd)
{
    Std_ReturnType ret = E_OK;
    uint8 counter=0;
    if(NULL == lcd )
    {
        ret = E_NOT_OK;
    }
    else
    {
        gpio_pin_initialize(&(lcd->lcd_rs));
        gpio_pin_initialize(&(lcd->lcd_en));
        for(counter=0; counter<8; counter++)
        {
            gpio_pin_initialize(&(lcd->lcd_data[counter]));
        }
        __delay_ms(20);
        lcd_8bit_send_command(lcd, _LCD_8BIT_MODE_2LINE);
        __delay_ms(5);
        lcd_8bit_send_command(lcd, _LCD_8BIT_MODE_2LINE);
        __delay_us(150);
        lcd_8bit_send_command(lcd, _LCD_8BIT_MODE_2LINE);
        lcd_8bit_send_command(lcd, _LCD_CLEAR);
        lcd_8bit_send_command(lcd, _LCD_RETURN_HOME);
        lcd_8bit_send_command(lcd, _LCD_ENTRY_MODE);
        lcd_8bit_send_command(lcd, _LCD_CURSOR_OFF_DISPLAY_ON);
        lcd_8bit_send_command(lcd, _LCD_8BIT_MODE_2LINE);
        lcd_8bit_send_command(lcd, _LCD_DDRAM_START);
    }
    return ret;
}
Std_ReturnType lcd_8bit_send_command(const chr_lcd_8bit_t *lcd, uint8 command)
{
   Std_ReturnType ret = E_OK;
   uint8 counter=0;
    if(NULL == lcd )
    {
        ret = E_NOT_OK;
    }
    else
    {
        gpio_pin_write_logic(&(lcd->lcd_rs),GPIO_LOW);
        for(counter=0;counter<8;counter++)
        {
            gpio_pin_write_logic(&(lcd->lcd_data[counter]), (command>>counter) & (uint8)0X01);
        }
        lcd_8bit_send_enable_signal(lcd);
    }
    return ret; 
}
Std_ReturnType lcd_8bit_send_char_data(const chr_lcd_8bit_t *lcd, uint8 data)
{
    Std_ReturnType ret = E_OK;
    uint8 counter=0;
    if(NULL == lcd )
    {
        ret = E_NOT_OK;
    }
    else
    {
        gpio_pin_write_logic(&(lcd->lcd_rs),GPIO_HIGH);
        for(counter=0;counter<8;counter++)
        {
            gpio_pin_write_logic(&(lcd->lcd_data[counter]), (data>>counter) & (uint8)0X01);
        }
        lcd_8bit_send_enable_signal(lcd);
        
    }
    return ret;
}
Std_ReturnType lcd_8bit_send_char_data_pos(const chr_lcd_8bit_t *lcd, uint8 row, uint8 coloumn, uint8 data)
{
    Std_ReturnType ret = E_OK;
    uint8 counter=0;
    if(NULL == lcd )
    {
        ret = E_NOT_OK;
    }
    else
    {
        lcd_8bit_set_cursor(lcd, row, coloumn);
        lcd_8bit_send_char_data(lcd, data);
    }
    return ret;
}
Std_ReturnType lcd_8bit_send_string(const chr_lcd_8bit_t *lcd, uint8 *str)
{
    Std_ReturnType ret = E_OK;
    if(NULL == lcd || NULL == str )
    {
        ret = E_NOT_OK;
    }
    else
    {
        while(*str)
        { 
           lcd_8bit_send_char_data(lcd, *str);
           str++; 
        }
    }
    return ret;
}
Std_ReturnType lcd_8bit_send_string_pos(const chr_lcd_8bit_t *lcd, uint8 row, uint8 coloumn, uint8 *str)
{
    Std_ReturnType ret = E_OK;
    if(NULL == lcd || NULL == str )
    {
        ret = E_NOT_OK;
    }
    else
    {
        lcd_8bit_set_cursor(lcd, row, coloumn);
        lcd_8bit_send_string(lcd, str);
    }
    return ret;
}
Std_ReturnType lcd_8bit_send_custom_char(const chr_lcd_8bit_t *lcd, uint8 row, uint8 coloumn, const uint8 _chr[], uint8 mem_pos)
{
    Std_ReturnType ret = E_OK;
    uint8 counter=0;
    if(NULL == lcd )
    {
        ret = E_NOT_OK;
    }
    else
    {
        lcd_8bit_send_command(lcd,(_LCD_CGRAM_START+(mem_pos*DOT_MATRIX_8_ROWS)));
        for(counter=0; counter<8;counter++)
        {
            lcd_8bit_send_char_data(lcd, _chr[counter]);
        }
        lcd_8bit_send_char_data_pos(lcd,row, coloumn, mem_pos);
    }
    return ret;
}

void convert_byte_to_string(uint8 value, uint8 *str)
{
    memset(str,'\0',4);
    sprintf(str,"%i",value);
}
void convert_short_to_string(uint16 value, uint8 *str)
{
   memset(str,'\0',6);
   sprintf(str,"%i",value);
}
void convert_long_to_string(uint32 value, uint8 *str)
{
    memset(str,'\0',11);
    sprintf(str,"%i",value);
}

static Std_ReturnType lcd_send_4bits(const chr_lcd_4bit_t *lcd, uint8 _data_command)
{
    Std_ReturnType ret = E_OK;
    if(NULL == lcd )
    {
        ret = E_NOT_OK;
    }
    else
    {
        gpio_pin_write_logic(&(lcd->lcd_data[0]),(_data_command >> 0) & (uint8)0X01);
        gpio_pin_write_logic(&(lcd->lcd_data[1]),(_data_command >> 1) & (uint8)0X01);
        gpio_pin_write_logic(&(lcd->lcd_data[2]),(_data_command >> 2) & (uint8)0X01);
        gpio_pin_write_logic(&(lcd->lcd_data[3]),(_data_command >> 3) & (uint8)0X01);
    }
    return ret;
}

static Std_ReturnType lcd_4bit_send_enable_signal(const chr_lcd_4bit_t *lcd)
{
    Std_ReturnType ret = E_OK;
    if(NULL == lcd )
    {
        ret = E_NOT_OK;
    }
    else
    {
        gpio_pin_write_logic(&(lcd->lcd_en),GPIO_HIGH);
        __delay_us(5);
        gpio_pin_write_logic(&(lcd->lcd_en),GPIO_LOW);
        
    }
    return ret;
}
static Std_ReturnType lcd_8bit_send_enable_signal(const chr_lcd_8bit_t *lcd)
{
    Std_ReturnType ret = E_OK;
    if(NULL == lcd )
    {
        ret = E_NOT_OK;
    }
    else
    {
        gpio_pin_write_logic(&(lcd->lcd_en),GPIO_HIGH);
        __delay_us(5);
        gpio_pin_write_logic(&(lcd->lcd_en),GPIO_LOW);
        
    }
    return ret;
}
static Std_ReturnType lcd_8bit_set_cursor(const chr_lcd_8bit_t *lcd, uint8 row, uint8 coloumn)
{
    Std_ReturnType ret = E_OK;
    if(NULL == lcd )
    {
        ret = E_NOT_OK;
    }
    else
    {
        switch(row)
        {
            case ROW1: lcd_8bit_send_command(lcd, (DDRAM_ROW1 + (coloumn -1))); break;
            case ROW2: lcd_8bit_send_command(lcd, (DDRAM_ROW2 + (coloumn -1))); break;
            case ROW3: lcd_8bit_send_command(lcd, (DDRAM_ROW3 + (coloumn -1))); break;
            case ROW4: lcd_8bit_send_command(lcd, (DDRAM_ROW4 + (coloumn -1))); break;
            default: ret = E_NOT_OK; 
            
        }
        
    }
    return ret;
}
static Std_ReturnType lcd_4bit_set_cursor(const chr_lcd_4bit_t *lcd, uint8 row, uint8 coloumn)
{
    Std_ReturnType ret = E_OK;
    if(NULL == lcd )
    {
        ret = E_NOT_OK;
    }
    else
    {
        switch(row)
        {
            case ROW1: lcd_4bit_send_command(lcd, (DDRAM_ROW1 + (coloumn -1))); break;
            case ROW2: lcd_4bit_send_command(lcd, (DDRAM_ROW2 + (coloumn -1))); break;
            case ROW3: lcd_4bit_send_command(lcd, (DDRAM_ROW3 + (coloumn -1))); break;
            case ROW4: lcd_4bit_send_command(lcd, (DDRAM_ROW4 + (coloumn -1))); break;
            default: ret = E_NOT_OK; 
            
        }
        
    }
    return ret;
}

