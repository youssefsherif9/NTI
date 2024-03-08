
/*
 * SEVEN_SEGMENT.C
 *
 * Created: 3/8/2024 11:45:13 AM
 *  Author: Dell
 */ 
#include "SEVEN_SEGMENT_CFG.h"
#include "SEVEN_SEGMENT_Interface.h"
#include <util/delay.h>
void seven_segment_init(){
 DIO_voidSetPinDirection(Data_Port,Data_PIN0,DIO_PIN_OUTPUT);
 DIO_voidSetPinDirection(Data_Port,Data_PIN1,DIO_PIN_OUTPUT);
 DIO_voidSetPinDirection(Data_Port,Data_PIN2,DIO_PIN_OUTPUT);
 DIO_voidSetPinDirection(Data_Port,Data_PIN3,DIO_PIN_OUTPUT);
 
 
 DIO_voidSetPinDirection(E1_PORT,E1_PIN,DIO_PIN_OUTPUT);
 DIO_voidSetPinDirection(E2_PORT,E2_PIN,DIO_PIN_OUTPUT);
 DIO_voidSetPinDirection(E3_PORT,E3_PIN,DIO_PIN_OUTPUT);
 DIO_voidSetPinDirection(E4_PORT,E4_PIN,DIO_PIN_OUTPUT);

 DIO_voidSetPinValue(Data_Port,Data_PIN0,DIO_PIN_HIGH);
 DIO_voidSetPinValue(Data_Port,Data_PIN1,DIO_PIN_HIGH);
 DIO_voidSetPinValue(Data_Port,Data_PIN2,DIO_PIN_HIGH);
 DIO_voidSetPinValue(Data_Port,Data_PIN3,DIO_PIN_HIGH);
 
 DIO_voidSetPinValue(E1_PORT,E1_PIN,DIO_PIN_HIGH);
 DIO_voidSetPinValue(E2_PORT,E2_PIN,DIO_PIN_HIGH);
 DIO_voidSetPinValue(E3_PORT,E3_PIN,DIO_PIN_HIGH);
 DIO_voidSetPinValue(E4_PORT,E4_PIN,DIO_PIN_HIGH);
 }


void seven_segment_1_enable(){
	 DIO_voidSetPinValue(E1_PORT,E1_PIN,DIO_PIN_LOW);
	 DIO_voidSetPinValue(E2_PORT,E2_PIN,DIO_PIN_HIGH);
	 DIO_voidSetPinValue(E3_PORT,E3_PIN,DIO_PIN_HIGH);
	 DIO_voidSetPinValue(E4_PORT,E4_PIN,DIO_PIN_HIGH);
}

void seven_segment_2_enable(){
		 DIO_voidSetPinValue(E1_PORT,E1_PIN,DIO_PIN_HIGH);
		 DIO_voidSetPinValue(E2_PORT,E2_PIN,DIO_PIN_LOW);
		 DIO_voidSetPinValue(E3_PORT,E3_PIN,DIO_PIN_HIGH);
		 DIO_voidSetPinValue(E4_PORT,E4_PIN,DIO_PIN_HIGH);
}
void seven_segment_3_enable(){
		 DIO_voidSetPinValue(E1_PORT,E1_PIN,DIO_PIN_HIGH);
		 DIO_voidSetPinValue(E2_PORT,E2_PIN,DIO_PIN_HIGH);
		 DIO_voidSetPinValue(E3_PORT,E3_PIN,DIO_PIN_LOW);
		 DIO_voidSetPinValue(E4_PORT,E4_PIN,DIO_PIN_HIGH);
}
void seven_segment_4_enable(){
		 DIO_voidSetPinValue(E1_PORT,E1_PIN,DIO_PIN_HIGH);
		 DIO_voidSetPinValue(E2_PORT,E2_PIN,DIO_PIN_HIGH);
		 DIO_voidSetPinValue(E3_PORT,E3_PIN,DIO_PIN_HIGH);
		 DIO_voidSetPinValue(E4_PORT,E4_PIN,DIO_PIN_LOW);
}

