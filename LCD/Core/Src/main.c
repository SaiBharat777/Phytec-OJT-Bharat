#include "LCD.h"

int main(void)
{
    /* initialize LCD controller */
    LCD_init();

    /* Write "hello" on LCD */
    LCD_data('h');
    LCD_data('e');
    LCD_data('l');
    LCD_data('l');
    LCD_data('o');



    while(1)
    {
        /* Do nothing */
    }
}
