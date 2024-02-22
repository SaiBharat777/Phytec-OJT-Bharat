#include<stdio.h>
int main()
{
	char uppercasechar,lowercasechar;
	printf("enter the uppercase letter:");
	scanf("%c",&uppercasechar);
	if(uppercasechar >='A' && lowercasechar <='Z')
	{
		lowercasechar=uppercasechar +('a'-'A');
		printf("the lowercase value is %c\n",lowercasechar);
	}
	else
	{
		printf("invalid character is obtained");
	}
	return 0;
}

