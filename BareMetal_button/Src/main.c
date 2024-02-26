#include "stdint.h"
//#include "stm32f4xx.h"

#define PERIPH_BASE          (0x40000000UL)
#define AHB1PERIPH_OFFSET    (0x00020000UL)

#define AHB1PERIPH_BASE      (PERIPH_BASE + AHB1PERIPH_OFFSET)
#define GPIOA_OFFSET         (0x0000UL)

#define GPIOA_BASE           (AHB1PERIPH_BASE + GPIOA_OFFSET)

#define RCC_OFFSET           (0x3800UL)
#define RCC_BASE             (AHB1PERIPH_BASE + RCC_OFFSET)

#define GPIOAEN              (1U<<0)

#define PIN5                 (1U<<5)
#define LED_PIN              PIN5

#define GPIOC_BASE           (0x3FFUL)

#define __IO volatile

typedef struct
{
  __IO uint32_t MODER;    /*!< GPIO port mode register,               Address offset: 0x00      */
  __IO uint32_t Dummy[3];
  __IO uint32_t IDR;      /*!< GPIO port input data register,         Address offset: 0x10      */
  __IO uint32_t ODR;      /*!< GPIO port output data register,        Address offset: 0x14      */
  __IO uint32_t BSRR;     /*!< GPIO port bit set/reset register,      Address offset: 0x18      */
} GPIO_TypeDef;

typedef struct
{
  __IO uint32_t DUMMY[12];
  __IO uint32_t AHB1ENR;       /*!< RCC AHB1 peripheral clock register,                          Address offset: 0x30 */
} RCC_TypeDef;


#define GPIOA                ((GPIO_TypeDef*)(GPIOA_BASE))

#define GPIOC                ((GPIO_TypeDef*)(GPIOC_BASE))

#define RCC                  ((RCC_TypeDef*)(RCC_BASE))


int main(void)
{
	RCC->AHB1ENR |= 4; /* enable GPIOC clock */
	RCC->AHB1ENR |= 1; /*enable GPIOA clock */
	GPIOA->MODER &= ~0x00000C00; /* clear pin mode */
	GPIOA->MODER |= 0x00000400; /* set pin to output mode */
	GPIOC->MODER &= ~0x0C000000; /* clear pin mode to input mode */

	while (1)
	{
		if (GPIOC->IDR & 0x2000) /* if PC13 is high */
			GPIOA->BSRR = 0x00200000; /* turn off green LED */
		else
			GPIOA->BSRR = 0x00000020; /* turn on green LED */
	}
}
