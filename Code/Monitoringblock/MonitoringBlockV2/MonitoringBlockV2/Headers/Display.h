/*
 * Display.h
 *
 * Created: 2016.07.13 16:55:39
 *  Author: Joris
 */ 


#ifndef DISPLAY_H_
#define DISPLAY_H_
#include <stdbool.h> 
extern bool blink;
extern int blinked;
void displayTopSmallRowNumber(int numb) ;
void displayBottomSmallRowNumber(int numb);
void displayBigMidlleRowNumber(int numb);
void displayBigTopRowNumber(int numb);
void displayBigBottomRowNumber(int numb);
void displayAllNumbers();

#endif /* DISPLAY_H_ */