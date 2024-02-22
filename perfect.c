#include<stdio.h>
int main()
{
	int num,sum=1;
	printf("enter the number");
	scanf("%d",&num);
	for(int i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==num)
	{
		printf("value is perfect %d\n",num);
	}
	else
	{
		printf("value is not perfect %d\n",num);
	}
	return 0;
}


