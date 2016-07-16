
#define F_CPU 1000000
#include <avr/io.h>
#include <util/delay.h>

#include "Headers\GlobalValues.h"
#include "Headers\Display.h"
#include "Headers/SegmentedSymbols.h"





// http://www.electroschematics.com/10053/avr-adc/

int main(void)
{





		
	displayTopSmallRowNumber();

	
		
		
	//PORTD = SD_8;
//
	//
//
	//
	//PORTC = 0b11110111; //1x1
	//
	//
	//_delay_ms(n);
	//PORTC = 0b01111111;   //1x2
	//PORTD = mychar;
	//_delay_ms(n);
	//PORTC = 0b11111011;  //1x3
	//PORTD = SD_2;
	//_delay_ms(n);
	//PORTC = 0b10111111; //1x4
	//PORTD = SD_3;
	//_delay_ms(n);
	//PORTC = 0b11111101; //2x1
	//PORTD = SD_4;
	//_delay_ms(n);
	//PORTC = 0b11011111;//2x2
	//PORTD = SD_5;
	//_delay_ms(n);
	//PORTC = 0b11111110; //2x3
	//PORTD = SD_6;
	//_delay_ms(n);
	//PORTC = 0b11101111; //2x4
	//PORTD = SD_9;
	//_delay_ms(n);
     
}

void showSegmentSmall(short numb)
{
	

	if (numb == 1)
	{PORTD = SD_1;}
	else if (numb == 2)
	{PORTD = SD_2;}
	else if (numb == 3)
	{PORTD = SD_3;}
	else if (numb == 4)
	{PORTD = SD_4;}
	else if (numb == 5)
	{PORTD = SD_5;}
	else if (numb == 6)
	{PORTD = SD_6;}
	else if (numb == 7)
	{PORTD = SD_7;}
	else if (numb == 8)
	{PORTD = SD_8;}
	else if (numb == 9)
	{PORTD = SD_9;}
	else if (numb == 0)
	{PORTD = SD_0;}
	else
	{PORTD = SD_6;}
	
}
void displayTopSmallRowNumber( )
{
		
	DDRD = 0xFF;  //set d ports as outputs
	DDRC = 0xFF;  //set c ports as outputs

	PORTD = 0xFF;
	PORTC = 0xFF;
	
	//volatile short a=5,b=5,c=6,d=2 ;

	
	//
	PORTC = 0b11110111; //1x1
	showSegmentSmall(2);
	_delay_ms(1);
	//PORTD = SD_empty;
	PORTC = 0b01111111;   //1x2
	_delay_ms(1);
	PORTC = 0b11111011;  //1x3
	_delay_ms(1);
	PORTC = 0b10111111; //1x4
	_delay_ms(1);
	//_delay_ms(1);
	//PORTC = 0b01111111;   //1x2
	//showSegmentSmall(b);
	//
	//_delay_ms(4);
	//PORTC = 0b11111011;  //1x3
	//showSegmentSmall(c);
	//
	//_delay_ms(2);
	//PORTC = 0b10111111; //1x4
	//showSegmentSmall(d);
	//_delay_ms(3);
	//
	//PORTD = getSegmentByNumber(a/100);
	//
	//
	//
	//PORTD = getSegmentByNumber(a/10);
	//
	//
	//PORTD = getSegmentByNumber(a/1);
//}
 }


 


