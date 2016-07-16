
#include "Headers/Adc.h"
#include "Headers/GlobalValues.h"
float GetPressure()
{
	// Slegio daviklis butinai turi but uzmaitintas 5v lygiai
	return (getAdcVoltage(ADC_PRESSURE_SENSOR) - 0.2) / 0.006429;
}

