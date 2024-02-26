#include <led.h>

void ledinit()
{
    RCC_AHB1EN_R |= 1;
    GPIOA_MODE_R &= ~0x00000C00;
    GPIOA_MODE_R |= 0x00000400;
}

void led_toggle()
{
	GPIOA_OD_R ^= LED_PIN;
}
