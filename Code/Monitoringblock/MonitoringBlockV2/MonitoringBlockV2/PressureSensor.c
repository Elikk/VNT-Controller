
#include "Headers/Adc.h"
#include "Headers/GlobalValues.h"
int GetPressure()
{
	// Slegio daviklis butinai turi but uzmaitintas 5v lygiai
	return (int)(((getADC(ADC_PRESSURE_SENSOR)*0.0045)/0.008) -22.2)/1;
}

