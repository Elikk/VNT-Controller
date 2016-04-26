
#include <avr/io.h>

void OpenPressureValve()
{
	PORT_ON(PORTD,5);
}

void ClosePressureValve()
{
	PORT_OFF(PORTD,5);
}