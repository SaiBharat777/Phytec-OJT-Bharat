#include "stm32f4xx.h"

#define RS 0x20 /* PB5 mask for reg select */
#define RW 0x40 /* PB6 mask for read/write */
#define EN 0x80 /* PB7 mask for enable */

void delayMs(int n);
void LCD_command(unsigned char command);
void LCD_init(void);
void PORTS_init(void);
void LCD_data(char data);
