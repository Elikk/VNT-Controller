#include "Headers/GlobalValues.h"
#include "Headers/Adc.h"
#define DALIKLIO_KONSTANTA_AKUMO 3.28


int getBatteryVoltage()
{
	return getADC(ADC_VOLTAGE_SUPPLY)*ADC_DALIKLIO_DAUGIKLIS*DALIKLIO_KONSTANTA_AKUMO*10;
}

int getPirometerTemp()
{
	return (getADC(ADC_PIROMETER)*0.0045)*25000;
}	
