#include<stdio.h>
float e(int x, int n)
{
	float s=1;
	if(n==0)
	{
		return 1;
	}
	else
	{
		for(int i=n;i>0;i--)
			s=1+(x/i)*s;
	}
	return s;
}
int main()
{
	int x=2;
	int n=3;
	float r;
	r=e(x,n);
	printf("%f\n",r);
	return 0;
}
	
