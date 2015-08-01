/* Name: main.c
 * Author: everardo
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0b00100000; //Salida DDRB5
	DDRC = 0b00000000; //ENTRADA DDRC

	PORTB = 0;

   while(1) {

   	if(!(PINC & 0x20)) {
   		PORTB = 0x20;
   	}
   	else {
   		PORTB = 0;	
   	}
   }

}
