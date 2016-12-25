#include "Headers/GlobalValues.h"
#include <avr/io.h>
#include <util/delay.h>
void IncreaseVanePos()
{
	VNT_VAC_ON;
	VNT_CHANGE;
	_delay_ms(30);
	VNT_HOLD;
	
	
}

void DecreaseVanePos()
{
	VNT_VAC_OFF;
	VNT_CHANGE;
	_delay_ms(30);
	VNT_HOLD;
}