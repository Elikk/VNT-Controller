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
volatile int rev;
volatile int revcount[100];
volatile int x=0;
volatile bool prevPinState = false;
volatile bool curPinState = false;
volatile int time=0;
void setupTimer()
{
	cli();
	TCCR1A = 0;
	TCCR1B = 0;
	
	TCCR3A = 0;
	TCCR3B = 0;
	
	OCR1A = 780;

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
	//BigTopNumber = GetPressure();
	//BigBottomNumber = getBatteryVoltage();
	//displayTopSmallRowNumber(GetPressure());
	//displayBigTopRowNumber(GetPressure());
	
	//SmallTopNumber = getADC(ADC_TACHOMETER);
	//BigTopNumber =GetPressure();
	//BigBottomNumber = getBatteryVoltage();
	//SmallBottomNumber = getPirometerTemp()/67;
	//displayAllNumbers();
	//displayBigTopRowNumber(GetPressure());
	//displayBigBottomRowNumber(getBatteryVoltage());
	//displayTopSmallRowNumber(getADC(ADC_TACHOMETER));
	displayAllNumbers();
	
}

int sumRevcount() 
{
	int sum =0;
	
	for(int i=0; i<100; i++)
	{
		sum = sum + revcount[i];
	}
	return sum*36;
}

ISR(TIMER1_COMPA_vect)
{
//if (PINE==0b01111111)
//{
	//curPinState = true;
//}
//else
//{
	//curPinState = false;
//}
//
//if (prevPinState==false && curPinState==true)
//{
	//rev++;
//}
//time++;
//if (x==100)
//{
	//x=0;
//}
//revcount[x]=rev;
//rev = 0;
//x++;
//prevPinState = curPinState;
	SmallTopNumber = 0;
	BigTopNumber =GetPressure();
	BigBottomNumber = getBatteryVoltage();
	//SmallBottomNumber = getPirometerTemp()/67;
}


