#include <avr/io.h>

void adcPrepare()
{
	////DDRD=0xff; // Set Port D as Output
	////PORTD = 0x00;
	ADCSRA = (1<<ADEN) | (1<<ADPS2) | (1<<ADPS0);
	// ADEN: Set to turn on ADC , by default it is turned off
	//ADPS2: ADPS2 and ADPS0 set to make division factor 32
}

float getAdcVoltage(uint8_t adcSignal)
{unsigned int value;
	// Veikimas : paduot reikia is kurio adc kanalo reik perskaityt, apibrezta konstantose
	ADMUX = adcSignal;
	ADCSRA |= (1<<ADSC); // Start conversion
	while (ADCSRA & (1<<ADSC)); // wait for conversion to complete
	value = ADCW;
	return value;
}