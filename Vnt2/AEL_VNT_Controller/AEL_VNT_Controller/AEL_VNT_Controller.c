/*
 * AEL_VNT_Controller.c
 *
 * Created: 2017.01.05 11:58:12
 *  Author: Joris
 */ 


#include <avr/io.h>
#include "HeaderFiles/TestMap.h"
#include "HeaderFiles/MapPeriferals.h"

int main(void)
{
    while(1)
    {
        //TODO:: Please write your application code 
		volatile int b =0;
		b =GetPressureFromMap(10, 2000);
    }
}