#include<stdio.h>
int main()
{
	int v,i,r;
	printf("Enter voltage v: ");
	scanf("%d", &v);
	printf("Enter current i: ");
	scanf("%d", &i);

	r= v/i;
	printf("Resistance r is: %d\n", r);

	return 0;
}	
