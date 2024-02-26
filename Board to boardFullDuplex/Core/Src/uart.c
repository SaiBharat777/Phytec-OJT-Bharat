#include "uart.h"

int __io_putchar(int ch)
{
	uart2_write(ch);
	return ch;
}

void uart2_rxtx_init(void)
{
	/*****configure uart gpiio pin*******/

	//Enable clock access to gpioa
	RCC->AHB1ENR |= GPIOAEN;

	//set pa2 mode to alternate function mode
	GPIOA->MODER &= ~(1U<<4);
	GPIOA->MODER |= (1U<<5);

	//set pa2 alternate function type to UART_TX (AF07)
	GPIOA->AFR[0] |= (1U<<8);
	GPIOA->AFR[0] |= (1U<<9);
	GPIOA->AFR[0] |= (1U<<10);
	GPIOA->AFR[0] &= ~(1U<<11);

	//Set pa3 mode to alternate function mode
	GPIOA->MODER &= ~(1U<<6);
	GPIOA->MODER |= (1U<<7);

	//Set pa3 alternate function type to UART_RX (AF07)
	GPIOA->AFR[0] |= (1U<<12);
	GPIOA->AFR[0] |= (1U<<13);
	GPIOA->AFR[0] |= (1U<<14);
	GPIOA->AFR[0] &= ~(1U<<15);

	/******configure uart module **********/

	//Enable clock access uart2
	RCC->APB1ENR |= UART2EN;

	//Configure baudrate
	uart_set_baudrate(USART2, APB1_CLK, UART_BAUDRATE);

	//Configure transfer direction
	USART2->CR1 = (CR1_TE | CR1_RE); //enable transmitter and receiver

	//Enable uart module
	USART2->CR1 |= CR1_UE;

}

char uart2_read(void)
{
	//Make sure receive data register is empty
	while(!(USART2->SR & SR_TXE)){}

	//return the data
	return USART2->DR ;

}

void uart2_write(int ch)
{
	//Make sure transmit data register is empty
	while(!(USART2->SR & SR_RXNE)){}

	//Write to transmit data register
	USART2->DR = (ch & 0xFF);

}

static void uart_set_baudrate(USART_TypeDef *USARTx,uint32_t PeriphClock ,uint32_t BaudRate)
{
	USARTx->BRR = compute_uart_bd(PeriphClock,BaudRate);
}

static uint16_t compute_uart_bd(uint32_t PeriphClock , uint32_t BaudRate)
{
	return ((PeriphClock + (BaudRate/2U))/BaudRate);
}
