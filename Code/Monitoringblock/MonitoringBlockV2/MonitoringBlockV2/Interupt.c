#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdlib.h>
#include "Headers\Display.h"
#include "Headers\PressureSensor.h"
#include "Headers\Adc.h"
#include "Headers\GlobalValues.h"
#define F_CPU 8000000

extern int SmallTopNumber ;
extern int SmallBottomNumber ;
extern int BigMiddleNumber ;
extern int BigTopNumber ;
extern int BigBottomNumber ;


volatile int time=0;
void setupTimer()
{
	cli();
	TCCR1A = 0;
	TCCR1B = 0;
	
	TCCR3A = 0;
	TCCR3B = 0;
	
	OCR1A = 7800;

	OCR3A = 100; 

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
	//SmallTopNumber = (int)getAdcVoltage(ADC_PRESSURE_SENSOR);
	//SmallBottomNumber= time;
	//BigBottomNumber = (int)GetPressure()%1000;
	BigTopNumber = GetPressure();
	//displayTopSmallRowNumber(GetPressure());
	//displayBigTopRowNumber(GetPressure());
	displayAllNumbers();
} 

ISR(TIMER1_COMPA_vect)
{
time++;
}


