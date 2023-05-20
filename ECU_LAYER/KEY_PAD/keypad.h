/* 
 * File:   keypad.h
 * Author: Mousa
 *
 * Created on April 11, 2023, 5:38 PM
 */

#ifndef KEYPAD_H
#define	KEYPAD_H

/* ----------------SECTION: INCLUDES----------------------------- */
#include "../../MCAL_Layer/GPIO/hal_gpio.h"
/*--------------- SECTION: Data Type Declarations---------------- */


/*------------ SECTION: Macros Declarations------------------------ */
#define ECU_KEYPAD_ROWS 4
#define ECU_KEYPAD_COLS 4
/*--------------- SECTION: VARIABLES---------------- */
uint8 keypad_values[ECU_KEYPAD_ROWS][ECU_KEYPAD_COLS]={
                                                        {'7','8','9','/'},
                                                        {'4','5','6','*'},
                                                        {'1','2','3','-'},
                                                        {'#','0','=','+'}
                                                      };

/*--------------SECTION: USER DEEFINED DATA TYPES-------------------  */
typedef struct{
    pin_config_t keypad_row_pins[ECU_KEYPAD_ROWS];
    pin_config_t keypad_col_pins[ECU_KEYPAD_COLS];
}keypad_t;

/*-------------SECTION: Macros Function Declarations-------------- */

/*------------- SECTION: Functions Declarations------------------- */
Std_ReturnType keypad_initialize(const keypad_t *keypad_obj);
Std_ReturnType keypad_get_value(const keypad_t *keypad_obj, uint8 *value);

#endif	/* KEYPAD_H */

