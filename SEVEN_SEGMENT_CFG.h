
/*
 * SEVEN_SEGMENT_CFG.h
 *
 * Created: 3/8/2024 11:46:39 AM
 *  Author: Dell
 */ 
#ifndef SEVEN_SEGMENT_CFG_H
#define SEVEN_SEGMENT_CFG_H
#include "../../MCAL/DIO/DIO_interface.h"
#define Data_Port		DIO_PORTB


#define Data_PIN0		DIO_PIN0
#define Data_PIN1		DIO_PIN1
#define Data_PIN2		DIO_PIN2
#define Data_PIN3		DIO_PIN4

#define E1_PIN			DIO_PIN3
#define E2_PIN			DIO_PIN2
#define E3_PIN			DIO_PIN5
#define E4_PIN			DIO_PIN6

#define E1_PORT			DIO_PORTA
#define E2_PORT			DIO_PORTA
#define E3_PORT			DIO_PORTB
#define E4_PORT			DIO_PORTB


#define COMMON COMMON_ANODE



#endif 