/* Name: main.c
 * Author: everardo
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0b00100000; //0x20 hex;
	PORTB = 0;

   while(1) {
   	PORTB = 0x20;
   	_delay_ms(1000);
   	PORTB = 0;
   	_delay_ms(1000);
   }

}
