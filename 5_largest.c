#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter 4  numbers: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b && a>c && a>d)
	{
		printf("%d is largest\n",a);
	}
	else if(b>c && b>d)
	{
		printf("%d is largest\n",b);
	}
	else if(c>d)
	{
		printf("%d is largest\n",c);
	}
	else
	{
		printf("%d is largest\n",d);
	}

	if(a<b && a<b && a<d)
	{
		printf("%d is smallest\n",a);
	}
	else if(b<c && b<d)
	{
		printf("%d is smallest\n",b);
	}
	else if(c<d)
	{
		printf("%d is smallest",c);
	}
	else
	{
		printf("%d is smallest",d);
	}
}

