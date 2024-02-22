#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the ranges : ");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("Invalid ranges!!!\n");
		return 1;
	}
	for(int i=a;i<=b;i++)
	{
		int count=0;
		for(int j=2;j<=b;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==1)
		{
			printf("%d ",i);
		}
	}
}

