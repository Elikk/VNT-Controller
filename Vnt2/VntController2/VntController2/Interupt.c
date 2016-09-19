#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdlib.h>
#include <util/delay.h>
#include "Headers\Display.h"
#include "Headers\PressureSensor.h"
#include "Headers\Adc.h"
#include "Headers\GlobalValues.h"
extern volatile short VntPercentage = 50;
volatile short x = 0;
#define F_CPU 8000000

void setupTimer()
{
	cli();
	TCCR1A = 0;
	TCCR1B = 0;
	
	TCCR3A = 0;
	TCCR3B = 0;
	
	OCR1A = 780;//0.1 sekundes

	OCR3A = 3900;

	TCCR1B |=(1<<WGM12);
	TCCR3B |=(1<<WGM32);

	TCCR1B |= (1 << CS10);
	TCCR1B |= (1 << CS12);

	TCCR3B |= (1 << CS30);
	TCCR3B |= (1 << CS32);
	
	TIMSK |= (1 << OCIE1A);
	ETIMSK |= (1 << OCIE3A);
	
	sei();
	
	
}

ISR(TIMER3_COMPA_vect)
{
	//Periferija atvaizdavimas ir t.t.
}


ISR(TIMER1_COMPA_vect)
{
//Valdymas
VNT_ON;
for(int i=0;i<=VntPercentage;i++)
_delay_ms(5);
VNT_OFF;
if(BTN_OK)
VNT_ON;

}


