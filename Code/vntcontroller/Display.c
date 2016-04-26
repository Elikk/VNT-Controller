#include "lcd.h"
#include <avr/io.h>

void InitializeLcdScreen()
{
	lcd_init(LCD_DISP_ON_CURSOR);
	lcd_clrscr();
}
