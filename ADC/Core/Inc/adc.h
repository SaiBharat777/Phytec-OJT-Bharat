#include"stm32f4xx.h"

#define GPIOAEN		    (1U<<0)
#define ADC1EN			(1U<<8)
#define ADC_CH1			(1U<<0)
#define ADC_SEQ_LEN_1	 0x00
#define CR2_AD0N		(1U<<0)
#define CR2_SWSTART		(1U<<30)
#define SR_EOC			(1U<<1)


void pa1_adc_init(void);
void start_converstion(void);
uint32_t adc_read(void);
