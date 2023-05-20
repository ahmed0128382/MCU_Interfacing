/* 
 * File:   hal_spi.c
 * Author: Mousa
 *
 * Created on May 2, 2023, 10:51 AM
 */

/* ----------------- Includes -----------------*/
#include "hal_spi.h"
/* ----------------- Macro Declarations -----------------*/

/* Enable / Disable  MSSP STATUS REGISTER (SPI MODE)  */

/* ----------------- Macro Functions Declarations -----------------*/

/* ----------------- Data Type Declarations -----------------*/

/*------------- SECTION: Functions Definitions------------------- */
#if MSSP_SPI_INTERRUPT_FEATURE_ENABLE==INTERRUPT_FEATURE_ENABLE
    static void (*SPI_InterruptHandler)(void) = NULL;
#endif

static void MSSP_SPI_Master_Mode_GPIO_PIN_Configurations(const SPI_t *SPI_Inst);
static void MSSP_SPI_Slave_Mode_GPIO_PIN_Configurations(const SPI_t *SPI_Inst);

Std_ReturnType MSSP_SPI_Mode_Initialize(const SPI_t *SPI_Inst)
{
    Std_ReturnType ret = E_OK;
    if(NULL == SPI_Inst){
        ret = E_NOT_OK;
    }
    else{
        /* Disable SPI Module */
        SPI_DISABLE_MODULE();               
        /* Synchronous Serial Port Mode Select bits */
        SSPCON1bits.SSPM = SPI_Inst->spi_mode_select; 
        /* GPIO PIN Configurations */
        if((SPI_Master_mode_clk_F_div_by_4 == SPI_Inst->spi_mode_select)   || 
           (SPI_Master_mode_clk_F_div_by_16 == SPI_Inst->spi_mode_select)  ||
           (SPI_Master_mode_clk_F_div_by_64== SPI_Inst->spi_mode_select)   || 
           (SPI_Master_mode_clk_TMR2_div_by_2== SPI_Inst->spi_mode_select))
        {
            MSSP_SPI_Master_Mode_GPIO_PIN_Configurations(SPI_Inst);
        }
        if((SPI_Slave_mode_clk_SCK_with_SS_Enabled == SPI_Inst->spi_mode_select)   || 
           (SPI_Slave_mode_clk_SCK_with_SS_Disabled == SPI_Inst->spi_mode_select))  
        {
            MSSP_SPI_Slave_Mode_GPIO_PIN_Configurations(SPI_Inst);
        }
        /* Clock Polarity Select */
        SSPCON1bits.CKP = SPI_Inst->spi_config.ClockPolarity;
        /* SPI Sample Select */
        SSPSTATbits.SMP = SPI_Inst->spi_config.SampleSelect;
        /* SPI Clock Select */
         SSPSTATbits.CKE = SPI_Inst->spi_config.ClockSelect;
        /* Configure the interrupt */
        #if MSSP_SPI_INTERRUPT_FEATURE_ENABLE==INTERRUPT_FEATURE_ENABLE
        INTERRUPT_GlobalInterruptEnable();
        INTERRUPT_PeripheralInterruptEnable();
        MSSP_SPI_InterruptEnable();
        MSSP_SPI_InterruptFlagClear();
        #if INTERRUPT_PRIORITY_LEVELS_ENABLE==INTERRUPT_FEATURE_ENABLE 
        if(INTERRUPT_HIGH_PRIORITY == SPI_Inst->priority){ 
            INTERRUPT_GlobalInterruptHighEnable();
            MSSP_SPI_HighPrioritySet(); 
        }
        else if(INTERRUPT_LOW_PRIORITY == SPI_Inst->priority){ 
            INTERRUPT_GlobalInterruptLowEnable();
            MSSP_SPI_LowPrioritySet(); 
        }
        else{ /* Nothing */ }
        #endif
        SPI_InterruptHandler = SPI_Inst->MSSP_SPI_DefaultInterruptHandler;
        #endif
        
        SPI_ENABLE_MODULE();                           /* Enable SPI Module */
    }
    return ret;
}

