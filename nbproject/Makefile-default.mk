#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-default.mk)" "nbproject/Makefile-local-default.mk"
include nbproject/Makefile-local-default.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/PIC_projects.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/PIC_projects.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=-mafrlcsj
else
COMPARISON_BUILD=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=ECU_LAYER/chr_lcd/chr_lcd.c ECU_LAYER/dc_motor/dc_motor.c ECU_LAYER/KEY_PAD/keypad.c ECU_LAYER/LED/ecu_led.c ECU_LAYER/SEV_SEG/sev_seg.c MCAL_Layer/ADC/hal_adc.c MCAL_Layer/CCP/hal_ccp.c MCAL_Layer/EEPROM/hal_eeprom.c MCAL_Layer/GPIO/hal_gpio.c MCAL_Layer/Interrupt/mcal_external_interrupt.c MCAL_Layer/Interrupt/mcal_internal_interrupt.c MCAL_Layer/Interrupt/mcal_interrupt_manager.c MCAL_Layer/Timer0/hal_timr0.c MCAL_Layer/Timer1/hal_timr1.c MCAL_Layer/Timer2/hal_timr2.c MCAL_Layer/Timer3/hal_timr3.c MCAL_Layer/usart/hal_usart.c MCAL_Layer/device_config.c application.c MCAL_Layer/SPI/hal_spi.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/ECU_LAYER/chr_lcd/chr_lcd.p1 ${OBJECTDIR}/ECU_LAYER/dc_motor/dc_motor.p1 ${OBJECTDIR}/ECU_LAYER/KEY_PAD/keypad.p1 ${OBJECTDIR}/ECU_LAYER/LED/ecu_led.p1 ${OBJECTDIR}/ECU_LAYER/SEV_SEG/sev_seg.p1 ${OBJECTDIR}/MCAL_Layer/ADC/hal_adc.p1 ${OBJECTDIR}/MCAL_Layer/CCP/hal_ccp.p1 ${OBJECTDIR}/MCAL_Layer/EEPROM/hal_eeprom.p1 ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.p1 ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_external_interrupt.p1 ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_internal_interrupt.p1 ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_interrupt_manager.p1 ${OBJECTDIR}/MCAL_Layer/Timer0/hal_timr0.p1 ${OBJECTDIR}/MCAL_Layer/Timer1/hal_timr1.p1 ${OBJECTDIR}/MCAL_Layer/Timer2/hal_timr2.p1 ${OBJECTDIR}/MCAL_Layer/Timer3/hal_timr3.p1 ${OBJECTDIR}/MCAL_Layer/usart/hal_usart.p1 ${OBJECTDIR}/MCAL_Layer/device_config.p1 ${OBJECTDIR}/application.p1 ${OBJECTDIR}/MCAL_Layer/SPI/hal_spi.p1
POSSIBLE_DEPFILES=${OBJECTDIR}/ECU_LAYER/chr_lcd/chr_lcd.p1.d ${OBJECTDIR}/ECU_LAYER/dc_motor/dc_motor.p1.d ${OBJECTDIR}/ECU_LAYER/KEY_PAD/keypad.p1.d ${OBJECTDIR}/ECU_LAYER/LED/ecu_led.p1.d ${OBJECTDIR}/ECU_LAYER/SEV_SEG/sev_seg.p1.d ${OBJECTDIR}/MCAL_Layer/ADC/hal_adc.p1.d ${OBJECTDIR}/MCAL_Layer/CCP/hal_ccp.p1.d ${OBJECTDIR}/MCAL_Layer/EEPROM/hal_eeprom.p1.d ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.p1.d ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_external_interrupt.p1.d ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_internal_interrupt.p1.d ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_interrupt_manager.p1.d ${OBJECTDIR}/MCAL_Layer/Timer0/hal_timr0.p1.d ${OBJECTDIR}/MCAL_Layer/Timer1/hal_timr1.p1.d ${OBJECTDIR}/MCAL_Layer/Timer2/hal_timr2.p1.d ${OBJECTDIR}/MCAL_Layer/Timer3/hal_timr3.p1.d ${OBJECTDIR}/MCAL_Layer/usart/hal_usart.p1.d ${OBJECTDIR}/MCAL_Layer/device_config.p1.d ${OBJECTDIR}/application.p1.d ${OBJECTDIR}/MCAL_Layer/SPI/hal_spi.p1.d

