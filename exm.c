#include<stdio.h>
int main f(n)
{
	static int i=1;
	if(n>=5)
		return n;
	n=n+i;
	i++;
	return f(n);
}


