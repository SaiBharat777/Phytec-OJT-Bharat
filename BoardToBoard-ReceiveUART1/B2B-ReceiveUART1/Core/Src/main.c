#include "stm32f4xx.h"

void USART1_init(void);
char USART1_read(void);
void LED_blink(int value);
void delayMs(int);

int main(void)
{
    char c;
    RCC->AHB1ENR |= 1; /* enable GPIOA clock */
    GPIOA->MODER &= ~0x00000C00; /* clear pin mode */
    GPIOA->MODER |= 0x00000400; /* set pin to output mode */
    USART1_init(); /* initialize USART1 */
    while (1)
    {
        c = USART1_read(); /* wait for a character received */
        LED_blink(c); /* blink the LED */
    }
}

void USART1_init(void)
{
    RCC->AHB1ENR |= 1; /* Enable GPIOA clock */
    RCC->APB2ENR |= 0x00004000; /* Enable USART1 clock */
    USART1->BRR = 0x008B; /* 115200 baud @ 16 MHz */
    USART1->CR1 = 0x0004; /* enable Rx, 8-bit data */
    USART1->CR2 = 0x0000; /* 1 stop bit */
    USART1->CR3 = 0x0000; /* no flow control */
    USART1->CR1 |= 0x2000; /* enable USART1 */
    /* Configure PA10 for USART1 RX */
    GPIOA->AFR[1] &= ~0x00000F00;
    GPIOA->AFR[1] |= 0x00000700; /* alt7 for USART1 */
    GPIOA->MODER &= ~0x00300000;
    GPIOA->MODER |= 0x00200000; /* enable alternate function for PA10 */
}

char USART1_read(void)
{
    while (!(USART1->SR & 0x0020))
    {
    } // wait until char arrives
    return USART1->DR;
}

void LED_blink(int value)
{
    value %= 16; /* cap the max count at 15 */
    for (; value > 0; value--)
    {
        GPIOA->BSRR = 0x00000020; /* turn on LED */
        delayMs(200);
        GPIOA->BSRR = 0x00200000; /* turn off LED */
        delayMs(200);
    }
    delayMs(800);
}

void delayMs(int n)
{
    int i;
    for (; n > 0; n--)
    for (i = 0; i < 2000; i++);
}
