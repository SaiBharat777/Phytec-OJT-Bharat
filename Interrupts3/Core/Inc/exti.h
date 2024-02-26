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




#define    GPIOAEN     (1U<<0)
#define    PA2MOD      (2U<<4)
#define    PA2AF       (7U<<8)
#define    APB1EN      (1U<<17)
#define    USART2_TX    (1U<<3)
#define    USART2EN     (1U<<13)
#define    SR_TXE       (1U<<7)

#define SYS_FREQ		16000000
#define APB1_CLK		SYS_FREQ

#define UART_BAUDRATE	115200

void uart2_init(void);
void uart2_write(int ch);
