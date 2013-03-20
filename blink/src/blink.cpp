#include <avr/io.h>
#include <JeeLib.h>

ISR(WDT_vect) { Sleepy::watchdogEvent(); }

int
main( void ) {   
	DDRB = 0xFF;
  
	while( 1 ) {
		PORTB = 0x20;
      
      	Sleepy::loseSomeTime(1000);
      
		PORTB = 0x00;
      
      	Sleepy::loseSomeTime(1000);
	}

  return 1;
}
