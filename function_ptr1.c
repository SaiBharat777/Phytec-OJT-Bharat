#include<stdio.h>

void fun1()
{
	printf("in fun1\n");
	printf("in fun1\n");
	printf("in fun1\n");
	printf("in fun1\n");
	
}
void fun2()
{
printf("in fun2\n");
printf("in fun2\n");
printf("in fun2\n");
printf("in fun2\n");

}

void fun3(int x, int y, void (*myfp)())
{
	printf("in fun3\n");
	printf("value of x = %d\n",x);
	printf("value of y = %d\n",y);
	myfp();//fun1

}





void main()
{
fun3(123,234,fun1);
fun3(99,88,fun2);
}




