#include<stdio.h>
int fun(int *a ,int n)
{
	if(n<=0)
	return 0;
	else if(*a%2==0)
		return *a+fun(a+1 ,n-1);
	else
		return *a-fun(a+1 ,n-1);
}
int main()
{
	int a[]={12,7,13,4,11,6};
	printf("%d",fun(a,6));
	getchar();
	return 0;
}
