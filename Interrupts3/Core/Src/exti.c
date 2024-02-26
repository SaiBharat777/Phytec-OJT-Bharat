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
		for(uint32_t j = 0; j < 500000; j++){}
		//Do something...
		exti_callback();

	}

}





static void uart_set_baudrate(USART_TypeDef *USARTx, uint32_t PeriphClk,  uint32_t BaudRate);
static uint16_t compute_uart_bd(uint32_t PeriphClk, uint32_t BaudRate);

void uart2_init(void)
{

	/****************Configure uart gpio pin***************/
		/*Enable clock access to gpioa */
		RCC->AHB1ENR |= GPIOAEN;

		/*Set PA2 mode to alternate function mode*/
		GPIOA->MODER  |= PA2MOD;

		/*Set PA2 alternate function type to UART_TX (AF07)*/
        GPIOA->AFR[0] |= PA2AF;

		/****************Configure uart module ***************/
		/*Enable clock access to uart2 */
         RCC->APB1ENR |= APB1EN;

		/*Configure baudrate*/
		uart_set_baudrate(USART2,APB1_CLK,UART_BAUDRATE);
		//USART2->BRR = ((APB1_CLK + (BaudRate/2U))/BaudRate) ;

		/*Configure the transfer direction*/
		USART2->CR1 = USART2_TX;

		/*Enable uart module*/
        USART2->CR1 |= USART2EN;

}


static void uart_set_baudrate(USART_TypeDef *USARTx, uint32_t PeriphClk,  uint32_t BaudRate)
{
	USARTx->BRR =  compute_uart_bd(PeriphClk,BaudRate);
}

static uint16_t compute_uart_bd(uint32_t PeriphClk, uint32_t BaudRate)
{
	return ((PeriphClk + (BaudRate/2U))/BaudRate);
}


void uart2_write(int ch)
{
  /*Make sure the transmit data register is empty*/
	while(!(USART2->SR & SR_TXE)){}

  /*Write to transmit data register*/
	USART2->DR	=  (ch & 0xFF);

	//for(uint32_t j = 0; j < 500000; j++){}
}



