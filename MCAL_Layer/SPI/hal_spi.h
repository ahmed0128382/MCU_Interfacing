/* 
 * File:   hal_spi.h
 * Author: Mousa
 *
 * Created on May 2, 2023, 10:51 AM
 */

#ifndef HAL_SPI_H
#define	HAL_SPI_H

/* ----------------- Includes -----------------*/
#include "../../MCAL_Layer/device_config.h"
#include "../mcal_std_types.h"
#include "../../MCAL_Layer/GPIO/hal_gpio.h"
#include "../../MCAL_Layer/Interrupt/mcal_internal_interrupt.h"

/* ----------------- Macro Declarations -----------------*/

/* Enable / Disable  MSSP STATUS REGISTER (SPI MODE) MASTER MODE  */
/* Input data sampled at end of data output time */
#define END_OF_DATA_SAMPLING      1
/* Input data sampled at middle of data output time */
#define MIDDLE_OF_DATA_SAMPLING   0

/* Output data changes on clock transition from active to idle */
#define DATA_ON_CHANGE_ACTIVE_TO_IDLE      1
/* Output data changes on clock transition from idle to active */
#define DATA_ON_CHANGE_IDLE_TO_ACTIVE   0

/* Buffer Full Status Receive complete */
#define Buffer_Full_Status_Receive_complete 1
/* Buffer Full Status Receive not complete */
#define Buffer_Full_Status_Receive_Not_complete 0

/* Clock Polarity Select bit  */
/*  Idle state for clock is a high level  */
#define IDLE_STATE_IS_HIGH   1
/* Idle state for clock is a low level */
#define IDLE_STATE_IS_LOW    0

/*  Synchronous Serial Port Enable bit-->enabling the SPI_MODULE */
/* Check if serial port is enabled */
#define SPI_Module_Is_Enabled   1
/* Check if serial port is disabled */
#define SPI_Module_Is_Disabled  0 

/* SSPCON1_WCOL_bit Write Collision Detect bit (Transmit mode only) */
/* The SSPBUF register is written while it is still transmitting the previous word */
#define Coision_Occured_While_Transmiiting     1
/*  No collision occured */
#define No_Coision_Occured_While_Transmiiting  0

/* SSPCON1_SSPOV_bit : Receive Overflow Indicator bit (Receive mode only) in Slave Mode */
/* A new byte is received while the SSPBUF register is still holding the previous data */
#define Receive_Overfow_Occured      1
/* No_Receive_Overfow_Occured while in slave mode */
#define No_Receive_Overfow_Occured      0


/* ----------------- Macro Functions Declarations -----------------*/
/* Input data sampled at end of data output time with MASTER MODE*/
#define SAMPLE_DATA_AT_END_SPI_MASTER_MODE()  SSPSTATbits.SMP=1
/* Input data sampled at middle of data output time with MASTER MODE*/
#define SAMPLE_DATA_AT_MID_SPI_MASTER_MODE()  (SSPSTATbits.SMP=0)
/* SMP must be cleared when SPI is used in Slave mode */
#define CLEAR_SAMPLE_BIT_SPI_SLAVE_MODE()  (SSPSTATbits.SMP=0)

/* Output data changes on clock transition from active to idle */
#define OUTPUT_DATA_ON_CHANHE_ACTIVE_TO_IDLE (SSPSTATbits.CKE=1)
/* Output data changes on clock transition from idle to active */
#define OUTPUT_DATA_ON_CHANHE_IDLE_TO_ACTIVE (SSPSTATbits.CKE=0)

/* Clock Polarity Select bit  */
/*  Idle state for clock is a high level  */
#define MAKE_IDLE_STATE_IS_HIGH()   (SSPCON1bits_t.CKP=1)
/* Idle state for clock is a low level */
#define MAKE_IDLE_STATE_IS_LOW()   ( SSPCON1bits_t.CKP=0)

/*  Synchronous Serial Port Enable bit-->enabling the SPI_MODULE */
/* Enables serial port */
#define SPI_ENABLE_MODULE()    (SSPCON1bits.SSPEN = 1)
/* Disables serial port */
#define SPI_DISABLE_MODULE()   (SSPCON1bits.SSPEN = 0) 

/* SSPCON1_WCOL_bit Write Collision Detect bit (Transmit mode only) */
/* clear Collision Detect bit */
#define Clear_Coision_Occured_While_Transmiiting()     (SSPCON1bits_t.WCOL=0)

/* SSPCON1_SSPOV_bit : Receive Overflow Indicator bit (Receive mode only) in Slave Mode */
/* Clear Overflow Indicator bit */
#define Clear_Receive_Overfow_bit()      (SSPCON1bits_t.SSPOV=0)
/* ----------------- Data Type Declarations -----------------*/
typedef enum{
    
    SPI_Master_mode_clk_F_div_by_4=0,
    SPI_Master_mode_clk_F_div_by_16,
    SPI_Master_mode_clk_F_div_by_64,        
    SPI_Master_mode_clk_TMR2_div_by_2,
    SPI_Slave_mode_clk_SCK_with_SS_Enabled,
    SPI_Slave_mode_clk_SCK_with_SS_Disabled        
}Spi_Mode_t;

typedef struct{
    uint8 ClockPolarity : 2; /* Clock Polarity Select */
    uint8 SampleSelect : 2;  /* SPI Sample Select */
    uint8 ClockSelect : 2;   /* SPI Clock Select */
    uint8 Reserved : 2;
}SPI_Control_Config;

typedef struct{
    Spi_Mode_t spi_mode_select;
    SPI_Control_Config spi_config;
    #if MSSP_SPI_INTERRUPT_FEATURE_ENABLE==INTERRUPT_FEATURE_ENABLE
    void (*MSSP_SPI_DefaultInterruptHandler)(void);
    interrupt_priority_cfg priority;
    #endif
}SPI_t;
/*------------- SECTION: Functions Declarations------------------- */
Std_ReturnType MSSP_SPI_Mode_Initialize(const SPI_t *SPI_Inst);
Std_ReturnType SPI_DeInit(const SPI_t *SPI_Inst);
Std_ReturnType SPI_Send_Byte(const SPI_t *SPI_Inst, const uint8 _data);
Std_ReturnType SPI_Read_Byte(const SPI_t *SPI_Inst, uint8 *_data);
Std_ReturnType SPI_Send_Byte_NonBlocking(const SPI_t *SPI_Inst, const uint8 _data);
Std_ReturnType SPI_Read_Byte_NonBlocking(const SPI_t *SPI_Inst, uint8 *_data);
#endif	/* HAL_SPI_H */

