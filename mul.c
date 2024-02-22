#include<stdio.h>
int printarray(int a[],int size)
{
	int i,n,k;
	if(a[0]!=1)
	{
		for(n=1;n<a[0];n++)
		{
			printf("%d",n);
		}
		for(i=0;i<size-1;i++)
		{
			k=a[i+1]-a[i];
			if(k>1)
			{
				for(n=a[i]+1;n<a[i+1];n++)
				{
					printf("%d\n",n);
				}
			}
		}
	}
}
int main()
{
	int a[]={1,3,5,9};
	int N=sizeof(a)/sizeof(int);
	printarray(a,N);
return 0;
}

