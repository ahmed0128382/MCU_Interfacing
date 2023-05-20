/* 
 * File:   application.h
 * Author: Mousa
 *
 * Created on April 5, 2023, 3:14 PM
 */

#ifndef APPLICATION_H
#define	APPLICATION_H

#include "MCAL_Layer/device_config.h"
#include "ECU_LAYER/LED/ecu_led.h"
#include "ECU_LAYER/dc_motor/dc_motor.h"
#include "ECU_LAYER/KEY_PAD/keypad.h"
#include "ECU_LAYER/SEV_SEG/sev_seg.h"
#include "ECU_LAYER/chr_lcd/chr_lcd.h"
#include "MCAL_Layer/usart/hal_usart.h"
#include "MCAL_Layer/SPI/hal_spi.h"
//#define _XTAL_FREQ 8000000UL


volatile uint8 program_selector=0;
volatile uint8 master_val=0;
/*------------- SECTION: Functions Declarations------------------- */
void initalize (void);
void led1_func (void);
void led2_func (void);
/*---------------- PERIPHERIALS DECLARATIONS-------------- */

pin_config_t led1 =
{
    .port     = PORTC_INDEX,
    .pin      = GPIO_PIN0,
    .logic    = GPIO_LOW,
    .direction= GPIO_DIRECTION_OUTPUT
    
};   
pin_config_t led2 =
{
    .port     = PORTC_INDEX,
    .pin      = GPIO_PIN1,
    .logic    = GPIO_LOW,
    .direction= GPIO_DIRECTION_OUTPUT
    
};  
pin_config_t led3 =
{
    .port     = PORTD_INDEX,
    .pin      = GPIO_PIN0,
    .logic    = GPIO_LOW,
    .direction= GPIO_DIRECTION_OUTPUT
    
};  
pin_config_t BUTTON1 =
{
    .port     = PORTB_INDEX,
    .pin      = GPIO_PIN0,
    .logic    = GPIO_LOW,
    .direction= GPIO_DIRECTION_INPUT
    
};  
Std_ReturnType ret_state=E_OK;
logic_t button_val=0;
uint8 port_state=0;

