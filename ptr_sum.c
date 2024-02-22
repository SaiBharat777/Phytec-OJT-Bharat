#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5};
	int sum=0,*p;
	p=arr;
	for(p=&arr[0];p<=&arr[4];p++)
	{
		sum=sum+*p;
	
	}
	printf("the sum of pointer is %d\n",sum);
	
}

