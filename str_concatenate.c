#include<stdio.h>
int main()
{
	int len=0,i;
	char a[10]="manju";
	char b[10]="EL";
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	for(i=0;i<len;i++)
	{
		a[len+i]=b[i];
	}
	a[len+i]='\0';
	printf("the cncaternation string is %s\n",a);
	//printf("the connection of string is %s\n",b);
	return 0;
}
