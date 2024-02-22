#include<stdio.h>
int main()
{
	char a[20]="C programming";                                                          
	char b[20];
	int len=0;
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	for(i=0;i<len;i++)
	{
		b[i]=a[len-i-1];
	}
	b[len]='\0';
	printf("the original string is %s\n",a);
	printf("the reverse string is %s\n",b);
	return 0;
}