void seven_segment_write_zero(){
	DIO_voidSetPinValue(Data_Port,Data_PIN0,DIO_PIN_LOW);
	DIO_voidSetPinValue(Data_Port,Data_PIN1,DIO_PIN_LOW);
	DIO_voidSetPinValue(Data_Port,Data_PIN2,DIO_PIN_LOW);
	DIO_voidSetPinValue(Data_Port,Data_PIN3,DIO_PIN_LOW);
}

void seven_segment_write_one(){
	 DIO_voidSetPinValue(Data_Port,Data_PIN0,DIO_PIN_HIGH);
	 DIO_voidSetPinValue(Data_Port,Data_PIN1,DIO_PIN_LOW);
	 DIO_voidSetPinValue(Data_Port,Data_PIN2,DIO_PIN_LOW);
	 DIO_voidSetPinValue(Data_Port,Data_PIN3,DIO_PIN_LOW);
}

void seven_segment_write_two(){
		 DIO_voidSetPinValue(Data_Port,Data_PIN0,DIO_PIN_LOW);
		 DIO_voidSetPinValue(Data_Port,Data_PIN1,DIO_PIN_HIGH);
		 DIO_voidSetPinValue(Data_Port,Data_PIN2,DIO_PIN_LOW);
		 DIO_voidSetPinValue(Data_Port,Data_PIN3,DIO_PIN_LOW);
}

void seven_segment_write_three(){
		 DIO_voidSetPinValue(Data_Port,Data_PIN0,DIO_PIN_HIGH);
		 DIO_voidSetPinValue(Data_Port,Data_PIN1,DIO_PIN_HIGH);
		 DIO_voidSetPinValue(Data_Port,Data_PIN2,DIO_PIN_LOW);
		 DIO_voidSetPinValue(Data_Port,Data_PIN3,DIO_PIN_LOW);
}

void seven_segment_write_four(){
		 DIO_voidSetPinValue(Data_Port,Data_PIN0,DIO_PIN_LOW);
		 DIO_voidSetPinValue(Data_Port,Data_PIN1,DIO_PIN_LOW);
		 DIO_voidSetPinValue(Data_Port,Data_PIN2,DIO_PIN_HIGH);
		 DIO_voidSetPinValue(Data_Port,Data_PIN3,DIO_PIN_LOW);
}

void seven_segment_write_five(){
		 DIO_voidSetPinValue(Data_Port,Data_PIN0,DIO_PIN_HIGH);
		 DIO_voidSetPinValue(Data_Port,Data_PIN1,DIO_PIN_LOW);
		 DIO_voidSetPinValue(Data_Port,Data_PIN2,DIO_PIN_HIGH);
		 DIO_voidSetPinValue(Data_Port,Data_PIN3,DIO_PIN_LOW);
}

void seven_segment_write_six(){
		 DIO_voidSetPinValue(Data_Port,Data_PIN0,DIO_PIN_LOW);
		 DIO_voidSetPinValue(Data_Port,Data_PIN1,DIO_PIN_HIGH);
		 DIO_voidSetPinValue(Data_Port,Data_PIN2,DIO_PIN_HIGH);
		 DIO_voidSetPinValue(Data_Port,Data_PIN3,DIO_PIN_LOW);
}
void seven_segment_write_seven(){
		 DIO_voidSetPinValue(Data_Port,Data_PIN0,DIO_PIN_HIGH);
		 DIO_voidSetPinValue(Data_Port,Data_PIN1,DIO_PIN_HIGH);
		 DIO_voidSetPinValue(Data_Port,Data_PIN2,DIO_PIN_HIGH);
		 DIO_voidSetPinValue(Data_Port,Data_PIN3,DIO_PIN_LOW);
}