# Object Files
OBJECTFILES=${OBJECTDIR}/ECU_LAYER/chr_lcd/chr_lcd.p1 ${OBJECTDIR}/ECU_LAYER/dc_motor/dc_motor.p1 ${OBJECTDIR}/ECU_LAYER/KEY_PAD/keypad.p1 ${OBJECTDIR}/ECU_LAYER/LED/ecu_led.p1 ${OBJECTDIR}/ECU_LAYER/SEV_SEG/sev_seg.p1 ${OBJECTDIR}/MCAL_Layer/ADC/hal_adc.p1 ${OBJECTDIR}/MCAL_Layer/CCP/hal_ccp.p1 ${OBJECTDIR}/MCAL_Layer/EEPROM/hal_eeprom.p1 ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.p1 ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_external_interrupt.p1 ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_internal_interrupt.p1 ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_interrupt_manager.p1 ${OBJECTDIR}/MCAL_Layer/Timer0/hal_timr0.p1 ${OBJECTDIR}/MCAL_Layer/Timer1/hal_timr1.p1 ${OBJECTDIR}/MCAL_Layer/Timer2/hal_timr2.p1 ${OBJECTDIR}/MCAL_Layer/Timer3/hal_timr3.p1 ${OBJECTDIR}/MCAL_Layer/usart/hal_usart.p1 ${OBJECTDIR}/MCAL_Layer/device_config.p1 ${OBJECTDIR}/application.p1 ${OBJECTDIR}/MCAL_Layer/SPI/hal_spi.p1

# Source Files
SOURCEFILES=ECU_LAYER/chr_lcd/chr_lcd.c ECU_LAYER/dc_motor/dc_motor.c ECU_LAYER/KEY_PAD/keypad.c ECU_LAYER/LED/ecu_led.c ECU_LAYER/SEV_SEG/sev_seg.c MCAL_Layer/ADC/hal_adc.c MCAL_Layer/CCP/hal_ccp.c MCAL_Layer/EEPROM/hal_eeprom.c MCAL_Layer/GPIO/hal_gpio.c MCAL_Layer/Interrupt/mcal_external_interrupt.c MCAL_Layer/Interrupt/mcal_internal_interrupt.c MCAL_Layer/Interrupt/mcal_interrupt_manager.c MCAL_Layer/Timer0/hal_timr0.c MCAL_Layer/Timer1/hal_timr1.c MCAL_Layer/Timer2/hal_timr2.c MCAL_Layer/Timer3/hal_timr3.c MCAL_Layer/usart/hal_usart.c MCAL_Layer/device_config.c application.c MCAL_Layer/SPI/hal_spi.c



CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-default.mk ${DISTDIR}/PIC_projects.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=18F4620
# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/ECU_LAYER/chr_lcd/chr_lcd.p1: ECU_LAYER/chr_lcd/chr_lcd.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/ECU_LAYER/chr_lcd" 
	@${RM} ${OBJECTDIR}/ECU_LAYER/chr_lcd/chr_lcd.p1.d 
	@${RM} ${OBJECTDIR}/ECU_LAYER/chr_lcd/chr_lcd.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/ECU_LAYER/chr_lcd/chr_lcd.p1 ECU_LAYER/chr_lcd/chr_lcd.c 
	@-${MV} ${OBJECTDIR}/ECU_LAYER/chr_lcd/chr_lcd.d ${OBJECTDIR}/ECU_LAYER/chr_lcd/chr_lcd.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/ECU_LAYER/chr_lcd/chr_lcd.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/ECU_LAYER/dc_motor/dc_motor.p1: ECU_LAYER/dc_motor/dc_motor.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/ECU_LAYER/dc_motor" 
	@${RM} ${OBJECTDIR}/ECU_LAYER/dc_motor/dc_motor.p1.d 
	@${RM} ${OBJECTDIR}/ECU_LAYER/dc_motor/dc_motor.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/ECU_LAYER/dc_motor/dc_motor.p1 ECU_LAYER/dc_motor/dc_motor.c 
	@-${MV} ${OBJECTDIR}/ECU_LAYER/dc_motor/dc_motor.d ${OBJECTDIR}/ECU_LAYER/dc_motor/dc_motor.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/ECU_LAYER/dc_motor/dc_motor.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/ECU_LAYER/KEY_PAD/keypad.p1: ECU_LAYER/KEY_PAD/keypad.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/ECU_LAYER/KEY_PAD" 
	@${RM} ${OBJECTDIR}/ECU_LAYER/KEY_PAD/keypad.p1.d 
	@${RM} ${OBJECTDIR}/ECU_LAYER/KEY_PAD/keypad.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/ECU_LAYER/KEY_PAD/keypad.p1 ECU_LAYER/KEY_PAD/keypad.c 
	@-${MV} ${OBJECTDIR}/ECU_LAYER/KEY_PAD/keypad.d ${OBJECTDIR}/ECU_LAYER/KEY_PAD/keypad.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/ECU_LAYER/KEY_PAD/keypad.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/ECU_LAYER/LED/ecu_led.p1: ECU_LAYER/LED/ecu_led.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/ECU_LAYER/LED" 
	@${RM} ${OBJECTDIR}/ECU_LAYER/LED/ecu_led.p1.d 
	@${RM} ${OBJECTDIR}/ECU_LAYER/LED/ecu_led.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/ECU_LAYER/LED/ecu_led.p1 ECU_LAYER/LED/ecu_led.c 
	@-${MV} ${OBJECTDIR}/ECU_LAYER/LED/ecu_led.d ${OBJECTDIR}/ECU_LAYER/LED/ecu_led.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/ECU_LAYER/LED/ecu_led.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/ECU_LAYER/SEV_SEG/sev_seg.p1: ECU_LAYER/SEV_SEG/sev_seg.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/ECU_LAYER/SEV_SEG" 
	@${RM} ${OBJECTDIR}/ECU_LAYER/SEV_SEG/sev_seg.p1.d 
	@${RM} ${OBJECTDIR}/ECU_LAYER/SEV_SEG/sev_seg.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/ECU_LAYER/SEV_SEG/sev_seg.p1 ECU_LAYER/SEV_SEG/sev_seg.c 
	@-${MV} ${OBJECTDIR}/ECU_LAYER/SEV_SEG/sev_seg.d ${OBJECTDIR}/ECU_LAYER/SEV_SEG/sev_seg.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/ECU_LAYER/SEV_SEG/sev_seg.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/ADC/hal_adc.p1: MCAL_Layer/ADC/hal_adc.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/ADC" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/ADC/hal_adc.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/ADC/hal_adc.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/ADC/hal_adc.p1 MCAL_Layer/ADC/hal_adc.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/ADC/hal_adc.d ${OBJECTDIR}/MCAL_Layer/ADC/hal_adc.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/ADC/hal_adc.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/CCP/hal_ccp.p1: MCAL_Layer/CCP/hal_ccp.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/CCP" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/CCP/hal_ccp.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/CCP/hal_ccp.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/CCP/hal_ccp.p1 MCAL_Layer/CCP/hal_ccp.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/CCP/hal_ccp.d ${OBJECTDIR}/MCAL_Layer/CCP/hal_ccp.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/CCP/hal_ccp.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/EEPROM/hal_eeprom.p1: MCAL_Layer/EEPROM/hal_eeprom.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/EEPROM" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/EEPROM/hal_eeprom.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/EEPROM/hal_eeprom.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/EEPROM/hal_eeprom.p1 MCAL_Layer/EEPROM/hal_eeprom.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/EEPROM/hal_eeprom.d ${OBJECTDIR}/MCAL_Layer/EEPROM/hal_eeprom.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/EEPROM/hal_eeprom.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.p1: MCAL_Layer/GPIO/hal_gpio.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/GPIO" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.p1 MCAL_Layer/GPIO/hal_gpio.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.d ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_external_interrupt.p1: MCAL_Layer/Interrupt/mcal_external_interrupt.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/Interrupt" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_external_interrupt.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_external_interrupt.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_external_interrupt.p1 MCAL_Layer/Interrupt/mcal_external_interrupt.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_external_interrupt.d ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_external_interrupt.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_external_interrupt.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_internal_interrupt.p1: MCAL_Layer/Interrupt/mcal_internal_interrupt.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/Interrupt" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_internal_interrupt.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_internal_interrupt.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_internal_interrupt.p1 MCAL_Layer/Interrupt/mcal_internal_interrupt.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_internal_interrupt.d ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_internal_interrupt.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_internal_interrupt.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_interrupt_manager.p1: MCAL_Layer/Interrupt/mcal_interrupt_manager.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/Interrupt" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_interrupt_manager.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_interrupt_manager.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_interrupt_manager.p1 MCAL_Layer/Interrupt/mcal_interrupt_manager.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_interrupt_manager.d ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_interrupt_manager.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_interrupt_manager.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/Timer0/hal_timr0.p1: MCAL_Layer/Timer0/hal_timr0.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/Timer0" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Timer0/hal_timr0.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Timer0/hal_timr0.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/Timer0/hal_timr0.p1 MCAL_Layer/Timer0/hal_timr0.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/Timer0/hal_timr0.d ${OBJECTDIR}/MCAL_Layer/Timer0/hal_timr0.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/Timer0/hal_timr0.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/Timer1/hal_timr1.p1: MCAL_Layer/Timer1/hal_timr1.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/Timer1" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Timer1/hal_timr1.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Timer1/hal_timr1.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/Timer1/hal_timr1.p1 MCAL_Layer/Timer1/hal_timr1.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/Timer1/hal_timr1.d ${OBJECTDIR}/MCAL_Layer/Timer1/hal_timr1.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/Timer1/hal_timr1.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/Timer2/hal_timr2.p1: MCAL_Layer/Timer2/hal_timr2.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/Timer2" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Timer2/hal_timr2.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Timer2/hal_timr2.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/Timer2/hal_timr2.p1 MCAL_Layer/Timer2/hal_timr2.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/Timer2/hal_timr2.d ${OBJECTDIR}/MCAL_Layer/Timer2/hal_timr2.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/Timer2/hal_timr2.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/Timer3/hal_timr3.p1: MCAL_Layer/Timer3/hal_timr3.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/Timer3" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Timer3/hal_timr3.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Timer3/hal_timr3.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/Timer3/hal_timr3.p1 MCAL_Layer/Timer3/hal_timr3.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/Timer3/hal_timr3.d ${OBJECTDIR}/MCAL_Layer/Timer3/hal_timr3.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/Timer3/hal_timr3.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/usart/hal_usart.p1: MCAL_Layer/usart/hal_usart.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/usart" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/usart/hal_usart.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/usart/hal_usart.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/usart/hal_usart.p1 MCAL_Layer/usart/hal_usart.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/usart/hal_usart.d ${OBJECTDIR}/MCAL_Layer/usart/hal_usart.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/usart/hal_usart.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/device_config.p1: MCAL_Layer/device_config.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/device_config.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/device_config.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/device_config.p1 MCAL_Layer/device_config.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/device_config.d ${OBJECTDIR}/MCAL_Layer/device_config.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/device_config.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/application.p1: application.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/application.p1.d 
	@${RM} ${OBJECTDIR}/application.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/application.p1 application.c 
	@-${MV} ${OBJECTDIR}/application.d ${OBJECTDIR}/application.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/application.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/SPI/hal_spi.p1: MCAL_Layer/SPI/hal_spi.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/SPI" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/SPI/hal_spi.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/SPI/hal_spi.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1  -mdebugger=none   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/SPI/hal_spi.p1 MCAL_Layer/SPI/hal_spi.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/SPI/hal_spi.d ${OBJECTDIR}/MCAL_Layer/SPI/hal_spi.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/SPI/hal_spi.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
