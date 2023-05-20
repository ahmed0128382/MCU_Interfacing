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
    .logic=GPIO_HIGH
};
pin_config_t seg_en2 ={
    .direction=GPIO_DIRECTION_OUTPUT,
    .pin=GPIO_PIN1,
    .port=PORTD_INDEX,
    .logic=GPIO_HIGH
};
pin_config_t seg_en3 ={
    .direction=GPIO_DIRECTION_OUTPUT,
    .pin=GPIO_PIN2,
    .port=PORTD_INDEX,
    .logic=GPIO_HIGH
};
pin_config_t seg_en4 ={
    .direction=GPIO_DIRECTION_OUTPUT,
    .pin=GPIO_PIN3,
    .port=PORTD_INDEX,
    .logic=GPIO_HIGH
};
pin_config_t seg_en5 ={
    .direction=GPIO_DIRECTION_OUTPUT,
    .pin=GPIO_PIN4,
    .port=PORTD_INDEX,
    .logic=GPIO_HIGH
};
pin_config_t seg_en6 ={
    .direction=GPIO_DIRECTION_OUTPUT,
    .pin=GPIO_PIN5,
    .port=PORTD_INDEX,
    .logic=GPIO_HIGH
};
//logic_t key_value=0;
//logic_t btn_value=0;
//uint8 row_counter=0;
//uint8 col_counter=0;
//uint8 l_counter=0;
//logic_t read_col_logic=GPIO_LOW;
//logic_t check=GPIO_LOW;
uint8 counter=0;
uint8 seconds=55;
uint8 minutes=59;
uint8 hours=23;
int main() {
    
    initalize ();
    while(1)
    { 
        for(counter=0;counter<50;counter++)
        {
            sev_seg_write_decoded_value_same_port(&sev_seg1,(uint8)(hours/10));
            gpio_port_write_logic(PORTD_INDEX,0X3E);
            __delay_us(3333);
            gpio_port_write_logic(PORTD_INDEX,0X3F);
            sev_seg_write_decoded_value_same_port(&sev_seg1,(uint8)(hours%10));
            gpio_port_write_logic(PORTD_INDEX,0X3D);
            __delay_us(3333);
            gpio_port_write_logic(PORTD_INDEX,0X3F);

            sev_seg_write_decoded_value_same_port(&sev_seg1,(uint8)(minutes/10));
            gpio_port_write_logic(PORTD_INDEX,0X3B);
            __delay_us(3333);
            gpio_port_write_logic(PORTD_INDEX,0X3F);

            sev_seg_write_decoded_value_same_port(&sev_seg1,(uint8)(minutes%10));
            gpio_port_write_logic(PORTD_INDEX,0X37);
            __delay_us(3333);
            gpio_port_write_logic(PORTD_INDEX,0X3F);
            
            
 
            sev_seg_write_decoded_value_same_port(&sev_seg1,(uint8)(seconds/10));
            gpio_port_write_logic(PORTD_INDEX,0X2F);
            __delay_us(3333);
            gpio_port_write_logic(PORTD_INDEX,0X3F);
            
   
            sev_seg_write_decoded_value_same_port(&sev_seg1,(uint8)(seconds%10));
            gpio_port_write_logic(PORTD_INDEX,0X1F);
            __delay_us(3333);
            gpio_port_write_logic(PORTD_INDEX,0X3F);
            
       
        }
        seconds++;
        if(60 == seconds)
        {
            seconds=0;
            minutes++;
        }
        if(60 == minutes)
        {
            minutes=0;
            hours++;
        }
        if(24 == hours)
        {
            hours=0;
        }        
        
    }   
    return (EXIT_SUCCESS);
}

void initalize (void)
{
    sev_seg_initialize(&sev_seg1);
    gpio_pin_initialize(&seg_en1);
    gpio_pin_initialize(&seg_en2);
    gpio_pin_initialize(&seg_en3);
    gpio_pin_initialize(&seg_en4);
    gpio_pin_initialize(&seg_en5);
    gpio_pin_initialize(&seg_en6);
    //keypad_initialize(&keypad1);
    //DC_MOTOR_PINS_INITIALIZE(&motor1);
    //gpio_pin_direction_initialize(&led1);
    //gpio_pin_direction_initialize(&BUTTON1);
}
