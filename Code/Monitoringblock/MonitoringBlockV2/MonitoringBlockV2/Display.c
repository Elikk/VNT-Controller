#include "Headers/SegmentedSymbols.h"
#include "Headers/GlobalValues.h"
#include <avr/io.h>
#include <stdbool.h> 
#include <util/delay.h>

volatile bool blink = false;
volatile int blinked;

extern int SmallTopNumber ;
extern int SmallBottomNumber ;
extern int BigMiddleNumber ;
extern int BigTopNumber ;
extern int BigBottomNumber ;

int SmallTopNumberCopy;
int SmallBottomNumberCopy ;
int BigMiddleNumberCopy ;
int BigTopNumberCopy ;
int BigBottomNumberCopy ;
#define F_CPU 8000000
#define SEGMENT_DELAY 13
#define BLINK_COUNT 40

void showSegmentSmall(short numb)
{
	
		switch(numb)
		{
		case 1:
			PORTD = SD_1;
			break;
		case 2:
			PORTD = SD_2;
			break;
		case 3:
			PORTD = SD_3;
			break;
		case 4:
			PORTD = SD_4;
			break;
		case 5:
			PORTD = SD_5;
			break;		
		case 6:
			PORTD = SD_6;
			break;
		case 7:
			PORTD = SD_7;
			break;
		case 8:
			PORTD = SD_8;
			break;
		case 9:
			PORTD = SD_9;
			break;
		case 0:
			PORTD = SD_0;
			break;	
	}

	
}
void showSegmentBig(short numb)
{
	
	switch(numb)
	{
		case 1:
		PORTA = BD_1;
		break;
		case 2:
		PORTA = BD_2;
		break;
		case 3:
		PORTA = BD_3;
		break;
		case 4:
		PORTA = BD_4;
		break;
		case 5:
		PORTA = BD_5;
		break;
		case 6:
		PORTA = BD_6;
		break;
		case 7:
		PORTA = BD_7;
		break;
		case 8:
		PORTA = BD_8;
		break;
		case 9:
		PORTA = BD_9;
		break;
		case 0:
		PORTA = BD_0;
		break;
	}

	
}
void displayTopSmallRowNumber( int numb )
{
	if(blink)
	{
		if(blinked>BLINK_COUNT*2)
		{
			PORTD = SD_empty;
			if (blinked>BLINK_COUNT)
			{
				blinked=0;
				return;
			}
			blinked++;
			return;
		}
		
	}		
		
	
	if(numb<0)
	{
		PORTC = 0b11110111; //1x1
		PORTD = SD_minus;
		_delay_ms(SEGMENT_DELAY);
		PORTD=SD_empty;
		numb=numb*-1;
	}
	else
	{
		PORTC = 0b11110111; //1x1
		showSegmentSmall(numb/1000);
		_delay_ms(SEGMENT_DELAY);
		PORTD=SD_empty;
		PORTC = 0xFF;
		numb=numb%1000;
	}
	
	
	showSegmentSmall(numb/100);
	PORTC = 0b01111111;   //1x2
	numb=numb%100;
	_delay_ms(SEGMENT_DELAY);
	PORTD=SD_empty;
	
	showSegmentSmall(numb/10);
	PORTC = 0b11111011;  //1x3
	numb=numb%10;
	_delay_ms(SEGMENT_DELAY);
	PORTD=SD_empty;
	showSegmentSmall(numb/1);
	
	PORTC = 0b10111111; //1x4
	_delay_ms(SEGMENT_DELAY);
	PORTD=SD_empty;
	blinked++;
 }
