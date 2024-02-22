#include<stdio.h>
#include<unistd.h>
#include<signal.h>
void myfun()
{
printf("SiGINT Signal handled\n");
printf("SiGINT Signal handled in myfun\n");
printf("SiGINT Signal handled in myfun using function pointers\n");
}

int main()
{
	int count=0;
	signal(2,myfun);//call back function
	while(1)
	{
		printf("In while loop\n");
		printf("Count = %d\n",count);
		count++;
		sleep(1);
	}



}
