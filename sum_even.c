#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int sum=0;
	for(int i=2;i<=n;i+=2)
	{
		sum =sum+i;
	}
	printf("even number of sum is %d\n",n,sum);
	return 0;
}
