/*
 * DIO_interface.h
 *
 * Created: 2/2/2024 6:53:04 PM
 *  Author: Kareem Hussein
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_
                             /*************** INCLUDES ***************/

#include "../mcal_std_types.h"

                             /*************** MACROS FOR PORT ***************/
/* macros for port id */
#define DIO_PORTA			    0
#define DIO_PORTB			    1
#define DIO_PORTC			    2
#define DIO_PORTD			    3

/* macros for port direction */
#define DIO_PORT_INPUT          0x00
#define DIO_PORT_OUTPUT			0xff

/* macros for port value */
#define DIO_PORT_LOW            0x00
#define DIO_PORT_HIGH			0xff

                             /*************** MACROS FOR PIN ***************/
/* macros for pin id */
#define DIO_PIN0			    0
#define DIO_PIN1			    1
#define DIO_PIN2			    2
#define DIO_PIN3			    3
#define DIO_PIN4			    4
#define DIO_PIN5			    5
#define DIO_PIN6			    6
#define DIO_PIN7			    7

/* macros for pin direction */
#define DIO_PIN_INPUT           0
#define DIO_PIN_OUTPUT			1

/* macros for pin value */
#define DIO_PIN_LOW             0
#define DIO_PIN_HIGH			1
                             /*************** macro functions ***************/
#define SET_BIT(REG, BIT_POSN)     (REG |= (1<<BIT_POSN))
#define CLEAR_BIT(REG, BIT_POSN)     (REG &= ~(1<<BIT_POSN))
#define TOGGLE_BIT(REG, BIT_POSN)     (REG ^= (1<<BIT_POSN))
#define READ_BIT(REG, BIT_POSN)     ((REG>>BIT_POSN) & 1)

                             /*************** APIS PROTO TYPES ***************/
/* Pin Apis */							
void DIO_voidSetPinDirection            (uint8_t copy_u8PortId, uint8_t copy_u8PinId, uint8_t copy_u8PinDirection);
void DIO_voidSetPinValue                (uint8_t copy_u8PortId, uint8_t copy_u8PinId, uint8_t copy_u8PinValue);
void DIO_voidGetPinValue                (uint8_t copy_u8PortId, uint8_t copy_u8PinId, uint8_t* copy_pu8PinValue);
void DIO_voidTogglePinValue             (uint8_t copy_u8PortId, uint8_t copy_u8PinId);
void DIO_voidActivePinInPullUpResistance(uint8_t copy_u8PortId, uint8_t copy_u8PinId);

/* Port Apis */	
void DIO_voidSetPortDirection            (uint8_t copy_u8PortId, uint8_t copy_u8PortDirection);
void DIO_voidSetPortValue                (uint8_t copy_u8PortId, uint8_t copy_u8PortValue);
void DIO_voidGetPortValue                (uint8_t copy_u8PortId, uint8_t* copy_pu8PortValue);
void DIO_voidTogglePortValue             (uint8_t copy_u8PortId);
void DIO_voidActivePortInPullUpResistance(uint8_t copy_u8PortId);


#endif /* DIO_INTERFACE_H_ */