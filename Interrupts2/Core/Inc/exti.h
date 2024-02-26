#include"stm32f4xx.h"

void pc13_exti_init(void);

#define LINE13    (1U<<13)
#define GPIOCEN   (1U<<2)
#define SYSCFGEN  (1U<<14)

#define GPIOAEN	  (1U<<0)
#define PIN5	  (1U<<5)
#define LED		   PIN5

void pc13_exti_init(void);
void EXTI15_10_IRQHandler(void);
