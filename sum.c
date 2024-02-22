#include<stdio.h>
int sum(int d,int c)
{
	int arr[20]={1,2,3,4,5,6};
	int sum=0;
	for(int i=0;i<20;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}
int main()
{
	int a=10,b=20;
	int add =sum(a,b);
	printf("%d",add);
	return 0;
}

