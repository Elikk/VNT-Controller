#include "Headers\GlobalValues.h"

int getPedalPosition()
{
	return getADC(ADC_PEDAL);
	
}