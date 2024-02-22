#include<stdio.h>
int main()
{
	int i=0;
	int len=0;
	char a[10]="Manjunath";
	while(a[i]!='\0');
	{
		len++;
		i++;
	}
	printf("%d",len);
	return 0;
}
