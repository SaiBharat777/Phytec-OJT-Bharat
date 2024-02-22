#include<stdio.h>
int main()
{
	int i,j,n;
	int a[11]={6,7,8,9,11,12,15,16,17,18,20};
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		if(a[i]-i!=a[0])
		{
			printf("the missed number in an array is:%d\n",a[i]-1);
			break;
		}
	}
	printf("i=%d\n",i);
	for(i=0;i<n;i++)
	{
		if(a[i]-i!=a[0]+1)
		{
			printf("missed number in an array is:%d\n",a[i]-1);
			break;
		}
	}
	return 0;
}
