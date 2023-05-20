/* 
 * File:   keypad.c
 * Author: Mousa
 *
 * Created on April 11, 2023, 5:38 PM
 */


/* ----------------SECTION: INCLUDES----------------------------- */
#include "keypad.h"

/*--------------SECTION: USER DEEFINED DATA TYPES-------------------  */

/*------------ SECTION: Macros Declarations------------------------ */
#define ZERO_INIT 0

/*-------------SECTION: Macros Function Declarations-------------- */

/*------------- SECTION: Functions Declarations------------------- */
//Std_ReturnType keypad_initialize(const keypad_t *kp)
//{
//   Std_ReturnType ret = E_OK;
//   uint8 col_counter=0;
//   uint8 row_counter=0;
//    if(NULL == kp )
//    {
//        ret = E_NOT_OK;
//    }
//    else
//    {
//        for(row_counter=0;row_counter<ECU_KEYPAD_ROWS;row_counter++)
//        {
//            ret|=gpio_pin_direction_initialize(&(kp->keypad_row_pins[row_counter]));
//        }
//        for(col_counter=0;col_counter<ECU_KEYPAD_COLS;col_counter++)
//        {
//            ret|=gpio_pin_direction_initialize(&(kp->keypad_col_pins[col_counter]));
//        }
//        
//        
//    }
//    return ret; 
//}
//#if ZERO_INIT
//Std_ReturnType keypad_get_value(const keypad_t *kp, uint8 *kp_val)
//{
//    Std_ReturnType ret = E_OK;
//    logic_t value = GPIO_LOW;
//    uint8 col_counter=0;
//    uint8 l_counter=0;
//    uint8 row_counter=0;
//    if(NULL == kp )
//    {
//        ret = E_NOT_OK;
//    }
//    else
//    {
//        for(row_counter=0;row_counter<ECU_KEYPAD_ROWS;row_counter++)
//        {
//            for(l_counter=0;l_counter<ECU_KEYPAD_ROWS;l_counter++)
//            {
//               ret|=gpio_pin_write_logic(&(kp->keypad_row_pins[l_counter]),GPIO_LOW); 
//            }
//            ret|=gpio_pin_write_logic(&(kp->keypad_row_pins[row_counter]),GPIO_HIGH);
//            for(col_counter=0;col_counter<ECU_KEYPAD_COLS;col_counter++)
//            {
//               ret|=gpio_pin_read_logic(&(kp->keypad_col_pins[col_counter]),&value); 
//               if(GPIO_HIGH == value)
//               {
//                  *kp_val= keypad_values[row_counter][col_counter];
//               }
//            }
//        }
//    }
//    return ret; 
//}
//#endif
//#if ZERO_INIT
//Std_ReturnType keypad_get_value(const keypad_t *_keypad_obj, uint8 *value){
//    Std_ReturnType ret = E_OK;
//    uint8 l_rows_counter = ZERO_INIT, l_columns_counter = ZERO_INIT, l_counter = ZERO_INIT;
//    logic_t column_logic = ZERO_INIT;
//    if((NULL == _keypad_obj) || (NULL == value)){
//        ret = E_NOT_OK;
//    }
//    else{    
//        for(l_rows_counter=ZERO_INIT; l_rows_counter<ECU_KEYPAD_ROWS; l_rows_counter++){
//            for(l_counter=ZERO_INIT; l_counter<ECU_KEYPAD_ROWS; l_counter++){
//                ret = gpio_pin_write_logic(&(_keypad_obj->keypad_row_pins[l_counter]), GPIO_LOW);
//            }
//            gpio_pin_write_logic(&(_keypad_obj->keypad_row_pins[l_rows_counter]), GPIO_HIGH);
//            __delay_ms(10);
//            for(l_columns_counter=ZERO_INIT; l_columns_counter<ECU_KEYPAD_COLS; l_columns_counter++){
//                ret = gpio_pin_read_logic(&(_keypad_obj->keypad_col_pins[l_columns_counter]), &column_logic);
//                if(GPIO_HIGH == column_logic){
//                    *value = keypad_values[l_rows_counter][l_columns_counter];
//                }
//            }
//        }
//    }
//    return ret;
//}
//#endif
Std_ReturnType keypad_initialize(const keypad_t *keypad_obj)
{
    Std_ReturnType ret= E_OK;
    uint8 row_counter=0;
    uint8 col_counter=0;
    if((NULL == keypad_obj))
    {
        ret=E_NOT_OK;
    }
    else
    {
        for(row_counter=0;row_counter<ECU_KEYPAD_ROWS;row_counter++)
        {
            gpio_pin_direction_initialize(&(keypad_obj->keypad_row_pins[row_counter]));
        }
        for(col_counter=0;col_counter<ECU_KEYPAD_COLS;col_counter++)
        {
            gpio_pin_direction_initialize(&(keypad_obj->keypad_col_pins[col_counter]));
        }
    }
    
    return ret;
}
Std_ReturnType keypad_get_value(const keypad_t *keypad_obj, uint8 *value)
{
    Std_ReturnType ret= E_OK;
    uint8 row_counter=0;
    uint8 col_counter=0;
    uint8 l_counter=0;
    logic_t read_col_logic=GPIO_LOW;
    if((NULL == keypad_obj)|| (NULL == value))
    {
        //*check=GPIO_HIGH;
        ret=E_NOT_OK;
    }
    else
    {
        for(row_counter=0;row_counter<ECU_KEYPAD_ROWS;row_counter++)
        {
            for(l_counter=0;l_counter<ECU_KEYPAD_ROWS;l_counter++)
            {
                gpio_pin_write_logic(&(keypad_obj->keypad_row_pins[l_counter]),GPIO_LOW);
            }
            gpio_pin_write_logic(&(keypad_obj->keypad_row_pins[row_counter]),GPIO_HIGH);
            for(col_counter=0;col_counter<ECU_KEYPAD_COLS;col_counter++)
            {
                gpio_pin_read_logic(&(keypad_obj->keypad_col_pins[col_counter]),&read_col_logic);
                if(GPIO_HIGH == read_col_logic)
                {
                    
                    *value=keypad_values[row_counter][col_counter];
                    
                }
            }
        }
    }
    return ret;
    
}

