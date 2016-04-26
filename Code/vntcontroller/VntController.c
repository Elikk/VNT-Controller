#define F_CPU 4000000

#include <avr/io.h>
#include <util/delay.h>

#include "lcd.h"
#include "GlobalValues.h"
#include "Display.h"
#include "TimersInterupts.h"



// http://www.electroschematics.com/10053/avr-adc/

int main(void)
{
	InitializeLcdScreen(); //Susetupinam lcd
	_delay_ms(100);
	setupTimer();
	_delay_ms(100);
	
	DDRA = 0xFF;  //set a ports as inputs
	

    while(1)
    { 
		if(PINA & 0b00000001 )
		{
			lcd_home();
			lcd_puts("pirmas IF");
		}
		
		if(PINA & 0b10000000)
		{
			lcd_home();
			lcd_puts("antras IF");
		}
	
	
    }
}



