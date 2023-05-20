/* 
 * File:   hal_eeprom.h
 * Author: Mousa
 *
 * Created on April 17, 2023, 2:42 PM
 */

#ifndef HAL_EEPROM_H
#define	HAL_EEPROM_H


/* ----------------SECTION: INCLUDES----------------------------- */
#include "../mcal_std_types.h"

#include "../../MCAL_Layer/device_config.h"
/*------------ SECTION: Macros Declarations------------------------ */
#define ACCESS_FLASH_PROGRAM_MEMORY                1
#define ACCESS_EEPROM_PROGRAM_MEMORY               0

#define ACCESS_CONFIG_REGISTERS                    1
#define ACCESS_FLASH_EEPROM_MEMORY                 0

#define ALLOW_WRITE_CYCLES_FLASH_EEPROM            1
#define INHIBIT_WRITE_CYCLES_FLASH_EEPROM          0

#define INITIATE_DATA_EEPROM_WRITE_ERASE           1
#define INHIBIT_DATA_EEPROM_WRITE_ERASE            0

#define INITIATE_DATA_EEPROM_Read                  1
#define INHIBIT_DATA_EEPROM_Read                   1


/*--------------- SECTION: Data Type Declarations---------------- */

/*-------------SECTION: Macros Function Declarations-------------- */

/*------------- SECTION: Functions Declarations------------------- */
Std_ReturnType Data_EEPROM_WriteByte(uint16 Adress, uint8 data);
Std_ReturnType Data_EEPROM_ReadByte(uint16 Adress, uint8 *data);


#endif	/* HAL_EEPROM_H */

