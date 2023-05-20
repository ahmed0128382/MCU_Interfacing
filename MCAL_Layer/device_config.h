/* 
 * File:   device_config.h
 * Author: Mousa
 *
 * Created on April 5, 2023, 3:19 PM
 */

#ifndef DEVICE_CONFIG_H
#define	DEVICE_CONFIG_H

#include "../__at.h"
#include "../proc/pic18f4620.h"
#define _XTAL_FREQ 8000000UL
#define ZERO_INIT 0
#define PORTA PORTA
volatile unsigned char           PORTA               __at(0xF80);
#define PORTC PORTC
volatile unsigned char           PORTC               __at(0xF81);
#define PORTC PORTC
volatile unsigned char           PORTC               __at(0xF82);
#define PORTD PORTD
volatile unsigned char           PORTD               __at(0xF83);
#define PORTE PORTE
volatile unsigned char           PORTE               __at(0xF84);

#define TRISA TRISA
volatile unsigned char           TRISA               __at(0xF92);
#define TRISB TRISB
volatile unsigned char           TRISB               __at(0xF93);
#define TRISC TRISC
volatile unsigned char           TRISC               __at(0xF94);
#define TRISD TRISD
volatile unsigned char           TRISD               __at(0xF95);
#define TRISE TRISE
volatile unsigned char           TRISE               __at(0xF96);


#define LATA LATA
volatile unsigned char           LATA                __at(0xF89);
#define LATB LATB 
volatile unsigned char           LATB                __at(0xF8A);
#define LATC LATC        
volatile unsigned char           LATC                __at(0xF8B);

#endif	/* DEVICE_CONFIG_H */

