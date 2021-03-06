#define MAX_SLEGIS 80  // Matuojamas kpascal
// Low ir high siuntimas i pinus
#define PORT_ON(port,pin) port |= (1<<pin)
#define PORT_OFF(port,pin) port &= ~(1<<pin)
// Konstantos
#define ADC_DALIKLIO_DAUGIKLIS 0.0045
#define MAX_PADETIS 450 // maksimali pedalo padetis 
#define MIN_PADETIS 0 // minimali pedalo padetis 
#define PRESSURE_MAXIMUM_BAR 0.8  // maksimalus slegis leidziamas, sparnuote bando reguliuot dar
#define PRESSURE_CRITICAL_BAR 1.2 // maksimalus slegis leidziamas, persokus 1.2 baro isikisa blow off'as
//ADC kanalai
#define ADC_KOMPO 0x05 // is kompo ateinantis analoginis signalas PC5
#define ADC_PEDAL 0// is servo variklio ateinantis analoginis padeties signalas PC4
#define ADC_PRESSURE_SENSOR 1// is slegio daviklio isplycintas
#define VERSION "V 1.002 16/10/2"
#define HARDVARE "V 1.001 15/11/19"
//BUTTONS
#define BTN_LEFT (PINA == 0b11110111)
#define BTN_RIGHT (PINA == 0b11101111)
#define BTN_MINUS (PINA == 0b10111111)
#define BTN_PLUS (PINA == 0b01111111)
#define BTN_OK (PINA == 0b11011111)
#define BTN_OK_LEFT (PINA == 0b11010111)
//SCREEN TYPES
#define SCREEN_TEST 1
#define SCREEN_MAIN 2
//SOLENOIDS
#define VNT_VAC_ON (PORTD |= (1<<2))
#define VNT_VAC_OFF (PORTD  &= ~(1<<2))
#define VNT_CHANGE (PORTD |= (1<<3))
#define VNT_HOLD (PORTD &= ~(1<<3))