void displayBottomSmallRowNumber(int numb)
{
	if(blink)
	{
		if(blinked>BLINK_COUNT*2)
		{
			PORTD = SD_empty;
			if (blinked>BLINK_COUNT)
			{
				blinked=0;
				return;
			}
			blinked++;
			return;
		}
		
	}
	
	
	if(numb<0)
	{
		PORTC = 0b11111101; //1x1
		PORTD = SD_minus;
		_delay_ms(SEGMENT_DELAY);
		PORTD=SD_empty;
		numb=numb*-1;
	}
	else
	{
		PORTC = 0b11111101; //2x1
		showSegmentSmall(numb/1000);
		_delay_ms(SEGMENT_DELAY);
		PORTD=SD_empty;
		numb=numb%1000;
	}
	
	
	showSegmentSmall(numb/100);
	PORTC = 0b11011111;   //2x2
	numb=numb%100;
	_delay_ms(SEGMENT_DELAY);
	PORTD=SD_empty;
	
	showSegmentSmall(numb/10);
	PORTC = 0b11111110;  //2x3
	numb=numb%10;
	_delay_ms(SEGMENT_DELAY);
	PORTD=SD_empty;
	
	showSegmentSmall(numb/1);
	PORTC = 0b11101111; //2x4
	_delay_ms(SEGMENT_DELAY);
	PORTD=SD_empty;
	PORTC = 0xFF;
	blinked++;
}
void displayBigMidlleRowNumber(int numb)
{
	if(blink)
	{
		if(blinked>BLINK_COUNT*2)
		{
			PORTD = SD_empty;
			if (blinked>BLINK_COUNT)
			{
				blinked=0;
				return;
			}
			blinked++;
			return;
		}
	}
	
	if(numb<0)
	{
		PORTB = 0b10000000; //1x1
		PORTA = BD_minus;
		_delay_ms(SEGMENT_DELAY);
		PORTA=BD_empty;
		numb=numb*-1;
	}
	else
	{
		PORTB = 0b10000000; //1x1
		showSegmentBig(numb/10);
		_delay_ms(SEGMENT_DELAY);
		PORTA=BD_empty;
		numb=numb%10;
	}
	
	PORTB = 0b00001000;   //1x2
	showSegmentBig(numb/1);
	_delay_ms(SEGMENT_DELAY);
	PORTA=BD_empty;
	
	//showSegmentBig(numb/10);
	//PORTB = 0b11111011;  //1x3
	//numb=numb%10;
	//_delay_ms(SEGMENT_DELAY);
	//PORTA=SD_empty;
	//showSegmentBig(numb/1);
	//
	//PORTB = 0b10111111; //1x4
	//_delay_ms(SEGMENT_DELAY);
	//PORTA=SD_empty;
	blinked++;
}
void displayBigTopRowNumber(int numb)
{
		if(blink)
		{
			if(blinked>BLINK_COUNT*2)
			{
				PORTD = SD_empty;
				if (blinked>BLINK_COUNT)
				{
					blinked=0;
					return;
				}
				blinked++;
				return;
			}
		}
		
		if(numb<0)
		{
			PORTB = 0b01000000; //1x1
			PORTA = BD_minus;
			PORTA|=BD_dot;
			_delay_ms(SEGMENT_DELAY);
			PORTA=BD_empty;
			numb=numb*-1;
		}
		else
		{
			PORTB = 0b01000000; //1x1
			showSegmentBig(numb/100);
			PORTA|=BD_dot;
			_delay_ms(SEGMENT_DELAY);
			PORTA=BD_empty;
			numb=numb%100;
		}
		
		PORTB = 0b00000100;   //1x2
		showSegmentBig(numb/10);
		_delay_ms(SEGMENT_DELAY);
		PORTA=BD_empty;
		numb=numb%10;
		
		showSegmentBig(numb/1);
		PORTB = 0b00100000;  //1x3
		_delay_ms(SEGMENT_DELAY);
		PORTA=SD_empty;
		PORTB=0x00;
		blinked++;
}
void displayBigBottomRowNumber(int numb)
{
	if(blink)
	{
		if(blinked>BLINK_COUNT*2)
		{
			PORTD = SD_empty;
			if (blinked>BLINK_COUNT)
			{
				blinked=0;
				return;
			}
			blinked++;
			return;
		}
	}
	
	if(numb<0)
	{
		PORTB = 0b00000010; //1x1
		PORTA = BD_minus;
		_delay_ms(SEGMENT_DELAY);
		PORTA=BD_empty;
		numb=numb*-1;
	}
	else
	{
		PORTB = 0b00000010; //1x1
		showSegmentBig(numb/100);
		_delay_ms(SEGMENT_DELAY);
		PORTA=BD_empty;
		numb=numb%100;
	}
	
	PORTB = 0b00010000;   //1x2
	showSegmentBig(numb/10);
	PORTA|=BD_dot;
	_delay_ms(SEGMENT_DELAY);
	PORTA=BD_empty;
	numb=numb%10;
	
	showSegmentBig(numb/1);
	PORTB = 0b00000001;  //1x3
	_delay_ms(SEGMENT_DELAY);
	PORTA=SD_empty;
	PORTB=0x00;
	blinked++;
}
void displayAllNumbers()
{
	SmallTopNumberCopy = SmallTopNumber;
	SmallBottomNumberCopy = SmallBottomNumber;
	BigMiddleNumberCopy = BigMiddleNumber;
	BigTopNumberCopy = BigTopNumber;
	BigBottomNumberCopy = BigBottomNumber;
	
//-------------1St Pair----------------
	if(SmallTopNumberCopy<0)
	{
		PORTC = 0b11110111; //1x1
		PORTD = SD_minus;
		SmallTopNumberCopy=SmallTopNumberCopy*-1;
	}
	else
	{
		PORTC = 0b11110111; //1x1
		showSegmentSmall(SmallTopNumberCopy/1000);
		SmallTopNumberCopy=SmallTopNumberCopy%1000;
	}
	
	if(BigMiddleNumberCopy<0)
	{
		PORTB = 0b10000000; //1x1
		PORTA = BD_minus;
		BigMiddleNumberCopy=BigMiddleNumberCopy*-1;
	}
	else
	{
		PORTB = 0b10000000; //1x1
		showSegmentBig(BigMiddleNumberCopy/10);
		BigMiddleNumberCopy=BigMiddleNumberCopy%10;
	}
	_delay_ms(SEGMENT_DELAY);
	PORTA=BD_empty;
	PORTD=SD_empty;
//----------Second pair----------------------------
	
	PORTB = 0b00001000;   //1x2
	showSegmentBig(BigMiddleNumberCopy/1);

	showSegmentSmall(SmallTopNumberCopy/100);
	PORTC = 0b01111111;   //1x2
	
	SmallTopNumberCopy=SmallTopNumberCopy%100;
	_delay_ms(SEGMENT_DELAY);
	PORTD=SD_empty;
	PORTA=BD_empty;
//---------------Third pair-------------------------------	
	showSegmentSmall(SmallTopNumberCopy/10);
	PORTC = 0b11111011;  //1x3
	SmallTopNumberCopy=SmallTopNumberCopy%10;
	
	if(BigTopNumberCopy<0)
	{
		PORTB = 0b01000000; //1x1
		PORTA = BD_minus;
		PORTA|=BD_dot;
		BigTopNumberCopy=BigTopNumberCopy*-1;
	}
	else
	{
		PORTB = 0b01000000; //1x1
		showSegmentBig(BigTopNumberCopy/100);
		PORTA|=BD_dot;
		BigTopNumberCopy=BigTopNumberCopy%100;
	}
	_delay_ms(SEGMENT_DELAY);
	PORTD=SD_empty;
	PORTA=BD_empty;
//-----------------Fourth pair----------------------------------	
	
	
	
	showSegmentSmall(SmallTopNumberCopy/1);
	PORTC = 0b10111111; //1x4
	
	PORTB = 0b00000100;   //1x2
	showSegmentBig(BigTopNumberCopy/10);
	

	BigTopNumberCopy=BigTopNumberCopy%10;
	_delay_ms(SEGMENT_DELAY);
	PORTD=SD_empty;
	PORTA=BD_empty;

//----------------Fifth pair------------------------------
	showSegmentBig(BigTopNumberCopy/1);
	PORTB = 0b00100000;  //1x3

	if(SmallBottomNumberCopy<0)
	{
		PORTC = 0b11111101; //1x1
		PORTD = SD_minus;
		SmallBottomNumberCopy=SmallBottomNumberCopy*-1;
	}
	else
	{
		PORTC = 0b11111101; //2x1
		showSegmentSmall(SmallBottomNumberCopy/1000);
		SmallBottomNumberCopy=SmallBottomNumberCopy%1000;
	}

	_delay_ms(SEGMENT_DELAY);
	PORTA=BD_empty;
	PORTD=SD_empty;

//---------------------Sixth pair-----------------------------------
	showSegmentSmall(SmallBottomNumberCopy/100);
	PORTC = 0b11011111;   //2x2
	SmallBottomNumberCopy=SmallBottomNumberCopy%100;

	if(BigBottomNumberCopy<0)
	{
		PORTB = 0b00000010; //1x1
		PORTA = BD_minus;
		BigBottomNumberCopy=BigBottomNumberCopy*-1;
	}
	else
	{
		PORTB = 0b00000010; //1x1
		showSegmentBig(BigBottomNumberCopy/100);
		BigBottomNumberCopy=BigBottomNumberCopy%100;
	}

	_delay_ms(SEGMENT_DELAY);
	PORTD=SD_empty;
	PORTA=BD_empty;
//----------------Seventh pair--------------------------------------
	showSegmentSmall(SmallBottomNumberCopy/10);
	PORTC = 0b11111110;  //2x3
	SmallBottomNumberCopy=SmallBottomNumberCopy%10;
	
	PORTB = 0b00010000;   //1x2
	showSegmentBig(BigBottomNumberCopy/10);
	PORTA|=BD_dot;
	BigBottomNumberCopy=BigBottomNumberCopy%10;
	
	_delay_ms(SEGMENT_DELAY);
	PORTD=SD_empty;
	PORTA=BD_empty;
//---------------------Eight pair-----------------------------------
	showSegmentSmall(SmallBottomNumberCopy/1);
	PORTC = 0b11101111; //2x4
	
	showSegmentBig(BigBottomNumberCopy/1);
	PORTB = 0b00000001;  //1x3

	_delay_ms(SEGMENT_DELAY);
	PORTD=SD_empty;
	PORTC = 0xFF;
	PORTA=SD_empty;
	PORTB=0x00;
	
//-----------------------------------------------------------------
}









 









