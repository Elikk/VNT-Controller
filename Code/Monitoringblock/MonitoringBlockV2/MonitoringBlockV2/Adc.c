#include <avr/io.h>

void adcPrepare()
{
	ADCSRA = (1<<ADEN) | (1<<ADPS2) | (1<<ADPS0);
	// ADEN: Set to turn on ADC , by default it is turned off
	//ADPS2: ADPS2 and ADPS0 set to make division factor 32
}

void adcPrepare2()
{
	ADMUX = 0x00;                                  //Select channel 0
	ADMUX|= (1<<REFS0)|(1<<REFS1);            // select voltage refrence for ADC

	ADCSRA= (1<<ADEN);
	ADCSRA= (1<<ADSC);
	ADCSRA= (1<<ADPS0)|(1<<ADPS1);             //Enable ADC & start 1st
	ADCSRA= (1<<ADFR);
//dummy
//conversion
//Set ADC module prescalar
//to 8 critical for
//accurate ADC results
	while ((ADCSRA & ADIF));                      //Check if conversation is //ready

	ADCSRA |= ADIF;
}

int getAdcVoltage(uint8_t adcSignal)
{
	// Veikimas : paduot reikia is kurio adc kanalo reik perskaityt, apibrezta konstantose
	ADMUX = adcSignal;
	ADCSRA |= (1<<ADSC); // Start conversion
	while (ADCSRA & (1<<ADSC)); // wait for conversion to complete

	return ADC*0.0045*100;
}

int getADC(uint8_t adcSignal)
{
	ADMUX = adcSignal;
	ADCSRA |= (1<<ADSC); // Start conversion
	while (ADCSRA & (1<<ADSC)); // wait for conversion to complete
	return ADC;
}

unsigned int ReadADC(unsigned char channel)
{
	unsigned int binary_weighted_voltage;
	unsigned binary_weighted_voltage_low;
	unsigned int binary_weighted_voltage_high;                  //weighted binary //voltage
	
	ADMUX = channel;               //Select channel
	ADCSRA= (1<<ADEN)|(1<<ADSC)|(1<<ADPS0)|(1<<ADPS1)|(1<<ADFR);      //Start conversion
	//Set ADC module prescalar
	//to 8 critical for
	while(1)
	{                             //accurate ADC results
		while ((ADCSRA & ADIF));                 //Check if converstion is //ready
		ADCSRA |= ADIF;                            //Clear Conv rdy flag - set
		//the bit
		binary_weighted_voltage_low = ADCL;      //Read 8 low bits first
		
		//(important)
		//Read 2 high bits,
		//multiply by 256
		binary_weighted_voltage_high = ((unsigned int)(ADCH << 8));
		binary_weighted_voltage = binary_weighted_voltage_low | binary_weighted_voltage_high;
		return binary_weighted_voltage;                 //ADCH:ADCL
	}}

