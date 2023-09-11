#include <avr/io.h>
#include <util/delay.h>
 
#define BLINK_INTERVAL 1000
 
int main (void) {
    /* set pin 7 of PORTB for output*/
    DDRB = DDRB | (1 << DDB7);
    
    while(1) {
        /* set pin 7 high to turn led on */
        PORTB = PORTB | (1 << PORTB7);
        _delay_ms(BLINK_INTERVAL);
        
        /* set pin 7 low to turn led off */
        PORTB = PORTB & ~(1 << PORTB7);
        _delay_ms(BLINK_INTERVAL);
    }
}