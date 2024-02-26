#include "uart.h"
#include <stdio.h>

#define GPIOA5		(1U<<5)
#define LED_PIN		GPIOA5
char key;

int main(void)
{
	uart2_rxtx_init();

	//Enable clock access to GPIOA
	RCC->AHB1ENR |= GPIOAEN;

	//Set PA5 as output pin
	GPIOA->MODER |= (1U<<10);
	GPIOA->MODER &= ~(1U<<11);

	while(1)
	{
		key = uart2_read();
		uart2_write(key);

		if(key == '1')
		{
			GPIOA->ODR |= LED_PIN;
		}
		else
		{
			GPIOA->ODR &= ~LED_PIN;
		}
	}

}




