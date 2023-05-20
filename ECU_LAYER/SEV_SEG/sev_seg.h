/* 
 * File:   sev_seg.h
 * Author: Mousa
 *
 * Created on April 12, 2023, 1:09 PM
 */

#ifndef SEV_SEG_H
#define	SEV_SEG_H



/* ----------------SECTION: INCLUDES----------------------------- */
#include "../../MCAL_Layer/mcal_std_types.h"

#include "../../MCAL_Layer/GPIO/hal_gpio.h"
/*------------ SECTION: Macros Declarations------------------------ */

/*--------------- SECTION: Data Type Declarations---------------- */
typedef enum{
    common_anode,
    common_cathode        
}common_declare_t;
typedef struct{
    pin_config_t segment_pin[4];
    common_declare_t common_incident;
}sev_seg_t;

/*-------------SECTION: Macros Function Declarations-------------- */

/*------------- SECTION: Functions Declarations------------------- */
Std_ReturnType sev_seg_initialize(const sev_seg_t *sev_seg_obj);
Std_ReturnType sev_seg_write_decoded_value_same_port(const sev_seg_t *sev_seg_obj,uint8 value);
#endif	/* SEV_SEG_H */

