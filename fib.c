#include<stdio.h>
int main()
{
	int n1=0;
	int n2=1;
	int n3,x;
	printf("enter the number of terms in series::\n");
	scanf("%d",&x);
	printf("%d\t%d\t",n1,n2);
	while(x)
	{
		n3=n1+n2;
		printf("%d\t",n3);
		n1=n2;
		n2=n3;
		x--;
	}
	return 0;
}
