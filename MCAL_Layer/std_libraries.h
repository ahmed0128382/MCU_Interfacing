/* 
 * File:   std_libraries.h
 * Author: Mousa
 *
 * Created on April 5, 2023, 3:05 PM
 */

#ifndef STD_LIBRARIES_H
#define	STD_LIBRARIES_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef unsigned char uint8;
typedef signed char sint8;
typedef unsigned short int uint16;
typedef signed short int sint16;
typedef unsigned long int uint32;
typedef signed long int sint32;
typedef float float32;

typedef uint8 Std_ReturnType;

#define E_OK     (Std_ReturnType)0x01
#define E_NOT_OK (Std_ReturnType)0x00






#endif	/* STD_LIBRARIES_H */

