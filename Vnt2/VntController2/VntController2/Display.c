#include "Headers\lcd.h"
#include <avr/io.h>
#include <stdbool.h>
extern bool viewChanged = false;
char buffer[2];
void InitializeLcdScreen()
{
	lcd_init(LCD_DISP_ON);
	lcd_clrscr();
}
void PutPressure(int a)
{
	itoa(a/100,buffer,10);
	lcd_puts(buffer);
	lcd_puts(".");
	itoa(a/10,buffer,10);
	lcd_puts(buffer);
	
	
	
}