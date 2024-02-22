#include<stdio.h>
int main()
{
	int num,ls;
	printf("Enter the number: ");
	scanf("%d",&num);
	printf("number of times to be shift left: ");
	scanf("%d",&ls);
	int result=num<<(ls);
	printf("%d\n",result);
}
