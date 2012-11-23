#include <avr/io.h>
#include <util/delay.h>

int
main( void )
{
  DDRB = 0xFF;
  
  while( 1 )
    {
      PORTB = 0x20;
      
      _delay_ms( 5000 );
      
      PORTB = 0x00;
      
      _delay_ms( 5000 );
    }
  
  return 1;
}
