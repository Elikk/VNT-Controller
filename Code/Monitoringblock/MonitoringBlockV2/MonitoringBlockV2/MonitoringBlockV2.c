
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
	//setupTimer();
	//DDRD = 0xFF;  //set d ports as outputs
	//DDRC = 0xFF;  //set c ports as outputs
	
	DDRB = 0xFF;
	DDRA = 0xFF;
	
	PORTB = 0x00;
	PORTA = 0x00;
	//
	//PORTD = 0xFF;
	//PORTC = 0xFF;
	//blink = true;

//long aa=0;
	while(1)
	{

	displayBigBottomRowNumber(getAdcVoltage(ADC_PRESSURE_SENSOR)%1000);


		
	}
	
	
	
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

