#include "stm32f4xx.h"
#include <stdint.h>


#define GPIOAEN			(1U<<0)
#define UART2EN			(1U<<17)

#define SYS_FREQ		16000000
#define APB1_CLK		SYS_FREQ

#define UART_BAUDRATE	115200

#define CR1_TE			(1U<<3)
#define CR1_RE			(1U<<2)
#define CR1_UE			(1U<<13)
#define SR_TXE			(1U<<7)
#define SR_RXNE			(1U<<5)



static void uart_set_baudrate(USART_TypeDef *USARTx,uint32_t PeriphClock ,uint32_t BaudRate);
static uint16_t compute_uart_bd(uint32_t PeriphClock , uint32_t BaudRate);

void uart2_rxtx_init(void);
void uart2_write(int ch);
char uart2_read(void);
int __io_putchar(int ch);


