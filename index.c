#include<stdio.h>
int main()
{
	int a[10]={1,2,4,6,9};
	int res[10];
	int i,n=sizeof(a)/sizeof(int);
	for(i=0;i<n;i++)
	{
		res[a[i]]++;
	}
	for(i=1;i<n;i++)
	{
		if(res[i]==0)
		{
			printf("%d\n",i);
		}
	}
}
