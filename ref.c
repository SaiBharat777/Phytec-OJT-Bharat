#include<stdio.h>
int fun(int n)
{
	if(n>0)
	{
		printf("%d\n",n);
		fun(n-1);
		printf("\n");
		fun(n-1);
	}
	return 0;
}
	int main()
{
	int a=3;
	printf("%d\n",fun(a));
	return 0;
}
