/*
 * GlobalValues.h
 *
 * Created: 2016.07.16 02:47:10
 *  Author: Joris
 */ 


#ifndef GLOBALVALUES_H_
#define GLOBALVALUES_H_


// Low ir high siuntimas i pinus
#define PORT_ON(port,pin) port |= (1<<pin)
#define PORT_OFF(port,pin) port &= ~(1<<pin)
// Konstantos
#define MAX_PADETIS 80 // maksimali servo padetis procentais
#define MIN_PADETIS 20 // minimali servo padetis procentais
#define PRESSURE_MAXIMUM_BAR 1.5  // maksimalus slegis leidziamas, sparnuote bando reguliuot dar
#define PRESSURE_CRITICAL_BAR 1.7 // maksimalus slegis leidziamas, persokus 1.7 baro isikisa blow off'as


//ADC related                                                                                                                                                                                  
#define ADC_DALIKLIO_DAUGIKLIS 0.0045
#define ADC_KOMPO 0x05 // is kompo ateinantis analoginis signalas PC5
#define ADC_SERVO 0x01 // is servo variklio ateinantis analoginis padeties signalas PC4
#define ADC_PRESSURE_SENSOR 0 // is slegio daviklio isplycintas
#define ADC_VOLTAGE_SUPPLY 1// akumas
#define ADC_TEMP_SENSOR 2
#define ADC_PIROMETER 3
#define ADC_TACHOMETER 4
#define VERSION "V 1.001 15/8/8"
#define HARDVARE "V 1.001 15/11/19"






#endif /* GLOBALVALUES_H_ */