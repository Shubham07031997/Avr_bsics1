#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
int main()
{
 DDRB=0xFF;
 while(1)
 {
    PORTB=PORTB+1;
	_delay_ms(50);
	}
	return 0;
	}
