/* 
 * File:   sev_seg.c
 * Author: Mousa
 *
 * Created on April 12, 2023, 1:09 PM
 */

/* ----------------SECTION: INCLUDES----------------------------- */
#include "sev_seg.h"

/*------------ SECTION: Macros Declarations------------------------ */

/*--------------- SECTION: Data Type Declarations---------------- */

/*-------------SECTION: Macros Function Declarations-------------- */


/*------------- SECTION: Functions Definitions------------------- */
Std_ReturnType sev_seg_initialize(const sev_seg_t *sev_seg_obj)
{
    Std_ReturnType ret = E_OK;
    if(NULL == sev_seg_obj )
    {
        ret = E_NOT_OK;
    }
    else
    {
        ret|=gpio_pin_initialize(&(sev_seg_obj->segment_pin[0]));
        ret|=gpio_pin_initialize(&(sev_seg_obj->segment_pin[1]));
        ret|=gpio_pin_initialize(&(sev_seg_obj->segment_pin[2]));
        ret|=gpio_pin_initialize(&(sev_seg_obj->segment_pin[3]));
        
    }
    return ret;
}
Std_ReturnType sev_seg_write_decoded_value_same_port(const sev_seg_t *sev_seg_obj,uint8 value)
{
    Std_ReturnType ret = E_OK;
    if(NULL == sev_seg_obj || value > 9 )
    {
        ret = E_NOT_OK;
    }
    else
    {
        gpio_port_L_nipple_write_value(sev_seg_obj->segment_pin[0].port,value);
    }
    return ret;
}
