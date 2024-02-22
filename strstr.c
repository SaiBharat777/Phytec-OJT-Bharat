#include<stdio.h>
#include<string.h>
#define __GNU_SOURCE
int main()
{
char Data[100]="Hello capgemini c programming";
char *strPos,searchstr[10]; 
printf("enter a string to be searched\n");
scanf("%s",searchstr);
strPos=(char *)strcasestr(Data,searchstr);
if(strPos != NULL)
{
	printf("string found\n");
	//printf("K = %d\n",k);
	printf("remaining string = %s\n",strPos);
	//printf("string found at %ld position\n",strPos-Data+1);
}
else
{
printf("string not found\n");
}
}

