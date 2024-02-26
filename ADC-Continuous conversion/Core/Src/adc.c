#include "adc.h"

void pa1_adc_init(void)
{
	/***Configure the ADC GPIO pin ***/
    /*Enable clock access to GPIOA*/
	RCC->AHB1ENR |= GPIOAEN;

	/*Set the mode of PA1 to analog*/
	GPIOA->MODER |= (3U<<2);

	/***Configure the ADC module***/
	/*Enable clock access to ADC */
	RCC->APB2ENR |= ADC1EN;

	/*Conversion sequence start*/
	ADC1->SQR3 |= ADC_CH1;

	/*Conversion sequence length*/
	ADC1->SQR1 |= ADC_SEQ_LEN_1;

	/*Enable ADC module*/
	ADC1->CR2 |= CR2_AD0N;
}


void start_converstion(void)
{
	/*Start adc conversion*/
	ADC1->CR2 |= CR2_SWSTART;
	ADC1->CR2 |= (1U<<1);
}



uint32_t adc_read(void)
{
	/*Wait for conversion to be complete*/
	while(!(ADC1->SR & SR_EOC)){}

	/*Read converted result*/
	return (ADC1->DR);
}
