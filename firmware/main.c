/* Name: main.c
 * Author: everardo
 */

#include <avr/io.h>
#include <util/delay.h>


#define MYUBRR 6

int main(void)
{
	UBRR0H = (unsigned char) (MYUBRR >> 8);
	UBRR0L = (unsigned char) (MYUBRR);

	UCSR0B = (1 << RXEN0) | (1 << TXEN0);
	UCSR0C = (1 << UCSZ01) | (1 << UCSZ00); 
	
  while(1)
  {

		DDRB = 0x00;
		PORTB = 0x10;

		if(!(PINB & 0x10)) {
			_delay_ms(500);
  		UDR0 = 'o';
		}
  }
}
