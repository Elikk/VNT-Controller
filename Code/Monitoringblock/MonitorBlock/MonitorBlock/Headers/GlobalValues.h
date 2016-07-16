
// Low ir high siuntimas i pinus
#define PORT_ON(port,pin) port |= (1<<pin)
#define PORT_OFF(port,pin) port &= ~(1<<pin)
// Konstantos
#define MAX_PADETIS 80 // maksimali servo padetis procentais
#define MIN_PADETIS 20 // minimali servo padetis procentais
#define PRESSURE_MAXIMUM_BAR 1.5  // maksimalus slegis leidziamas, sparnuote bando reguliuot dar
#define PRESSURE_CRITICAL_BAR 1.7 // maksimalus slegis leidziamas, persokus 1.7 baro isikisa blow off'as
//ADC kanalai
#define ADC_KOMPO 0x05 // is kompo ateinantis analoginis signalas PC5
#define ADC_SERVO 0x08 // is servo variklio ateinantis analoginis padeties signalas PC4
#define ADC_PRESSURE_SENSOR 0x10 // is slegio daviklio isplycintas
#define VERSION "V 1.001 16/08/12"
#define HARDVARE "V 1.001 16/08/12"



