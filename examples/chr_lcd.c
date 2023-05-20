/* 
 * File:   application.c
 * Author: Mousa
 *
 * Created on April 5, 2023, 2:17 PM
 */



#include "application.h"
//void pointing_fun(void);
//void hello_all(void);
uint8 count=0;
uint8 count_arr8[4];
uint8 count_arr16[6];
uint8 count_arr32[11];
const uint8 customChar[6][8] = {{0x0E,0x0A,0x0A,0x11,0x11,0x11,0x1F,0x00},
                                {0x0E,0x0A,0x0A,0x11,0x11,0x1F,0x1F,0x00},
                                {0x0E,0x0A,0x0A,0x11,0x1F,0x1F,0x1F,0x00},
                                {0x0E,0x0A,0x0A,0x1F,0x1F,0x1F,0x1F,0x00},
                                {0x0E,0x0A,0x0E,0x1F,0x1F,0x1F,0x1F,0x00},
                                {0x0E,0x0E,0x0E,0x1F,0x1F,0x1F,0x1F,0x00}};
int main() {
    
    initalize ();
    
//    lcd_8bit_send_string(&lcd2,"loading");
//    lcd_4bit_send_string_pos(&lcd1,2,2,"EMBEDDED DIPLOMA");
    
    while(1)
    {
        for(count =0 ; count<6; count++)
        {
            lcd_8bit_send_string_pos(&lcd2,1,1,"loading");
            lcd_8bit_send_custom_char(&lcd2,1,8,customChar[count],count);
            lcd_4bit_send_string_pos(&lcd1,1,1,"loading");
            lcd_4bit_send_custom_char(&lcd1,1,8,customChar[count],count);
            __delay_ms(500);
//            lcd_8bit_send_string_pos(&lcd2,1,1, "counter: ");
////            convert_short_to_string(count,count_arr16);
////            lcd_8bit_send_string_pos(&lcd2,1,11,count_arr16);
       }
//        lcd_8bit_send_string_pos(&lcd2,1,11,count_arr8);
//        pointing_fun();
//        hello_all();
        
    }   
    return (EXIT_SUCCESS);
}

void initalize (void)
{
    lcd_4bit_initialize(&lcd1);
    lcd_8bit_initialize(&lcd2);
    //keypad_initialize(&keypad1);
    //DC_MOTOR_PINS_INITIALIZE(&motor1);
    //gpio_pin_direction_initialize(&led1);
    //gpio_pin_direction_initialize(&BUTTON1);
}
//void pointing_fun(void)
//{
//    
//    for(uint8 counter =8 ; counter<14; counter++)
//        {
//            lcd_8bit_send_char_data_pos(&lcd2,1,counter, '.');
//            __delay_ms(100);
//        }
//        lcd_8bit_send_string_pos(&lcd2,1,8,"       ");
//}
//void hello_all(void)
//{
//    for(uint8 counter =5 ; counter<12; counter++)
//        {
//            lcd_4bit_send_string_pos(&lcd1,1,counter, "hello_all");
//            __delay_ms(150);
//            lcd_4bit_send_char_data_pos(&lcd1,1,counter, ' ');
//            //lcd_4bit_send_string_pos(&lcd1,1,1,"                    ");
//        }
//    lcd_4bit_send_string_pos(&lcd1,1,12, "        ");
//        
//}
