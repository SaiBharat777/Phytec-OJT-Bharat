#include<stdio.h>
#include<string.h>

int main()
{
char Data[100],*charPos,searchchar; 
printf("enter a sentence\n");
gets(Data);
printf("enter a char to be searched\n");
scanf("%c",&searchchar);//z
charPos=strrchr(Data,searchchar);
if(charPos != NULL)
{
	printf("char found\n");
	printf("remaining string = %s\n",charPos);
	printf("character found at %ld position\n",charPos-Data+1);
}
else
{
printf("character not found\n");
}
}

