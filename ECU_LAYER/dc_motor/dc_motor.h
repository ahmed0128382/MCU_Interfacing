/* 
 * File:   dc_motor.h
 * Author: Mousa
 *
 * Created on April 11, 2023, 4:21 PM
 */

#ifndef DC_MOTOR_H
#define	DC_MOTOR_H

/* ----------------SECTION: INCLUDES----------------------------- */
#include "../../MCAL_Layer/mcal_std_types.h"

#include "../../MCAL_Layer/GPIO/hal_gpio.h"
/*--------------- SECTION: Data Type Declarations---------------- */


/*--------------SECTION: USER DEEFINED DATA TYPES-------------------  */
typedef struct{
    pin_config_t motor_pin[2];
}dc_motor_t;

/*------------ SECTION: Macros Declarations------------------------ */
#define DC_Motor_ON   0x01U
#define DC_Motor_OFF  0x00U

#define dc_motor_pin1 0
#define dc_motor_pin2 1
/*-------------SECTION: Macros Function Declarations-------------- */

/*------------- SECTION: Functions Declarations------------------- */
Std_ReturnType DC_MOTOR_PINS_INITIALIZE(const dc_motor_t *motor_par);
Std_ReturnType DC_MOTOR_move_right(const dc_motor_t *motor_par);
Std_ReturnType DC_MOTOR_move_left(const dc_motor_t *motor_par);
Std_ReturnType DC_MOTOR_stop(const dc_motor_t *motor_par);

#endif	/* DC_MOTOR_H */

