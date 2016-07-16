/*
 * Adc.h
 *
 * Created: 2016.07.16 02:41:47
 *  Author: Joris
 */ 

#include <avr/io.h>
#ifndef ADC_H_
#define ADC_H_
int getAdcVoltage(uint8_t adcSignal);
void adcPrepare();




#endif /* ADC_H_ */