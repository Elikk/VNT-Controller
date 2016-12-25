#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdlib.h>
#include <util/delay.h>
#include "Headers\Display.h"
#include "Headers\PressureSensor.h"
#include "Headers\Adc.h"
#include "Headers\GlobalValues.h"
#include "Headers\PedalSensor.h"
#include "Headers\VacuumControl.h"
extern volatile short VntPercentage = 50;
volatile int pressure ;
volatile int MaxSlegis = 70;
volatile extern int count =0;
extern volatile int peakPressure = 0;
#define F_CPU 8000000

void setupTimer()
{
	cli();
	TCCR1A = 0;
	TCCR1B = 0;
	
	TCCR3A = 0;
	TCCR3B = 0;
	
	OCR1A = 100;//7800 viena sekunde

	OCR3A = 7800;

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
	pressure = GetPressure();
	if(pressure>MAX_SLEGIS || pressure>MaxSlegis)
	{
	DecreaseVanePos();
		return;
	}
	
	if(getPedalPosition()<290)
	{
		DecreaseVanePos();
		return;
	}
	
	if(getPedalPosition()>500)
	{
		if(pressure<MAX_SLEGIS && pressure<MaxSlegis)
		{
			IncreaseVanePos();
			return;
		}
	}
	if (getPedalPosition()>220)
	{
		if(pressure<MAX_SLEGIS/2 || pressure>MaxSlegis/2)
		{
			IncreaseVanePos();
			return;
		}
		else if (pressure>MAX_SLEGIS || pressure>MaxSlegis/2)
		{
			DecreaseVanePos();
			return;
		}
	}
	
	if (peakPressure<pressure)
	{
		peakPressure = pressure;
	}
	if(count>40)
	{
		peakPressure =0;
		count = 0;
	}
	count++;

}


