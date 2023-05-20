/* 
 * File:   dc_motor.c
 * Author: Mousa
 *
 * Created on April 11, 2023, 4:21 PM
 */

#include "dc_motor.h"



Std_ReturnType DC_MOTOR_PINS_INITIALIZE(const dc_motor_t *motor_par)
{
    Std_ReturnType ret = E_OK;
    if(motor_par == NULL || motor_par->motor_pin[dc_motor_pin1].pin > (MAX_PIN_NO - 1) )
    {
        ret = E_NOT_OK;
    }
    else
    {
        ret|=gpio_pin_direction_initialize(&(motor_par->motor_pin[dc_motor_pin1]));
        ret|=gpio_pin_direction_initialize(&(motor_par->motor_pin[dc_motor_pin2]));
        ret|=gpio_pin_write_logic(&(motor_par->motor_pin[dc_motor_pin1]),GPIO_LOW);
        ret|=gpio_pin_write_logic(&(motor_par->motor_pin[dc_motor_pin2]),GPIO_LOW);
    }
    return ret;
}
Std_ReturnType DC_MOTOR_move_right(const dc_motor_t *motor_par)
{
    Std_ReturnType ret = E_OK;
    if(motor_par == NULL || motor_par->motor_pin[dc_motor_pin1].pin > (MAX_PIN_NO - 1) )
    {
        ret = E_NOT_OK;
    }
    else
    {
        ret|=gpio_pin_write_logic(&(motor_par->motor_pin[dc_motor_pin1]),GPIO_LOW);
        ret|=gpio_pin_write_logic(&(motor_par->motor_pin[dc_motor_pin2]),GPIO_HIGH);
    }
    return ret;
}
Std_ReturnType DC_MOTOR_move_left(const dc_motor_t *motor_par)
{
    Std_ReturnType ret = E_OK;
    if(motor_par == NULL || motor_par->motor_pin[dc_motor_pin1].pin > (MAX_PIN_NO - 1) )
    {
        ret = E_NOT_OK;
    }
    else
    {
        ret|=gpio_pin_write_logic(&(motor_par->motor_pin[dc_motor_pin1]),GPIO_HIGH);
        ret|=gpio_pin_write_logic(&(motor_par->motor_pin[dc_motor_pin2]),GPIO_LOW);
    }
    return ret;
}
Std_ReturnType DC_MOTOR_stop(const dc_motor_t *motor_par)
{
    Std_ReturnType ret = E_OK;
    if(motor_par == NULL || motor_par->motor_pin[dc_motor_pin1].pin > (MAX_PIN_NO - 1) )
    {
        ret = E_NOT_OK;
    }
    else
    {
        ret|=gpio_pin_write_logic(&(motor_par->motor_pin[dc_motor_pin1]),GPIO_LOW);
        ret|=gpio_pin_write_logic(&(motor_par->motor_pin[dc_motor_pin2]),GPIO_LOW);
    }
    return ret;
}