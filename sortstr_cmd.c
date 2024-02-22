#include<stdio.h>
#include<string.h>
void strSort(char *argv[],int argc)
{ 
	char *temp=NULL;
	for(int i=0;i<argc-1;i++)
	{
		for(int j=1;j<argc-1-i;j++)
		{
			if(strcmp(argv[j],argv[j+1]) > 0)
			{
			temp=argv[j];
			argv[j]=argv[j+1];
			argv[j+1]=temp;
			}
		}
	}
}



int main(int argc,char *argv[])
{
	char *temp;
	int i,j;
	if(argc >1)
	{
	printf("Strings before sorting\n");
	for(int i=1;i<argc;i++)
		printf("%s\n",argv[i]);
	strSort(argv,argc);


	printf("Strings after sorting\n");
	for(int i=1;i<argc;i++)
		printf("%s\n",argv[i]);
	}
	else
	{
	printf("not enough argument passed for sorting\n");
	}
}
