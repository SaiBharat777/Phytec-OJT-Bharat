#include<stdio.h>
int c(int n,int r)
{
	if(r==0)
		return 1;
	else if(n==r)
		return 1;
	else
		return c(n-1,r-1)+c(n-1,r);
}
int main()
{
	int n=4,r=3;
		int res=c(n,r);
	printf("%d\n",res);
}
