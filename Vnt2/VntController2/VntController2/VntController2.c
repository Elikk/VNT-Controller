#define F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>
#include <stdbool.h>
#include "Headers/lcd.h"
#include "Headers/GlobalValues.h"
#include "Headers/Display.h"
#include "Headers/Interupt.h"
volatile int  ScreenType ;
volatile  bool ScreenChanged ;
volatile bool Selected = false;

volatile short ScreenPointer = 0;
char buffer[10];


// http://www.electroschematics.com/10053/avr-adc
void startup ()
{
	
	adcPrepare();
	setupTimer();
	InitializeLcdScreen(); 
	lcd_home();
	lcd_puts("#DEDE ready");
	
	//-----------outputs-------------------
		DDRD = 0xFF; //buzzeris kabo
		DDRA = 0x00;// buttons
		PORTA = 0xFF;
		DDRE = 0xFF;//solenoidai...
	_delay_ms(3000);

	if(BTN_OK_LEFT)
	ScreenType = SCREEN_TEST;
	else
	ScreenType = SCREEN_MAIN;
	ScreenChanged = true;
}
void ScreenTest()
{
	if (ScreenChanged)
	{
		lcd_clrscr();
		lcd_home();
		lcd_puts("  FOR TESTING ONLY!");
		lcd_gotoxy(0,1);
		lcd_puts("  Change VNT (   %)");
		lcd_gotoxy(0,2);
		lcd_puts("  Pressure     Bar");
		ScreenChanged = false;
	}
	
	lcd_gotoxy(0,0);
	lcd_puts("  ");
	lcd_gotoxy(0,1);
	lcd_puts("  ");
	lcd_gotoxy(0,2);
	lcd_puts("  ");
	lcd_gotoxy(0,3);
	lcd_puts("  ");
	
	itoa(VntPercentage,buffer,10);
	lcd_gotoxy(14,1);
	lcd_puts("   ");
	lcd_gotoxy(14,1);
	lcd_puts(buffer);
	
	
	
	lcd_gotoxy(11,2);
	lcd_puts("    ");
	lcd_gotoxy(11,2);
	PutPressure();
	lcd_gotoxy(0,ScreenPointer);
		if(Selected)
		{
			lcd_puts("<>");
			if(ScreenPointer==1)
			{
				if(BTN_MINUS)
				VntPercentage--;
				if(BTN_PLUS)
				VntPercentage++;
				if(VntPercentage>100)
				VntPercentage=100;
				if(VntPercentage<0)
				VntPercentage=0;
			}
			if(BTN_OK)
			Selected = false;
			return;
		}
	
	lcd_puts("->");

	
	if (BTN_LEFT)
	ScreenPointer--;
	if (BTN_RIGHT)
	ScreenPointer++;
	if (BTN_OK)
	Selected = true;
	if (ScreenPointer>3)
	ScreenPointer = 3;
	if (ScreenPointer<0)
	ScreenPointer = 0;
}
void ScreenMain()
{
	  lcd_home();
	  lcd_puts("      MAIN SCREEN    ");


		  
	  
}
int main(void)
{
	startup();
	while(1)
	{
			

			switch (ScreenType)
			{
				case SCREEN_MAIN :
				ScreenMain();
				break;
				
				case SCREEN_TEST :
				ScreenTest();
				break;
			}
			_delay_ms(100);
	}

	


}



	////DDRA = 0xFF;  //set a ports as inputs
//
	//lcd_clrscr();
	//lcd_home();
	//lcd_puts("MAP SENSOR: ");
	//lcd_gotoxy(0,1);
	//lcd_puts("Throtle position:");
//
	//while(1)
	//{
		//lcd_gotoxy(11,0);
		//itoa(GetPressure(),buffer,10);
		//lcd_puts(buffer);
		//lcd_gotoxy(0,4);
		//itoa(getADC(ADC_SERVO),buffer,10);
		//lcd_puts(buffer);
		//lcd_gotoxy(10,4);
		//PutPressure();
		//lcd_gotoxy(0,3);
		//
		//
		//
	//}