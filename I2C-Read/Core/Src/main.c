#include"i2c.h"

int main(void)
{
	char data;
	I2C1_init();
	/* configure PA5 for the green LED (LD2) */
	RCC->AHB1ENR |= 1; /* enable GPIOA clock */
	GPIOA->MODER &= ~0x00000C00; /* clear pin mode */
	GPIOA->MODER |= 0x00000400; /* set
	 pin to output mode */
	while (1)
	{
		I2C1_byteRead(SLAVE_ADDR, 0, &data);

		if (data & 1)
			GPIOA->ODR |= 0x00000020; /* turn on LED */
		else
			GPIOA->ODR &= ~0x00000020; /* turn off LED */
		delayMs(10);
	}
}
