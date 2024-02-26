#include"exti.h"
#include"stm32f4xx.h"

void pc13_exti_init(void);

#define LINE13    (1U<<13)
#define GPIOCEN   (1U<<2)
#define SYSCFGEN  (1U<<14)

void pc13_exti_init(void)
{
	/*Disable global variable*/
	__disable_irq();

	/*Enable Cloack access for GPIOC*/
	RCC->AHB1ENR |= GPIOCEN;

	/*Set PC13 as input*/
	GPIOC->MODER &= ~(3U<<26);

	/*Enable clock access for SYSCFGEN*/
	RCC->APB2ENR |= SYSCFGEN;

	/*Select PORTC for EXTI13*/
	SYSCFG->EXTICR[3] |= (1U<<5);

	/*Unmask EXTI13*/
	EXTI->IMR |= (1U<<13);

	/*Select falling edge trigger*/
	EXTI->FTSR |= (1U<<13);

	/*Enable EXTI13 in NVIC*/
	NVIC_EnableIRQ(EXTI15_10_IRQn);

	/*Enable global interrupts*/
	__enable_irq();
}

static void exti_callback(void)
{
	GPIOA->ODR ^=LED;
}


void EXTI15_10_IRQHandler(void) {
	if((EXTI->PR & LINE13)!=0)
	{
		/*Clear PR flag*/
		EXTI->PR |=LINE13;
		//Do something...
		exti_callback();
	}

}
