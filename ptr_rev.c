#include<stdio.h>
#define N 5
int main()
{
	int a[N],*p;
	printf("enter the elements in an array:");
	for(p=a;p<=a+N-1;p++)
	{
	scanf("%d",p);
	}
		printf("reverse number is %d\n");
	for(p=a+N-1;p>=a;p--)
	{
		printf("%d",*p);
	}
}
	
