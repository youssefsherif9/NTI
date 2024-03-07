/*
 * DIO_interface.c
 *
 * Created: 3/1/2024 11:46:10 AM
 *  Author: Dell
 */ 

#include "DIO_interface.h"
#include "DIO_priv.h"

/*Reference to port register*/
volatile uint8_t * port_registers[] = {PORTA,PORTB,PORTC,PORTD};


/*Reference to ddr register*/
volatile uint8_t * DDR_registers[] = {DDRA,DDRB,DDRC,DDRD};

/*Reference to pin register*/
volatile uint8_t * pin_registers[] = {PINA,PINB,PINC,PIND};

void DIO_voidSetPinDirection(uint8_t copy_u8PortId, uint8_t copy_u8PinId, uint8_t copy_u8PinDirection){
	switch(copy_u8PinDirection){
		case DIO_PIN_INPUT:
		 CLEAR_BIT(*(DDR_registers[copy_u8PortId]),copy_u8PinId);
		 break;
		case DIO_PIN_OUTPUT:
		 SET_BIT(*(DDR_registers[copy_u8PortId]),copy_u8PinId);
		 break;
		
		
	}
}
void DIO_voidSetPinValue(uint8_t copy_u8PortId, uint8_t copy_u8PinId, uint8_t copy_u8PinValue){
		switch(copy_u8PinValue){
			case DIO_PIN_LOW:
			 CLEAR_BIT(*(port_registers[copy_u8PortId]),copy_u8PinId);
			 break;
			case DIO_PIN_HIGH:
			 SET_BIT(*(port_registers[copy_u8PortId]),copy_u8PinId);
			 break;
		}
}

void DIO_voidGetPinValue(uint8_t copy_u8PortId, uint8_t copy_u8PinId, uint8_t* copy_pu8PinValue){
   * copy_pu8PinValue = READ_BIT(*(pin_registers[copy_u8PortId]), copy_u8PinId) ;   
}
void DIO_voidTogglePinValue(uint8_t copy_u8PortId, uint8_t copy_u8PinId){
	TOGGLE_BIT(*(port_registers[copy_u8PortId]), copy_u8PinId) ;
}

void DIO_voidActivePinInPullUpResistance(uint8_t copy_u8PortId, uint8_t copy_u8PinId){
		DIO_voidSetPinDirection(copy_u8PortId,copy_u8PinId,DIO_PIN_INPUT);
		DIO_voidSetPinValue(copy_u8PortId,copy_u8PinId,DIO_PIN_HIGH);
}

void DIO_voidSetPortDirection(uint8_t copy_u8PortId, uint8_t copy_u8PortDirection){
	*(DDR_registers[copy_u8PortId]) = copy_u8PortDirection;
}
void DIO_voidSetPortValue(uint8_t copy_u8PortId, uint8_t copy_u8PortValue){
	*(port_registers[copy_u8PortId]) = copy_u8PortValue;
}

void DIO_voidGetPortValue(uint8_t copy_u8PortId, uint8_t* copy_pu8PortValue){
	* copy_pu8PortValue =  *(pin_registers[copy_u8PortId]);
}

void DIO_voidTogglePortValue(uint8_t copy_u8PortId){
	*(port_registers[copy_u8PortId]) ^= 0x11;
}

void DIO_voidActivePortInPullUpResistance(uint8_t copy_u8PortId){
		DIO_voidSetPortDirection(copy_u8PortId, DIO_PORT_INPUT);
		DIO_voidSetPortValue(copy_u8PortId, DIO_PORT_HIGH);
}
