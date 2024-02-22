#include<stdio.h>
int areaofrect( int len, int ber)
{
	int n;
	int area=len * ber;
	return area;
}
int main()
{
	int l=10,b=20;
	int area=areaofrect(l,b);
	printf("%d\n",area);
	return 0;
}

