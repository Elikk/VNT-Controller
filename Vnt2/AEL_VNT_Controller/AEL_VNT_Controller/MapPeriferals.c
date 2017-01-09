#include "HeaderFiles/TestMap.h"

int GetPressureFromMap(int pedalPos, int rpm)
{
	if (rpm % 100 > 49) 
		rpm = rpm+100;
	
	rpm = (rpm/100)-9;
	pedalPos = (pedalPos/5);

return TestMapA[rpm][pedalPos];
}