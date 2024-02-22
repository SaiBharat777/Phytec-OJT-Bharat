/*********************************************************************************************
 * © 2022 PHYTEC EMBEDDED PVT LTD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with PHYTEC. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 *
 * For further information, contact PHYTEC EMBEDDED Pvt Ltd.
 *********************************************************************************************/
/*********************************************************************************************/
/*      Application: 06_EEPROM_I2C.c
 *
 *      Brief: This application is to Read and Write into EEPROM via /dev/fs entries
 *
 *      Author: PHYTEC EMBEDDED PVT LTD
 */
/*********************************************************************************************/


#include <linux/types.h>
#include <sys/ioctl.h>
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<stdlib.h>
#include"i2c-dev.h"
char buffer[20];
char * i2c_val_to_write;

int add[]={0x00,0x08,0x10};
int j=0;

int main()
{
	char i2c_dev_node_path[] = "/dev/i2c-0";
	int i2c_dev_node;
	int i2c_dev_address = 0x50;
	int i2c_dev_reg_addr = 0x20;             // location where you writing ,
	int ret_val,j=0x00;
	 int i2c_dev_reg_x_acc = 0x00; 
	char i=92;
	__s32 read_value = 0;

	   i2c_val_to_write=malloc(19);
	   memcpy(i2c_val_to_write,"WELCOME TO PHYTEC ",19);

		i2c_dev_node = open(i2c_dev_node_path, O_RDWR);
		if (i2c_dev_node < 0)
		{
			perror("Unable to open device node.");
			exit(1);
		}

		ret_val = ioctl(i2c_dev_node,I2C_SLAVE,i2c_dev_address);
		if (ret_val < 0)
		{
			perror("Could not set I2C_SLAVE.");
			exit(2);
		}

		for(i=0;i<=18; i=i+8)
		{
			i2c_smbus_write_i2c_block_data(i2c_dev_node,add[j],8,i2c_val_to_write+i);
			j++;
			sleep(1);
		}

	

	while(1)
	{
	read_value = i2c_smbus_read_byte_data(i2c_dev_node,i2c_dev_reg_x_acc );
	sprintf(buffer, "%x", read_value);
	if (read_value < 0)
	{
	perror("I2C Read operation failed.");
	exit(3);
	}
	printf("X-Measurement Val = %d , %d , %c \n", buffer,read_value,read_value);
	i2c_dev_reg_x_acc ++;
	sleep(1);
	}

}
