#include<stdio.h>
#include<malloc.h>
#include<string.h>
char * readStringAndReturn()
{
char arr[100];
printf("Enter a string :: ");
gets(arr);
char *p=(char *)malloc(strlen(arr)+1);
strcpy(p,arr);
return p;

}

int main()
{


char *data;
data=readStringAndReturn();


printf("%s\n",data);
free(data);



}
