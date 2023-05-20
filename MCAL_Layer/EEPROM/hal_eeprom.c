/* 
 * File:   hal_eeprom.c
 * Author: Mousa
 *
 * Created on April 17, 2023, 2:42 PM
 */


/* ----------------SECTION: INCLUDES----------------------------- */
#include "hal_eeprom.h"
/*------------ SECTION: Macros Declarations------------------------ */

/*--------------- SECTION: Data Type Declarations---------------- */

/*-------------SECTION: Macros Function Declarations-------------- */

/*------------- SECTION: Functions Definitions------------------- */
Std_ReturnType Data_EEPROM_WriteByte(uint16 Adress, uint8 data)
{
    Std_ReturnType ret = E_OK;
    //update register address
    EEADRH=(uint8)((Adress>>8)&0X03);
    EEADR=(uint8)(Adress);
    //update register data
    EEDATA=data;
    //select to ACCESS_EEPROM_PROGRAM_MEMORY
    EECON1bits.EEPGD=ACCESS_EEPROM_PROGRAM_MEMORY;
    //select to ACCESS_FLASH_EEPROM_MEMORY
    EECON1bits.CFGS=ACCESS_FLASH_EEPROM_MEMORY;
    //select to ALLOW_WRITE_CYCLES_FLASH_EEPROM
    EECON1bits.WREN=ALLOW_WRITE_CYCLES_FLASH_EEPROM;
    // take global interrupt enable status
    uint8 Global_Interrupt_Status=INTCONbits.GIE;
    //disable all interrupts
    INTCONbits.GIE=1;
    //(write the sequence 55h to EECON2, write 0AAh to EECON2
    EECON2=0X55;
    EECON2=0XAA;
    //select to INITIATE_DATA_EEPROM_WRITE_ERASE
    EECON1bits.WR=INITIATE_DATA_EEPROM_WRITE_ERASE;
    //wait till the DATA_EEPROM_WRITE_ERASE is Inhibited
    while(EECON1bits.WR);
    //Inhibit WRITE_CYCLES_FLASH_EEPROM
    EECON1bits.WREN=INHIBIT_WRITE_CYCLES_FLASH_EEPROM;
    // restore global interrupt enable status
    INTCONbits.GIE=Global_Interrupt_Status;
    return ret; 
}
Std_ReturnType Data_EEPROM_ReadByte(uint16 Adress, uint8 *data)
{
    Std_ReturnType ret = E_OK;
    if(NULL == data )
    {
        ret = E_NOT_OK;
    }
    else
    {
        // Data Memory Address to read
        EEADRH=(uint8)((Adress>>8)&0X03);
        EEADR=(uint8)(Adress);
        // Point to DATA memory
        EECON1bits.EEPGD=ACCESS_EEPROM_PROGRAM_MEMORY;
        // Access EEPROM
        EECON1bits.CFGS=ACCESS_FLASH_EEPROM_MEMORY;
        // EEPROM Read
        EECON1bits.RD=INITIATE_DATA_EEPROM_Read;
        NOP();
        NOP();
        // return the data in the addressed memory in EEPROM
        *data=EEDATA;
    }
    return ret; 
}

