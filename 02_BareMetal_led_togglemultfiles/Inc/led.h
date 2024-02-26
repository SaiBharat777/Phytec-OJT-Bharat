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

#define __IO volatile

typedef struct
{
  __IO uint32_t MODER;    /*!< GPIO port mode register,               Address offset: 0x00      */
  __IO uint32_t DUMMY[4];
  __IO uint32_t ODR;
} GPIO_TypeDef;


typedef struct
{
  __IO uint32_t DUMMY[12];
  __IO uint32_t AHB1ENR;       /*!< RCC AHB1 peripheral clock register,                          Address offset: 0x30 */
} RCC_TypeDef;

#define GPIOA                ((GPIO_TypeDef*)(GPIOA_BASE))

#define RCC                  ((RCC_TypeDef*)(RCC_BASE))

void ledinit();
void led_toggle();
