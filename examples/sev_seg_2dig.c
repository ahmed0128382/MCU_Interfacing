/* 
 * File:   application.c
 * Author: Mousa
 *
 * Created on April 5, 2023, 2:17 PM
 */



#include "application.h"
pin_config_t seg_en1 ={
    .direction=GPIO_DIRECTION_OUTPUT,
    .pin=GPIO_PIN0,
    .port=PORTD_INDEX,
    .logic=GPIO_LOW
};
pin_config_t seg_en2 ={
    .direction=GPIO_DIRECTION_OUTPUT,
    .pin=GPIO_PIN1,
    .port=PORTD_INDEX,
    .logic=GPIO_LOW
};
//logic_t key_value=0;
//logic_t btn_value=0;
//uint8 row_counter=0;
//uint8 col_counter=0;
//uint8 l_counter=0;
//logic_t read_col_logic=GPIO_LOW;
//logic_t check=GPIO_LOW;
uint8 counter=0;
uint8 seg_val=95;
int main() {
    
    initalize ();
    while(1)
    {
        
        for(counter=0;counter<=50;counter++)
        {
            sev_seg_write_decoded_value_same_port(&sev_seg1,(uint8)(seg_val/10));
            gpio_pin_write_logic(&seg_en1,GPIO_HIGH);         
            __delay_ms(10);
            gpio_pin_write_logic(&seg_en1,GPIO_LOW);   
            sev_seg_write_decoded_value_same_port(&sev_seg1,(uint8)(seg_val%10));
            gpio_pin_write_logic(&seg_en2,GPIO_HIGH);
            __delay_ms(10);
            gpio_pin_write_logic(&seg_en2,GPIO_LOW);
        }
        seg_val++;
        if(100 == seg_val)
        {
            seg_val=0;
        }
        
    }   
    return (EXIT_SUCCESS);
}

void initalize (void)
{
    sev_seg_initialize(&sev_seg1);
    gpio_pin_direction_initialize(&seg_en1);
    gpio_pin_direction_initialize(&seg_en2);
    //keypad_initialize(&keypad1);
    //DC_MOTOR_PINS_INITIALIZE(&motor1);
    //gpio_pin_direction_initialize(&led1);
    //gpio_pin_direction_initialize(&BUTTON1);
}
