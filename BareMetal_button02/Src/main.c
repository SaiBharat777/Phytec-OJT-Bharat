#include <stdint.h>

#define RCC_AHB1ENR     (*(volatile uint32_t*)(0x40023830U))
#define GPIOA_MODER     (*(volatile uint32_t*)(0x40020000U + 0x00U))
#define GPIOA_ODR       (*(volatile uint32_t*)(0x40020000U + 0x14U))
#define GPIOC_MODER     (*(volatile uint32_t*)(0x40020800U + 0x00U))
#define GPIOC_IDR       (*(volatile uint32_t*)(0x40020800U + 0x10U))

#define PIN5            (1U<<5)
#define LED_PIN         PIN5
#define PIN13           (1U<<13)
#define BUTTON_PIN      PIN13

int main()
{
    // Enable GPIOA and GPIOC clocks
    RCC_AHB1ENR |= (1U << 0) | (1U << 2);

    // Configure PA5 as output and PC13 as input
    GPIOA_MODER &= ~(3U << (5*2));
    GPIOA_MODER |= 1U << (5*2);
    GPIOC_MODER &= ~(3U << (13*2));

    while(1)
    {
        // Check if the button is pressed
        if ((GPIOC_IDR & BUTTON_PIN) == 0)
        {
            // Toggle the LED
            GPIOA_ODR ^= LED_PIN;

            // Delay for a short period
            for (volatile int i = 0; i < 100000; i++);
        }
    }
}