else
${OBJECTDIR}/ECU_LAYER/chr_lcd/chr_lcd.p1: ECU_LAYER/chr_lcd/chr_lcd.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/ECU_LAYER/chr_lcd" 
	@${RM} ${OBJECTDIR}/ECU_LAYER/chr_lcd/chr_lcd.p1.d 
	@${RM} ${OBJECTDIR}/ECU_LAYER/chr_lcd/chr_lcd.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/ECU_LAYER/chr_lcd/chr_lcd.p1 ECU_LAYER/chr_lcd/chr_lcd.c 
	@-${MV} ${OBJECTDIR}/ECU_LAYER/chr_lcd/chr_lcd.d ${OBJECTDIR}/ECU_LAYER/chr_lcd/chr_lcd.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/ECU_LAYER/chr_lcd/chr_lcd.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/ECU_LAYER/dc_motor/dc_motor.p1: ECU_LAYER/dc_motor/dc_motor.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/ECU_LAYER/dc_motor" 
	@${RM} ${OBJECTDIR}/ECU_LAYER/dc_motor/dc_motor.p1.d 
	@${RM} ${OBJECTDIR}/ECU_LAYER/dc_motor/dc_motor.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/ECU_LAYER/dc_motor/dc_motor.p1 ECU_LAYER/dc_motor/dc_motor.c 
	@-${MV} ${OBJECTDIR}/ECU_LAYER/dc_motor/dc_motor.d ${OBJECTDIR}/ECU_LAYER/dc_motor/dc_motor.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/ECU_LAYER/dc_motor/dc_motor.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/ECU_LAYER/KEY_PAD/keypad.p1: ECU_LAYER/KEY_PAD/keypad.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/ECU_LAYER/KEY_PAD" 
	@${RM} ${OBJECTDIR}/ECU_LAYER/KEY_PAD/keypad.p1.d 
	@${RM} ${OBJECTDIR}/ECU_LAYER/KEY_PAD/keypad.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/ECU_LAYER/KEY_PAD/keypad.p1 ECU_LAYER/KEY_PAD/keypad.c 
	@-${MV} ${OBJECTDIR}/ECU_LAYER/KEY_PAD/keypad.d ${OBJECTDIR}/ECU_LAYER/KEY_PAD/keypad.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/ECU_LAYER/KEY_PAD/keypad.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/ECU_LAYER/LED/ecu_led.p1: ECU_LAYER/LED/ecu_led.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/ECU_LAYER/LED" 
	@${RM} ${OBJECTDIR}/ECU_LAYER/LED/ecu_led.p1.d 
	@${RM} ${OBJECTDIR}/ECU_LAYER/LED/ecu_led.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/ECU_LAYER/LED/ecu_led.p1 ECU_LAYER/LED/ecu_led.c 
	@-${MV} ${OBJECTDIR}/ECU_LAYER/LED/ecu_led.d ${OBJECTDIR}/ECU_LAYER/LED/ecu_led.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/ECU_LAYER/LED/ecu_led.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/ECU_LAYER/SEV_SEG/sev_seg.p1: ECU_LAYER/SEV_SEG/sev_seg.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/ECU_LAYER/SEV_SEG" 
	@${RM} ${OBJECTDIR}/ECU_LAYER/SEV_SEG/sev_seg.p1.d 
	@${RM} ${OBJECTDIR}/ECU_LAYER/SEV_SEG/sev_seg.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/ECU_LAYER/SEV_SEG/sev_seg.p1 ECU_LAYER/SEV_SEG/sev_seg.c 
	@-${MV} ${OBJECTDIR}/ECU_LAYER/SEV_SEG/sev_seg.d ${OBJECTDIR}/ECU_LAYER/SEV_SEG/sev_seg.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/ECU_LAYER/SEV_SEG/sev_seg.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/ADC/hal_adc.p1: MCAL_Layer/ADC/hal_adc.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/ADC" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/ADC/hal_adc.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/ADC/hal_adc.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/ADC/hal_adc.p1 MCAL_Layer/ADC/hal_adc.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/ADC/hal_adc.d ${OBJECTDIR}/MCAL_Layer/ADC/hal_adc.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/ADC/hal_adc.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/CCP/hal_ccp.p1: MCAL_Layer/CCP/hal_ccp.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/CCP" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/CCP/hal_ccp.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/CCP/hal_ccp.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/CCP/hal_ccp.p1 MCAL_Layer/CCP/hal_ccp.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/CCP/hal_ccp.d ${OBJECTDIR}/MCAL_Layer/CCP/hal_ccp.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/CCP/hal_ccp.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/EEPROM/hal_eeprom.p1: MCAL_Layer/EEPROM/hal_eeprom.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/EEPROM" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/EEPROM/hal_eeprom.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/EEPROM/hal_eeprom.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/EEPROM/hal_eeprom.p1 MCAL_Layer/EEPROM/hal_eeprom.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/EEPROM/hal_eeprom.d ${OBJECTDIR}/MCAL_Layer/EEPROM/hal_eeprom.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/EEPROM/hal_eeprom.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.p1: MCAL_Layer/GPIO/hal_gpio.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/GPIO" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.p1 MCAL_Layer/GPIO/hal_gpio.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.d ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/GPIO/hal_gpio.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_external_interrupt.p1: MCAL_Layer/Interrupt/mcal_external_interrupt.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/Interrupt" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_external_interrupt.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_external_interrupt.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_external_interrupt.p1 MCAL_Layer/Interrupt/mcal_external_interrupt.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_external_interrupt.d ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_external_interrupt.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_external_interrupt.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_internal_interrupt.p1: MCAL_Layer/Interrupt/mcal_internal_interrupt.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/Interrupt" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_internal_interrupt.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_internal_interrupt.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_internal_interrupt.p1 MCAL_Layer/Interrupt/mcal_internal_interrupt.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_internal_interrupt.d ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_internal_interrupt.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_internal_interrupt.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_interrupt_manager.p1: MCAL_Layer/Interrupt/mcal_interrupt_manager.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/Interrupt" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_interrupt_manager.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_interrupt_manager.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_interrupt_manager.p1 MCAL_Layer/Interrupt/mcal_interrupt_manager.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_interrupt_manager.d ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_interrupt_manager.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/Interrupt/mcal_interrupt_manager.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/Timer0/hal_timr0.p1: MCAL_Layer/Timer0/hal_timr0.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/Timer0" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Timer0/hal_timr0.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Timer0/hal_timr0.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/Timer0/hal_timr0.p1 MCAL_Layer/Timer0/hal_timr0.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/Timer0/hal_timr0.d ${OBJECTDIR}/MCAL_Layer/Timer0/hal_timr0.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/Timer0/hal_timr0.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/Timer1/hal_timr1.p1: MCAL_Layer/Timer1/hal_timr1.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/Timer1" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Timer1/hal_timr1.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Timer1/hal_timr1.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/Timer1/hal_timr1.p1 MCAL_Layer/Timer1/hal_timr1.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/Timer1/hal_timr1.d ${OBJECTDIR}/MCAL_Layer/Timer1/hal_timr1.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/Timer1/hal_timr1.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/Timer2/hal_timr2.p1: MCAL_Layer/Timer2/hal_timr2.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/Timer2" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Timer2/hal_timr2.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Timer2/hal_timr2.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/Timer2/hal_timr2.p1 MCAL_Layer/Timer2/hal_timr2.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/Timer2/hal_timr2.d ${OBJECTDIR}/MCAL_Layer/Timer2/hal_timr2.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/Timer2/hal_timr2.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/Timer3/hal_timr3.p1: MCAL_Layer/Timer3/hal_timr3.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/Timer3" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Timer3/hal_timr3.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/Timer3/hal_timr3.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/Timer3/hal_timr3.p1 MCAL_Layer/Timer3/hal_timr3.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/Timer3/hal_timr3.d ${OBJECTDIR}/MCAL_Layer/Timer3/hal_timr3.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/Timer3/hal_timr3.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/usart/hal_usart.p1: MCAL_Layer/usart/hal_usart.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/usart" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/usart/hal_usart.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/usart/hal_usart.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/usart/hal_usart.p1 MCAL_Layer/usart/hal_usart.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/usart/hal_usart.d ${OBJECTDIR}/MCAL_Layer/usart/hal_usart.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/usart/hal_usart.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/device_config.p1: MCAL_Layer/device_config.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/device_config.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/device_config.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/device_config.p1 MCAL_Layer/device_config.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/device_config.d ${OBJECTDIR}/MCAL_Layer/device_config.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/device_config.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/application.p1: application.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/application.p1.d 
	@${RM} ${OBJECTDIR}/application.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/application.p1 application.c 
	@-${MV} ${OBJECTDIR}/application.d ${OBJECTDIR}/application.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/application.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/MCAL_Layer/SPI/hal_spi.p1: MCAL_Layer/SPI/hal_spi.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}/MCAL_Layer/SPI" 
	@${RM} ${OBJECTDIR}/MCAL_Layer/SPI/hal_spi.p1.d 
	@${RM} ${OBJECTDIR}/MCAL_Layer/SPI/hal_spi.p1 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=$(CND_CONF)  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits $(COMPARISON_BUILD)  -std=c99 -gcoff -mstack=compiled:auto:auto:auto     -o ${OBJECTDIR}/MCAL_Layer/SPI/hal_spi.p1 MCAL_Layer/SPI/hal_spi.c 
	@-${MV} ${OBJECTDIR}/MCAL_Layer/SPI/hal_spi.d ${OBJECTDIR}/MCAL_Layer/SPI/hal_spi.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/MCAL_Layer/SPI/hal_spi.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${DISTDIR}/PIC_projects.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -Wl,-Map=${DISTDIR}/PIC_projects.${IMAGE_TYPE}.map  -D__DEBUG=1  -mdebugger=none  -DXPRJ_default=$(CND_CONF)  -Wl,--defsym=__MPLAB_BUILD=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits -std=c99 -gcoff -mstack=compiled:auto:auto:auto        $(COMPARISON_BUILD) -Wl,--memorysummary,${DISTDIR}/memoryfile.xml -o ${DISTDIR}/PIC_projects.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}     
	@${RM} ${DISTDIR}/PIC_projects.${IMAGE_TYPE}.hex 
	
else
${DISTDIR}/PIC_projects.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -Wl,-Map=${DISTDIR}/PIC_projects.${IMAGE_TYPE}.map  -DXPRJ_default=$(CND_CONF)  -Wl,--defsym=__MPLAB_BUILD=1   -mdfp="${DFP_DIR}/xc8"  -fno-short-double -fno-short-float -memi=wordwrite -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-download -mdefault-config-bits -std=c99 -gcoff -mstack=compiled:auto:auto:auto     $(COMPARISON_BUILD) -Wl,--memorysummary,${DISTDIR}/memoryfile.xml -o ${DISTDIR}/PIC_projects.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}     
	
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${OBJECTDIR}
	${RM} -r ${DISTDIR}

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif