#include<stdio.h>
int main()
{
	int n;
	int sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		sum= i*i*i;
	}
	printf("sum of cube is %d\n",sum);
	return 0;
}

