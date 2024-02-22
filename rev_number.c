#include<stdio.h>
int main()
{
	char arr[20];
	for(int i=0;i<20;i++)
		arr[i]=i+1;
	{
		for(int i=0;i<20;i++)
		printf("array of number is %d", arr[i]);
		return 0;
	}
	printf("\n");
	for(int i=20;i>=1;i--)
	{
		printf(" array is %d",arr[i]);
	}
	printf("\n");
	return 0;
}

