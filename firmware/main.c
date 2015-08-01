/* Name: main.c
 * Author: everardo
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0x20;	//0b00100000 Output DDRB5

	PORTB = 0x10;//0b00010000 Input DDRB4

   while(1) {

   	if(!(PINB & 0x10)) {
   		PORTB |= 0x20;
   	}
   	else {
   		PORTB &= 0xDF; //0b 1101 1111
   	}
   }

}