Std_ReturnType SPI_DeInit(const SPI_t *SPI_Inst)
{
    Std_ReturnType ret = E_OK;
    if(NULL == SPI_Inst){
        ret = E_NOT_OK;
    }
    else{
        SPI_DISABLE_MODULE();
        #if MSSP_SPI_INTERRUPT_FEATURE_ENABLE==INTERRUPT_FEATURE_ENABLE
        MSSP_SPI_InterruptDisable();
        #endif
    }
    return ret;
}
Std_ReturnType SPI_Send_Byte(const SPI_t *SPI_Inst, const uint8 _data)
{
    Std_ReturnType ret = E_OK;
    if(NULL == SPI_Inst){
        ret = E_NOT_OK;
    }
    else{
        SSPBUF = _data;
        while(!(PIR1bits.SSPIF)); /* Waiting to transmit */
        PIR1bits.SSPIF = 0;
    }
    return ret;
}
Std_ReturnType SPI_Read_Byte(const SPI_t *SPI_Inst, uint8 *_data)
{
    Std_ReturnType ret = E_OK;
    if(NULL == SPI_Inst || NULL == _data){
        ret = E_NOT_OK;
    }
    else{
        while(Buffer_Full_Status_Receive_Not_complete == SSPSTATbits.BF); /* Receive not complete, SSPBUF is empty */
        *_data = SSPBUF;            /* data is moved to the variable */
    }
    return ret;
}
Std_ReturnType SPI_Send_Byte_NonBlocking(const SPI_t *SPI_Inst, const uint8 _data)
{
    Std_ReturnType ret = E_OK;
    if(NULL == SPI_Inst){
        ret = E_NOT_OK;
    }
    else{
        
    }
    return ret;
    
}
Std_ReturnType SPI_Read_Byte_NonBlocking(const SPI_t *SPI_Inst, uint8 *_data)
{
    Std_ReturnType ret = E_OK;
    if(NULL == SPI_Inst || NULL == _data){
        ret = E_NOT_OK;
    }
    else{
        
    }
    return ret;
}


static void MSSP_SPI_Master_Mode_GPIO_PIN_Configurations(const SPI_t *SPI_Inst)
{
    pin_config_t SPI_SDO = {.port = PORTC_INDEX, .pin = GPIO_PIN5, .direction = GPIO_DIRECTION_OUTPUT};
    pin_config_t SPI_SDI = {.port = PORTC_INDEX, .pin = GPIO_PIN4, .direction = GPIO_DIRECTION_INPUT};
    pin_config_t SPI_CLK = {.port = PORTC_INDEX, .pin = GPIO_PIN3, .direction = GPIO_DIRECTION_OUTPUT};
    
    gpio_pin_direction_initialize(&SPI_SDO); 
    gpio_pin_direction_initialize(&SPI_SDI);
    gpio_pin_direction_initialize(&SPI_CLK);
}

static void MSSP_SPI_Slave_Mode_GPIO_PIN_Configurations(const SPI_t *SPI_Inst)
{
    pin_config_t SPI_SDO = {.port = PORTC_INDEX, .pin = GPIO_PIN5, .direction = GPIO_DIRECTION_OUTPUT};
    pin_config_t SPI_SDI = {.port = PORTC_INDEX, .pin = GPIO_PIN4, .direction = GPIO_DIRECTION_INPUT};
    pin_config_t SPI_CLK = {.port = PORTC_INDEX, .pin = GPIO_PIN3, .direction = GPIO_DIRECTION_INPUT};
    pin_config_t SPI_SS = {.port = PORTA_INDEX, .pin = GPIO_PIN5, .direction = GPIO_DIRECTION_INPUT};
    
    gpio_pin_direction_initialize(&SPI_SDO); 
    gpio_pin_direction_initialize(&SPI_SDI);
    gpio_pin_direction_initialize(&SPI_CLK); 
    
    if(SPI_Slave_mode_clk_SCK_with_SS_Enabled == SPI_Inst->spi_mode_select){
        gpio_pin_direction_initialize(&SPI_SS);
    }
}

void MSSP_SPI_ISR(void){
#if MSSP_SPI_INTERRUPT_FEATURE_ENABLE==INTERRUPT_FEATURE_ENABLE
    MSSP_SPI_InterruptFlagClear();
    if(SPI_InterruptHandler){
        SPI_InterruptHandler();
    }
#endif
}