dc_motor_t motor1 = 
{
  .motor_pin[dc_motor_pin1].direction=GPIO_DIRECTION_OUTPUT,
  .motor_pin[dc_motor_pin1].port=PORTD_INDEX,
  .motor_pin[dc_motor_pin1].pin=GPIO_PIN1,
  .motor_pin[dc_motor_pin1].logic=GPIO_LOW,
  .motor_pin[dc_motor_pin2].direction=GPIO_DIRECTION_OUTPUT,
  .motor_pin[dc_motor_pin2].port=PORTD_INDEX,
  .motor_pin[dc_motor_pin2].pin=GPIO_PIN2,
  .motor_pin[dc_motor_pin2].logic=GPIO_LOW
  
};
dc_motor_t motor2 = 
{
  .motor_pin[dc_motor_pin1].direction=GPIO_DIRECTION_OUTPUT,
  .motor_pin[dc_motor_pin1].port=PORTD_INDEX,
  .motor_pin[dc_motor_pin1].pin=GPIO_PIN3,
  .motor_pin[dc_motor_pin1].logic=GPIO_LOW,
  .motor_pin[dc_motor_pin2].direction=GPIO_DIRECTION_OUTPUT,
  .motor_pin[dc_motor_pin2].port=PORTD_INDEX,
  .motor_pin[dc_motor_pin2].pin=GPIO_PIN4,
  .motor_pin[dc_motor_pin2].logic=GPIO_LOW
  
};
keypad_t keypad1 = 
{
  .keypad_row_pins[0].direction=GPIO_DIRECTION_OUTPUT,  
  .keypad_row_pins[0].port=PORTC_INDEX,
  .keypad_row_pins[0].pin=GPIO_PIN0,
  .keypad_row_pins[0].logic=GPIO_LOW,
  .keypad_row_pins[1].direction=GPIO_DIRECTION_OUTPUT,  
  .keypad_row_pins[1].port=PORTC_INDEX,
  .keypad_row_pins[1].pin=GPIO_PIN1,
  .keypad_row_pins[1].logic=GPIO_LOW,
  .keypad_row_pins[2].direction=GPIO_DIRECTION_OUTPUT,  
  .keypad_row_pins[2].port=PORTC_INDEX,
  .keypad_row_pins[2].pin=GPIO_PIN2,
  .keypad_row_pins[2].logic=GPIO_LOW,
  .keypad_row_pins[3].direction=GPIO_DIRECTION_OUTPUT,  
  .keypad_row_pins[3].port=PORTC_INDEX,
  .keypad_row_pins[3].pin=GPIO_PIN3,
  .keypad_row_pins[3].logic=GPIO_LOW,
  .keypad_col_pins[0].direction=GPIO_DIRECTION_INPUT,  
  .keypad_col_pins[0].port=PORTC_INDEX,
  .keypad_col_pins[0].pin=GPIO_PIN4,
  .keypad_col_pins[0].logic=GPIO_LOW,
  .keypad_col_pins[1].direction=GPIO_DIRECTION_INPUT,  
  .keypad_col_pins[1].port=PORTC_INDEX,
  .keypad_col_pins[1].pin=GPIO_PIN5,
  .keypad_col_pins[1].logic=GPIO_LOW,
  .keypad_col_pins[2].direction=GPIO_DIRECTION_INPUT,  
  .keypad_col_pins[2].port=PORTC_INDEX,
  .keypad_col_pins[2].pin=GPIO_PIN6,
  .keypad_col_pins[2].logic=GPIO_LOW,
  .keypad_col_pins[3].direction=GPIO_DIRECTION_INPUT,  
  .keypad_col_pins[3].port=PORTC_INDEX,
  .keypad_col_pins[3].pin=GPIO_PIN7,
  .keypad_col_pins[3].logic=GPIO_LOW,
  
};
sev_seg_t sev_seg1 ={
    .common_incident=common_cathode,
    .segment_pin[0].direction=GPIO_DIRECTION_OUTPUT,
    .segment_pin[0].logic=GPIO_LOW,
    .segment_pin[0].pin=GPIO_PIN0,
    .segment_pin[0].port=PORTC_INDEX,
    .segment_pin[1].direction=GPIO_DIRECTION_OUTPUT,
    .segment_pin[1].logic=GPIO_LOW,
    .segment_pin[1].pin=GPIO_PIN1,
    .segment_pin[1].port=PORTC_INDEX,
    .segment_pin[2].direction=GPIO_DIRECTION_OUTPUT,
    .segment_pin[2].logic=GPIO_LOW,
    .segment_pin[2].pin=GPIO_PIN2,
    .segment_pin[2].port=PORTC_INDEX,
    .segment_pin[3].direction=GPIO_DIRECTION_OUTPUT,
    .segment_pin[3].logic=GPIO_LOW,
    .segment_pin[3].pin=GPIO_PIN3,
    .segment_pin[3].port=PORTC_INDEX,
    
};
chr_lcd_4bit_t lcd1 ={
    .lcd_rs.direction=GPIO_DIRECTION_OUTPUT,
    .lcd_rs.logic=GPIO_LOW,
    .lcd_rs.pin=GPIO_PIN0,
    .lcd_rs.port=PORTC_INDEX,
    .lcd_en.direction=GPIO_DIRECTION_OUTPUT,
    .lcd_en.logic=GPIO_LOW,
    .lcd_en.pin=GPIO_PIN1,
    .lcd_en.port=PORTC_INDEX,
    .lcd_data[0].direction=GPIO_DIRECTION_OUTPUT,
    .lcd_data[0].logic=GPIO_LOW,
    .lcd_data[0].pin=GPIO_PIN2,
    .lcd_data[0].port=PORTC_INDEX,
    .lcd_data[1].direction=GPIO_DIRECTION_OUTPUT,
    .lcd_data[1].logic=GPIO_LOW,
    .lcd_data[1].pin=GPIO_PIN3,
    .lcd_data[1].port=PORTC_INDEX,
    .lcd_data[2].direction=GPIO_DIRECTION_OUTPUT,
    .lcd_data[2].logic=GPIO_LOW,
    .lcd_data[2].pin=GPIO_PIN4,
    .lcd_data[2].port=PORTC_INDEX,
    .lcd_data[3].direction=GPIO_DIRECTION_OUTPUT,
    .lcd_data[3].logic=GPIO_LOW,
    .lcd_data[3].pin=GPIO_PIN5,
    .lcd_data[3].port=PORTC_INDEX
    
    
};
chr_lcd_8bit_t lcd2 ={
    .lcd_rs.direction=GPIO_DIRECTION_OUTPUT,
    .lcd_rs.logic=GPIO_LOW,
    .lcd_rs.pin=GPIO_PIN6,
    .lcd_rs.port=PORTC_INDEX,
    .lcd_en.direction=GPIO_DIRECTION_OUTPUT,
    .lcd_en.logic=GPIO_LOW,
    .lcd_en.pin=GPIO_PIN7,
    .lcd_en.port=PORTC_INDEX,
    .lcd_data[0].direction=GPIO_DIRECTION_OUTPUT,
    .lcd_data[0].logic=GPIO_LOW,
    .lcd_data[0].pin=GPIO_PIN0,
    .lcd_data[0].port=PORTD_INDEX,
    .lcd_data[1].direction=GPIO_DIRECTION_OUTPUT,
    .lcd_data[1].logic=GPIO_LOW,
    .lcd_data[1].pin=GPIO_PIN1,
    .lcd_data[1].port=PORTD_INDEX,
    .lcd_data[2].direction=GPIO_DIRECTION_OUTPUT,
    .lcd_data[2].logic=GPIO_LOW,
    .lcd_data[2].pin=GPIO_PIN2,
    .lcd_data[2].port=PORTD_INDEX,
    .lcd_data[3].direction=GPIO_DIRECTION_OUTPUT,
    .lcd_data[3].logic=GPIO_LOW,
    .lcd_data[3].pin=GPIO_PIN3,
    .lcd_data[3].port=PORTD_INDEX,
    .lcd_data[4].direction=GPIO_DIRECTION_OUTPUT,
    .lcd_data[4].logic=GPIO_LOW,
    .lcd_data[4].pin=GPIO_PIN4,
    .lcd_data[4].port=PORTD_INDEX,
    .lcd_data[5].direction=GPIO_DIRECTION_OUTPUT,
    .lcd_data[5].logic=GPIO_LOW,
    .lcd_data[5].pin=GPIO_PIN5,
    .lcd_data[5].port=PORTD_INDEX,
    .lcd_data[6].direction=GPIO_DIRECTION_OUTPUT,
    .lcd_data[6].logic=GPIO_LOW,
    .lcd_data[6].pin=GPIO_PIN6,
    .lcd_data[6].port=PORTD_INDEX,
    .lcd_data[7].direction=GPIO_DIRECTION_OUTPUT,
    .lcd_data[7].logic=GPIO_LOW,
    .lcd_data[7].pin=GPIO_PIN7,
    .lcd_data[7].port=PORTD_INDEX
            
};
usart_t usart_obj1 =
{
    .baudrate=9600,
    .baudrate_gen_gonfig = BAUDRATE_ASYN_8BIT_HIGH_SPEED,
    .usart_tx_cfg.usart_tx_9bit_enable= EUSART_ASYNCHRONOUS_9Bit_TX_DISABLE,
    .usart_tx_cfg.usart_tx_enable = EUSART_ASYNCHRONOUS_TX_ENABLE,
};
SPI_t spi_obj1_master =
{
    .spi_config.ClockPolarity = IDLE_STATE_IS_HIGH,
    .spi_config.ClockSelect = DATA_ON_CHANGE_ACTIVE_TO_IDLE,
    .spi_config.SampleSelect = MIDDLE_OF_DATA_SAMPLING,
    .spi_mode_select = SPI_Master_mode_clk_F_div_by_16,
    .MSSP_SPI_DefaultInterruptHandler = led2_func
    
};
SPI_t spi_obj1_slave =
{
    .spi_config.ClockPolarity = IDLE_STATE_IS_HIGH,
    .spi_config.ClockSelect = DATA_ON_CHANGE_ACTIVE_TO_IDLE,
    .spi_config.SampleSelect = MIDDLE_OF_DATA_SAMPLING,
    .spi_mode_select = SPI_Slave_mode_clk_SCK_with_SS_Enabled
    
};
/*------------- SECTION: Functions Declarations------------------- */
void led1_func (void)
{
    program_selector++;
    
    gpio_pin_toggle_logic(&led1);
}
void led2_func (void)
{
    master_val++;
    gpio_pin_toggle_logic(&led1);
}




#endif	/* APPLICATION_H */

