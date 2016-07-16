
#define F_CPU 8000000
#include <avr/io.h>
#include <util/delay.h>


#include "Headers/Display.h"
#include "Headers/Interupt.h"
#include "Headers/Adc.h"
#include "Headers/GlobalValues.h"

volatile int SmallTopNumber = 0;
volatile int SmallBottomNumber = 0;
volatile int BigMiddleNumber = 0;
volatile int BigTopNumber = 0;
volatile int BigBottomNumber = 0;
extern int time;


// http://www.electroschematics.com/10053/avr-adc/

int main(void)
{


	adcPrepare();
	setupTimer();
	DDRD = 0xFF;  //set d ports as outputs
	DDRC = 0xFF;  //set c ports as outputs
	
	DDRB = 0xFF;
	DDRA = 0xFF;
	
	PORTB = 0x00;
	PORTA = 0x00;
	//
	PORTD = 0xFF;
	PORTC = 0xFF;
	//blink = true;

//long aa=0;
	while(1)
	{


		
	}
	
	
	
	
}

