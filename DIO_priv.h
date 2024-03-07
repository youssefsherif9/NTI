/*
 * registers_Definintion_file.h
 *
 * Created: 3/1/2024 11:16:18 AM
 *  Author: Dell
 */ 
#ifndef REGISTERS_DEFINITION_FILE_H_
#define REGISTERS_DEFINITION_FILE_H_

/***************************** section:macro declarations *********************************/
#include "../mcal_std_types.h"

/***************************** section:macro declarations *********************************/
	/* port registers */
	
#define PORTA ((volatile uint8_t *) (0x3B))
#define PORTB ((volatile uint8_t *) (0x38))
#define PORTC ((volatile uint8_t *) (0x35))
#define PORTD ((volatile uint8_t *) (0x32))

	/* pin registers */
	
#define PINA ((volatile uint8_t *) (0x39))
#define PINB ((volatile uint8_t *) (0x36))
#define PINC ((volatile uint8_t *) (0x33))
#define PIND ((volatile uint8_t *) (0x30))
	
	/* DDR registers */
	
#define DDRA ((volatile uint8_t *) (0x3A))
#define DDRB ((volatile uint8_t *) (0x37))
#define DDRC ((volatile uint8_t *) (0x34))
#define DDRD ((volatile uint8_t *) (0x31))

#endif