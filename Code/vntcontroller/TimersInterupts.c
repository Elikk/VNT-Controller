#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdlib.h>
#include "Display.h"
#include "lcd.h"
#include "GlobalValues.h"


int counter = 0;

void setupTimer()
{
	
	cli();
	TCCR1A = 0;
	TCCR1B = 0;
	
	OCR1A = 200;
	
	TCCR1B |=(1<<WGM12);
	
	TCCR1B |= (1 << CS10);
	TCCR1B |= (1 << CS12);
	
	TIMSK |= (1 << OCIE1A);
	sei();
	
	

	
}

	ISR(TIMER1_COMPA_vect)
	{
		
		lcd_gotoxy(2,2);
		char numb[5];
		itoa(counter, numb, 10);
		
		
			lcd_puts(numb );
		
		
		counter++;
		
		lcd_home();

		
		
	}