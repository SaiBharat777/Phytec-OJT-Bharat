#include<stdio.h>
int main()
{
	int a , b;
	printf("Enter the a and b values: ");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping a=%d b=%d\n",a,b);
}
