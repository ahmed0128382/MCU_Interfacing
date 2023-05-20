/* 
 * File:   application.c
 * Author: Mousa
 *
 * Created on April 5, 2023, 2:17 PM
 */



#include "application.h"
pin_config_t SPI_SS = {.port = PORTD_INDEX, .pin = GPIO_PIN0, .direction = GPIO_DIRECTION_OUTPUT, .logic = GPIO_HIGH};

//uint8 data_to_read=0;
//uint8 count=0;
uint8 val1=0;

//uint8 val2[6];
int main() {
    
    initalize ();
    gpio_pin_write_logic(&SPI_SS,GPIO_LOW);
    
    
    while(1)
    {
        SPI_Send_Byte(&spi_obj1_master,'a');
        __delay_ms(1000);
        SPI_Send_Byte(&spi_obj1_master,'b');
        __delay_ms(1000);
        SPI_Send_Byte(&spi_obj1_master,'c');
        __delay_ms(1000);
        
    }   
    return (EXIT_SUCCESS);
}

void initalize (void)
{
    //gpio_pin_initialize(&SPI_SS);
    MSSP_SPI_Mode_Initialize(&spi_obj1_master);
//    MSSP_SPI_Mode_Initialize(&spi_obj1_slave);
    //EUSART_ASYNC_Init(&usart_obj1);
    //keypad_initialize(&keypad1);
    //DC_MOTOR_PINS_INITIALIZE(&motor1);
    gpio_pin_initialize(&led1);
    gpio_pin_initialize(&led2);
    gpio_pin_initialize(&led3);
    //gpio_pin_direction_initialize(&BUTTON1);
}
