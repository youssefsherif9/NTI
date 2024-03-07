
/*
 * LCD_Interface.h
 *
 * Created: 3/6/2024 5:29:02 PM
 *  Author: Dell
 */ 
#ifndef		LCD_INTERFACE_H
#define		LCD_INTERFACE_H

#include "LCD_CFG.h"

#define Clear_Display_Screen					0X01

#define Return_Home								0X02

// LCD Entry Mode Set Instructions
#define Shift_Cursor_Left_Per_Read_Write		0X04
#define Shift_Cursor_Right_Per_Read_Write		0X06
#define Shift_Display_Right_Per_Read_Write		0X05
#define Shift_Display_Left_Per_Read_Write 		0X07

#define Display_Cursor_Blink_All_OFF			0X08
#define Display_Cursor_OFF_Blink_ON				0X09
#define Display_Blink_OFF_Cursor_ON				0X0A
#define Display_OFF_Cursor_Blink_ON				0X0B
#define Display_ON_Cursor_Blink_OFF				0X0C
#define Display_Blink_ON_Cursor_OFF				0X0D
#define Display_Cursor_ON_Blink_OFF				0X0E
#define Display_Cursor_Blink_All_ON				0X0F

#define Shift_Cursor_Position_Left				0X10
#define Shift_Cursor_Position_Right				0X14
#define Shift_Entire_Display_Left				0X18
#define Shift_Entire_Display_Right				0X1C

// LCD Function Set Instructions
#define LCD_4_Bit_Mode_1_Line_5_8_Dots			0X20
#define LCD_4_Bit_Mode_2_Line_5_8_Dots			0X28

#define LCD_8_Bit_Mode_1_Line_5_8_Dots			0X30
#define LCD_8_Bit_Mode_2_Line_5_8_Dots			0X38

#define CGRAM_First_Address_First_Character		0X40

#define DDRAM_Cursor_Begin_1st_Line				0X00
#define DDRAM_Cursor_Begin_2nd_Line				0X40
#define DDRAM_Cursor_Begin_3rd_Line				0X14
#define DDRAM_Cursor_Begin_4th_Line				0X54




void LCD_voidInit(void);

void LCD_voidWriteData(uint8_t copy_u8data);

void LCD_voidWriteCommand(uint8_t copy_u8Command);



void LCD_voidWriteString(uint8_t * copy_str);

void LCD_voidGoToXY(uint8_t copy_u8Row,uint8_t copy_u8Col);

void LCD_voidClear(void);

void LCD_voidWriteNumber( uint32_t Copy_u8num );


void LCD_voidWriteSpecialCharToCGRAM(uint8_t * copy_u8data , uint8_t copy_u8ByteNum );

void LCD_voidDisplaySpecialChar(uint8_t copy_u8ByteNum,uint8_t row,uint8_t col ) ;






#endif