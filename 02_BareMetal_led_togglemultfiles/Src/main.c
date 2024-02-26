#include<stdint.h>
#include "led.h"

int main()
{
	ledinit();
	led_toggle();
     while(1)
    {
    	 GPIOA->ODR ^= LED_PIN;
    	 for (int i = 0; i < 100000; i++){}
    }
}
