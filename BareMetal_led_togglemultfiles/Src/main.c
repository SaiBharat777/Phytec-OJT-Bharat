#include "led.h"

int main()
{
	ledinit();
     while(1)
    {
        //GPIOA_OD_R ^= LED_PIN;
    	led_toggle();
        for (int i = 0; i < 100000; i++){}
    }
}
