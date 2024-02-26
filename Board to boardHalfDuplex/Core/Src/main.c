#include "stm32f4xx.h"
#include <stdint.h>

#define    GPIOAEN     (1U<<0)
#define    PA11MOD      (2U<<22)
#define    PA11AF       (8U<<12)
#define    PA12MOD      (2U<<24)
#define    PA12AF       (7U<<16)
//#define    APB2EN      (1U<<5)
#define    USART6_RX    (1U<<2)
#define    USART6EN     (1U<<13)
#define    USART6_TX    (1U<<3)

#define    SR_RXNE       (1U<<5)
#define    SR_TXE       (1U<<7)






#define    GPIOAEN      (1U<<0)
#define    PA9MOD       (2U<<18)
#define    PA9AF        (7U<<4)
#define    PA10MOD      (2U<<20)
#define    PA10AF       (7U<<8)
#define    APB2EN       (1U<<4)
#define    USART1_RX    (1U<<5)
#define    USART1EN     (1U<<13)
#define    USART1_TX    (1U<<4)

#define    SR_RXNE      (1U<<5)
#define    SR_TXE       (1U<<7)

#define    SYS_FREQ     16000000
#define    APB2_CLK     SYS_FREQ

#define    UART_BAUDRATE    115200


void usart1_init(void);
char usart1_read(void);
void usart1_write(int);


void uart6_init(void);
char uart6_read(void);
void uart6_write(int);



static void uart_set_baudrate(USART_TypeDef *USARTx, uint32_t PeriphClk,  uint32_t BaudRate);
static uint16_t compute_uart_bd(uint32_t PeriphClk, uint32_t BaudRate);



int main()
{
	char c;

	usart1_init();

	uart6_init();

	while(1)
	{
		c = uart6_read();
		  usart1_write(c);
	}
	return 0;
}


void usart1_init(void)
{
    /****************Configure usart1 gpio pin***************/
    /*Enable clock access to gpioa */
    RCC->AHB1ENR |= GPIOAEN;

    /*Set PA9 mode to alternate function mode*/
    GPIOA->MODER  |= PA9MOD;

    /*Set PA10 mode to alternate function mode*/
    GPIOA->MODER  |= PA10MOD;

    /*Set PA9 alternate function type to USART1_TX (AF07)*/
    GPIOA->AFR[1] |= PA9AF;

    /*Set PA10 alternate function type to USART1_RX (AF07)*/
    GPIOA->AFR[1] |= PA10AF;

    /****************Configure usart1 module ***************/
    /*Enable clock access to usart1 */
    RCC->APB2ENR |= APB2EN;

    /*Configure baudrate*/
    uart_set_baudrate(USART1,APB2_CLK,UART_BAUDRATE);

    /*Configure the transfer direction*/
    USART1->CR1 |= USART1_TX;

    /*Configure the transfer direction*/
    USART1->CR1 |= USART1_RX;

    /*Enable usart1 module*/
    USART1->CR1 |= USART1EN;
}



void uart6_init(void)
{

	/****************Configure uart gpio pin***************/
		/*Enable clock access to gpioa */
	    RCC->AHB1ENR |= GPIOAEN;

    	/*Set PA11 mode to alternate function mode*/
	    GPIOA->MODER  |= PA11MOD;

		/*Set PA12 mode to alternate function mode*/
	    GPIOA->MODER  |= PA12MOD;

    	/*Set PA11 alternate function type to UART_TX (AF07)*/
	    GPIOA->AFR[1] |= PA11AF;

		/*Set PA12 alternate function type to UART_TX (AF07)*/
	    GPIOA->AFR[1] |= PA12AF;

		/****************Configure uart module ***************/
		/*Enable clock access to uart2 */
         RCC->APB2ENR |= APB2EN;

		/*Configure baudrate*/
		uart_set_baudrate(USART6,APB2_CLK,UART_BAUDRATE);
		//USART2->BRR = ((APB1_CLK + (BaudRate/2U))/BaudRate) ;

		/*Configure the transfer direction*/
		USART6->CR1 |= USART6_TX;

        /*Configure the transfer direction*/
    	USART6->CR1 |= USART6_RX;

		/*Enable uart module*/
        USART6->CR1 |= USART6EN;

}


static void uart_set_baudrate(USART_TypeDef *USARTx, uint32_t PeriphClk,  uint32_t BaudRate)
{
	USARTx->BRR =  compute_uart_bd(PeriphClk,BaudRate);
}

static uint16_t compute_uart_bd(uint32_t PeriphClk, uint32_t BaudRate)
{
	return ((PeriphClk + (BaudRate/2U))/BaudRate);
}






char uart6_read(void)
{
  /*Make sure the transmit data register is empty*/
	while(!(USART6->SR & SR_RXNE)){}

  /*Write to transmit data register*/
	return USART6->DR;
}



void usart1_write(int ch)
{
  /*Make sure the transmit data register is empty*/
	while(!(USART1->SR & SR_TXE)){}

  /*Write to transmit data register*/
	USART1->DR	= (ch & 0xFF);
}



