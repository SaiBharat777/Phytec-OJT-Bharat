#include<stdio.h>
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	{
		if(num%2!=0)
		{
			printf("number is even",num);
		}
		else
		{
			printf("number is odd",num);
		}
		return 0;
	}
}

