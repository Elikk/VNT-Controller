
#include "Headers/Adc.h"
#include "Headers/GlobalValues.h"
int GetPressure()
{
	// Slegio daviklis butinai turi but uzmaitintas 5v lygiai
	float a=(((getADC(ADC_PRESSURE_SENSOR)*ADC_DALIKLIO_DAUGIKLIS)/0.008) -21.2)/1;
	
	if (a<0)
	return 0;
	else
	return (int)a;
}

