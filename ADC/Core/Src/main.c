#include "adc.h"

int adc_value;

int main(void)
{
	pa1_adc_init();

	while(1)
	{
		start_converstion();

		adc_value = adc_read();

	}
}
