#include<stdio.h>
int main()
{
	char a[30]="c programming";
	char b[30];
	int len=0;
	for(int i=0;a[i]!='\0';i++)
	{
		len++;
	}
	for(int i=0;i<len;i++)
	{
		b[i]=a[len-i-1];
	}
	b[len]='\0';
	printf("original string =%s\n",a);
	printf("reverse string=%s\n",b);
	return 0;
}



