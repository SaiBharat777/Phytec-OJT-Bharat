#include "stm32f4xx.h"

#define SLAVE_ADDR 0x68 /* 1101 000. DS1337 */


void delayMs(int n);
void I2C1_init(void);
int I2C1_byteWrite(char saddr, char maddr, char data);
