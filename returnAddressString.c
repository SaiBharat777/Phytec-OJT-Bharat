#include<stdio.h>

char * findChar(char *Data, char ch)
{
	int i;
	for(i=0;*(Data+i)!='\0';i++)
	{
		if(*(Data+i) == ch )
			return Data+i;
	}
	return NULL;
}

int main()
{
char Data[100],*charPos,searchchar; 
printf("enter a sentence\n");
gets(Data);
printf("enter a char to be searched\n");
scanf("%c",&searchchar);//z
charPos=findChar(Data,searchchar);
if(charPos != NULL)
{
	printf("char found\n");
	printf("remaining string = %s\n",charPos);
	printf("character found at %ld position\n",charPos-Data+1);
}
else
printf("character not found\n");

}

