/* 
 * File:   hal_gpio.h
 * Author: Mousa
 *
 * Created on April 5, 2023, 2:32 PM
 */


/* ----------------SECTION: INCLUDES----------------------------- */

/*------------ SECTION: Macros Declarations------------------------ */

/*--------------- SECTION: Data Type Declarations---------------- */

/*-------------SECTION: Macros Function Declarations-------------- */

/*------------- SECTION: Functions Declarations------------------- */

#ifndef HAL_GPIO_H
#define	HAL_GPIO_H

/* SECTION: INCLUDES */
#include "../mcal_std_types.h"

#include "../../MCAL_Layer/device_config.h"
/* SECTION: Data Type Declarations */

/* SECTION: USER DEEFINED DATA TYPES  */
typedef enum {
    GPIO_LOW = 0,
    GPIO_HIGH
} logic_t;

typedef enum {
    GPIO_DIRECTION_OUTPUT = 0,
    GPIO_DIRECTION_INPUT
} direction_t;

typedef enum {
    GPIO_PIN0 = 0,
    GPIO_PIN1,
    GPIO_PIN2,
    GPIO_PIN3,
    GPIO_PIN4,
    GPIO_PIN5,
    GPIO_PIN6,
    GPIO_PIN7
} pin_index_t;

typedef enum {
    PORTA_INDEX = 0,
    PORTB_INDEX,
    PORTC_INDEX,
    PORTD_INDEX,
    PORTE_INDEX,
} port_index_t;

typedef struct PIN_CONFIG{
    uint8 port : 3;
    uint8 pin : 3;
    uint8 logic : 1;
    uint8 direction : 1;
}pin_config_t;



/* SECTION: Macros Declarations */
#define STD_High 0x01
#define STD_Low  0x00



#define MAX_PORT_NO 5
#define MAX_PIN_NO  8


#define BitMask (uint8)1

/* SECTION: Macros Function Declarations */

#define HWREG(_X)           (*((volatile uint8 *)_X))

#define SET_BIT(REG,BIT)    (REG|=(BitMask<<BIT))
#define SET_BYTE(REG)       (REG|=(0XFF))
#define CLEAR_BIT(REG,BIT)  (REG&=~(BitMask<<BIT))
#define CLEAR_BYTE(REG)     (REG&=(0X00))
#define TOGGLE_BIT(REG,BIT) (REG^=(BitMask<<BIT))
#define READ_BIT(REG,BIT)   ((REG>>BIT)&BitMask)
#define CLEAR_l_nipple(REG) (REG&=0XF0)


/* SECTION: Functions Declarations */


#endif	/* HAL_GPIO_H */

Std_ReturnType gpio_pin_direction_initialize(const pin_config_t * _pin_config);
Std_ReturnType gpio_pin_get_direction_status(const pin_config_t * _pin_config, direction_t * direction_status);
Std_ReturnType gpio_pin_write_logic(const pin_config_t * _pin_config,logic_t logic);
Std_ReturnType gpio_pin_read_logic(const pin_config_t * _pin_config,logic_t * logic);
Std_ReturnType gpio_pin_toggle_logic(const pin_config_t * _pin_config);
Std_ReturnType gpio_pin_initialize(const pin_config_t * _pin_config);

Std_ReturnType gpio_port_direction_initialize(port_index_t port,uint8 _direction);
Std_ReturnType gpio_port_get_direction_status(port_index_t port, uint8 * direction_status);
Std_ReturnType gpio_port_write_logic(port_index_t port,logic_t logic);
Std_ReturnType gpio_port_read_logic(port_index_t port,logic_t * logic);
Std_ReturnType gpio_port_toggle_logic(port_index_t port);
Std_ReturnType gpio_port_l_nipple_direction_output(port_index_t port);
Std_ReturnType gpio_port_L_nipple_write_value(port_index_t port,uint8 value);