void seven_segment_write_eight(){
		 DIO_voidSetPinValue(Data_Port,Data_PIN0,DIO_PIN_LOW);
		 DIO_voidSetPinValue(Data_Port,Data_PIN1,DIO_PIN_LOW);
		 DIO_voidSetPinValue(Data_Port,Data_PIN2,DIO_PIN_LOW);
		 DIO_voidSetPinValue(Data_Port,Data_PIN3,DIO_PIN_HIGH);
}

void seven_segment_write_nine(){
		 DIO_voidSetPinValue(Data_Port,Data_PIN0,DIO_PIN_HIGH);
		 DIO_voidSetPinValue(Data_Port,Data_PIN1,DIO_PIN_LOW);
		 DIO_voidSetPinValue(Data_Port,Data_PIN2,DIO_PIN_LOW);
		 DIO_voidSetPinValue(Data_Port,Data_PIN3,DIO_PIN_HIGH);
}
void seven_segment_write_number(u16 num){
	u16 temp=0;
	if(num>=0 && num<10){
		seven_segment_1_enable();
		switch (num){
			case(0):
				seven_segment_write_zero();
			    break;
			case(1):
				seven_segment_write_one();
				break;
			
			case(2):
				seven_segment_write_two();
				break;
			
			case(3):
				seven_segment_write_three();
				break;
			case(4):
				seven_segment_write_four();
				break;
			case(5):
				seven_segment_write_five();
				break;
			case(6):
				seven_segment_write_six();
				break;
			case(7):
				seven_segment_write_seven();
				break;
			case(8):
				seven_segment_write_eight();
				break;
			case(9):
				seven_segment_write_nine();
				break;
			
		}
		
	}
	else if(num>=10 && num<100){
		
		temp=num%10;
		num/=10;
		seven_segment_1_enable();
		switch (temp){
			case(0):
			seven_segment_write_zero();
			break;
			case(1):
			seven_segment_write_one();
			break;
			
			case(2):
			seven_segment_write_two();
			break;
			
			case(3):
			seven_segment_write_three();
			break;
			case(4):
			seven_segment_write_four();
			break;
			case(5):
			seven_segment_write_five();
			break;
			case(6):
			seven_segment_write_six();
			break;
			case(7):
			seven_segment_write_seven();
			break;
			case(8):
			seven_segment_write_eight();
			break;
			case(9):
			seven_segment_write_nine();
			break;
}		
		_delay_ms(10);
		temp=num%10;
		seven_segment_2_enable();
		switch (temp){
			case(0):
			seven_segment_write_zero();
			break;
			case(1):
			seven_segment_write_one();
			break;
			
			case(2):
			seven_segment_write_two();
			break;
			
			case(3):
			seven_segment_write_three();
			break;
			case(4):
			seven_segment_write_four();
			break;
			case(5):
			seven_segment_write_five();
			break;
			case(6):
			seven_segment_write_six();
			break;
			case(7):
			seven_segment_write_seven();
			break;
			case(8):
			seven_segment_write_eight();
			break;
			case(9):
			seven_segment_write_nine();
			break;
		}        
		_delay_ms(10);
	}
	else if(num>=100 && num<1000){

		temp=num%10;
		num/=10;
		seven_segment_1_enable();
		switch (temp){
			case(0):
			seven_segment_write_zero();
			break;
			case(1):
			seven_segment_write_one();
			break;
			
			case(2):
			seven_segment_write_two();
			break;
			
			case(3):
			seven_segment_write_three();
			break;
			case(4):
			seven_segment_write_four();
			break;
			case(5):
			seven_segment_write_five();
			break;
			case(6):
			seven_segment_write_six();
			break;
			case(7):
			seven_segment_write_seven();
			break;
			case(8):
			seven_segment_write_eight();
			break;
			case(9):
			seven_segment_write_nine();
			break;
		}
		_delay_ms(10);
		temp = num%10;
		num /= 10;
		seven_segment_2_enable();
		switch (temp){
			case(0):
			seven_segment_write_zero();
			break;
			case(1):
			seven_segment_write_one();
			break;
			
			case(2):
			seven_segment_write_two();
			break;
			
			case(3):
			seven_segment_write_three();
			break;
			case(4):
			seven_segment_write_four();
			break;
			case(5):
			seven_segment_write_five();
			break;
			case(6):
			seven_segment_write_six();
			break;
			case(7):
			seven_segment_write_seven();
			break;
			case(8):
			seven_segment_write_eight();
			break;
			case(9):
			seven_segment_write_nine();
			break;
		}
		_delay_ms(10);
		temp = num%10;
		seven_segment_3_enable();
		switch (temp){
			case(0):
			seven_segment_write_zero();
			break;
			case(1):
			seven_segment_write_one();
			break;
			
			case(2):
			seven_segment_write_two();
			break;
			
			case(3):
			seven_segment_write_three();
			break;
			case(4):
			seven_segment_write_four();
			break;
			case(5):
			seven_segment_write_five();
			break;
			case(6):
			seven_segment_write_six();
			break;
			case(7):
			seven_segment_write_seven();
			break;
			case(8):
			seven_segment_write_eight();
			break;
			case(9):
			seven_segment_write_nine();
			break;
		}
		_delay_ms(10);
	}
	else if(num>=1000 && num<10000){
		temp=num%10;
		num/=10;
		seven_segment_1_enable();
		switch (temp){
			case(0):
			seven_segment_write_zero();
			break;
			case(1):
			seven_segment_write_one();
			break;
			
			case(2):
			seven_segment_write_two();
			break;
			
			case(3):
			seven_segment_write_three();
			break;
			case(4):
			seven_segment_write_four();
			break;
			case(5):
			seven_segment_write_five();
			break;
			case(6):
			seven_segment_write_six();
			break;
			case(7):
			seven_segment_write_seven();
			break;
			case(8):
			seven_segment_write_eight();
			break;
			case(9):
			seven_segment_write_nine();
			break;
		}
		_delay_ms(10);
		temp = num%10;
		num /= 10;
		seven_segment_2_enable();
		switch (temp){
			case(0):
			seven_segment_write_zero();
			break;
			case(1):
			seven_segment_write_one();
			break;
			
			case(2):
			seven_segment_write_two();
			break;
			
			case(3):
			seven_segment_write_three();
			break;
			case(4):
			seven_segment_write_four();
			break;
			case(5):
			seven_segment_write_five();
			break;
			case(6):
			seven_segment_write_six();
			break;
			case(7):
			seven_segment_write_seven();
			break;
			case(8):
			seven_segment_write_eight();
			break;
			case(9):
			seven_segment_write_nine();
			break;
		}
		_delay_ms(10);
		temp =num%10;
		num /= 10;
		seven_segment_3_enable();
		switch (temp){
			case(0):
			seven_segment_write_zero();
			break;
			case(1):
			seven_segment_write_one();
			break;
			
			case(2):
			seven_segment_write_two();
			break;
			
			case(3):
			seven_segment_write_three();
			break;
			case(4):
			seven_segment_write_four();
			break;
			case(5):
			seven_segment_write_five();
			break;
			case(6):
			seven_segment_write_six();
			break;
			case(7):
			seven_segment_write_seven();
			break;
			case(8):
			seven_segment_write_eight();
			break;
			case(9):
			seven_segment_write_nine();
			break;
		}
		_delay_ms(10);
		temp = num%10;
		seven_segment_4_enable();
		switch (temp){
			case(0):
			seven_segment_write_zero();
			break;
			case(1):
			seven_segment_write_one();
			break;
			
			case(2):
			seven_segment_write_two();
			break;
			
			case(3):
			seven_segment_write_three();
			break;
			case(4):
			seven_segment_write_four();
			break;
			case(5):
			seven_segment_write_five();
			break;
			case(6):
			seven_segment_write_six();
			break;
			case(7):
			seven_segment_write_seven();
			break;
			case(8):
			seven_segment_write_eight();
			break;
			case(9):
			seven_segment_write_nine();
			break;
		}
				
}
}