#include<stdint.h>
#include"led.h"

void ledinit(void)
{
    RCC->AHB1ENR |= GPIOAEN;
    GPIOA->MODER |= (1U<<10);
    GPIOA->MODER &= ~(1U<<11);
}

void led_toggle(void)
{
    RCC->AHB1ENR |= GPIOAEN;
}
