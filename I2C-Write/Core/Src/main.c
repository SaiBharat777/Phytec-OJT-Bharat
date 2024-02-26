#include"i2c.h"

int main(void)
{
	I2C1_init();
    I2C1_byteWrite(SLAVE_ADDR, 0x0E, 0);

    while(1)
    {

    }
}
