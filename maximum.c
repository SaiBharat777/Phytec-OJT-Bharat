#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter the numbers");
	scanf("%d %d",&num1,&num2);
	if(num1 > num2)
	{
		printf("num1 is greater");
	}
	else if(num2 > num1);
	{
		printf("num2 is greater");
	}
	if(num1 < num2)
	{
		printf("num2 is smaller");
	}
	else
	{
		printf("num1 is smaller");
	}
	return 0;
}
		
	
