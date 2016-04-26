//
//#include <avr/io.h>
//
//void IncreaseServo()
//{
	//if (GetServoPositionByPercentageAbsolute() < MAX_PADETIS )
	//{
		//PORT_OFF(PORTD,6);
		//PORT_ON(PORTD,7);
	//}
	//else
	//{
		//StopServo();
	//}
//}
//
//void DecreaseServo()
//{
	//if (GetServoPositionByPercentageAbsolute() > MIN_PADETIS )
	//{
		//PORT_OFF(PORTD,7);
		//PORT_ON(PORTD,6);
	//}
	//else
	//{
		//StopServo();
	//}
	//
//}
//
//void StopServo()
//{
	//PORT_OFF(PORTD,7);
	//PORT_OFF(PORTD,6);
//}
//
//void ResetToStart()
//{
	//// klausimas ar reik ir reik suziuret, kada leidziamas, kadangi reikes trackint kada atsistos i vieta
//}
//
//float GetServoPositionByPercentage()
//{
	//float positionServo = (5 / getAdcVoltage(ADC_SERVO))*100;
	//int positionAmplitude = MAX_PADETIS - MIN_PADETIS; 
	//return (( positionServo - MIN_PADETIS ) / positionAmplitude) *100;		
//}
//
//
//float GetServoPositionByVoltage()
//{
	//return getAdcVoltage(ADC_SERVO)*100;
//}
//
//float PositionByPercentageAbsolute()
//{
	//float position = ((5 / getAdcVoltage(ADC_SERVO))*100);
	//return position;
//}
//
