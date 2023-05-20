/* 
 * File:   hal_gpio.c
 * Author: Mousa
 *
 * Created on April 5, 2023, 2:17 PM
 */

#include "hal_gpio.h"

volatile uint8 *tris_registers[]    =   {&TRISA, &TRISB, &TRISC, &TRISD, &TRISE};
volatile uint8 *lat_registers[]     =   {&LATA, &LATB, &LATC, &LATD, &LATE};
volatile uint8 *port_registers[]    =   {&PORTA, &PORTB, &PORTC, &PORTD, &PORTE};

Std_ReturnType gpio_pin_direction_initialize(const pin_config_t * _pin_config)
{
    Std_ReturnType ret = E_OK;
    if(_pin_config==NULL || _pin_config->pin > (MAX_PIN_NO - 1) )
    {
        ret = E_NOT_OK;
    }
    else
    {
        switch(_pin_config->direction){
                case GPIO_DIRECTION_OUTPUT:
                    CLEAR_BIT(*tris_registers[_pin_config->port],_pin_config->pin);
                    break;
                case GPIO_DIRECTION_INPUT:
                    SET_BIT(*tris_registers[_pin_config->port],_pin_config->pin);
                    break;
                default:
                    ret = E_NOT_OK;
                    

        }
    
    }
    return ret;
}
Std_ReturnType gpio_pin_get_direction_status(const pin_config_t * _pin_config, direction_t * direction_status)
{
    Std_ReturnType ret = E_OK;
    if(_pin_config==NULL || _pin_config->pin > (MAX_PIN_NO - 1)  )
    {
        ret = E_NOT_OK;
    }
    else
    {
        *direction_status = _pin_config->direction;
    }
    return ret;
}
Std_ReturnType gpio_pin_write_logic(const pin_config_t *_pin_config, logic_t logic)
{
    Std_ReturnType ret = E_OK;
    if(_pin_config==NULL || _pin_config->pin > (MAX_PIN_NO - 1)  )
    {
        ret = E_NOT_OK;
    }
    else
    {
       switch(logic)
       {
           case GPIO_LOW :
               CLEAR_BIT(*lat_registers[_pin_config->port],_pin_config->pin);
               break;
           case GPIO_HIGH:
               SET_BIT(*lat_registers[_pin_config->port],_pin_config->pin);
               break;
       }
    }
    return ret;
}
Std_ReturnType gpio_pin_read_logic(const pin_config_t * _pin_config,logic_t * logic)
{
    Std_ReturnType ret = E_OK;
    if(_pin_config==NULL || NULL == logic  || _pin_config->pin > (MAX_PIN_NO - 1)  )
    {
        ret = E_NOT_OK;
    }
    else
    {
        *logic = READ_BIT(*port_registers[_pin_config->port],_pin_config->pin);
    }
    return ret;
}
Std_ReturnType gpio_pin_toggle_logic(const pin_config_t * _pin_config)
{
    Std_ReturnType ret = E_OK;
    if(_pin_config==NULL || _pin_config->pin > (MAX_PIN_NO - 1)  )
    {
        ret = E_NOT_OK;
    }
    else
    {
         TOGGLE_BIT(*lat_registers[_pin_config->port],_pin_config->pin);
    }
    return ret;
}
Std_ReturnType gpio_pin_initialize(const pin_config_t * _pin_config)
{
    Std_ReturnType ret = E_OK;
    if(_pin_config==NULL || _pin_config->pin > (MAX_PIN_NO - 1)  )
    {
        ret = E_NOT_OK;
    }
    else
    {
        gpio_pin_direction_initialize(_pin_config);
        gpio_pin_write_logic(_pin_config, _pin_config->logic);
    }
    return ret;
}

Std_ReturnType gpio_port_direction_initialize(port_index_t port,uint8 _direction)
{
    Std_ReturnType ret = E_OK;
    if( port > (MAX_PORT_NO - 1)  )
    {
        ret = E_NOT_OK;
    }
    else
    {
        *tris_registers[port]&=_direction;
    }
    return ret;
}
Std_ReturnType gpio_port_get_direction_status(port_index_t port, uint8 * direction_status)
{
    Std_ReturnType ret = E_OK;
    if(direction_status == NULL || port > (MAX_PORT_NO - 1)   )
    {
        ret = E_NOT_OK;
    }
    else
    {
        *direction_status= *tris_registers[port];
    }
    return ret;
}

Std_ReturnType gpio_port_write_logic(port_index_t port,logic_t logic)
{
    Std_ReturnType ret = E_OK;
    if(port > (MAX_PORT_NO - 1)   )
    {
        ret = E_NOT_OK;
    }
    else
    {
        *lat_registers[port]=logic;
    }
    return ret;
}
Std_ReturnType gpio_port_read_logic(port_index_t port,logic_t * logic)
{
   Std_ReturnType ret = E_OK;
    if(logic == NULL ||port > (MAX_PORT_NO - 1)   )
    {
        ret = E_NOT_OK;
    }
    else
    {
        *logic=*port_registers[port];
    }
    return ret; 
}
Std_ReturnType gpio_port_toggle_logic(port_index_t port)
{
    Std_ReturnType ret = E_OK;
    if(port > (MAX_PORT_NO - 1)   )
    {
        ret = E_NOT_OK;
    }
    else
    {
        *lat_registers[port]^=0XFF;
    }
    return ret;
}
Std_ReturnType gpio_port_l_nipple_direction_output(port_index_t port)
{
    Std_ReturnType ret = E_OK;
    if(port > (MAX_PORT_NO - 1)   )
    {
        ret = E_NOT_OK;
    }
    else
    {
        CLEAR_l_nipple(*tris_registers[port]);
    }
    return ret;
}

Std_ReturnType gpio_port_L_nipple_write_value(port_index_t port,uint8 value)
{
    Std_ReturnType ret = E_OK;
    if(port > (MAX_PORT_NO - 1)   )
    {
        ret = E_NOT_OK;
    }
    else
    {
        *lat_registers[port]=(*lat_registers[port]&0XF0)|value;
    }
    return ret;
}
