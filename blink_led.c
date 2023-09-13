#include <avr/io.h>
#include <util/delay.h>
 
#define BLINK_INTERVAL 30
 
int main (void) {

    /* Sets Port B Pin 7 for output */
    DDRB = DDRB | (1 << DDB7);
    
    while(1) {

        /* Set Port B Pin 7 to high to turn led on */
        PORTB = PORTB | (1 << PORTB7);
        _delay_ms(BLINK_INTERVAL);
        
        /* Set Port B Pin 7 to low to turn led off */
        PORTB = PORTB & ~(1 << PORTB7);
        _delay_ms(BLINK_INTERVAL);
    }
}