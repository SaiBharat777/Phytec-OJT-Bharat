#include<stdio.h>
#include<string.h>
#include<malloc.h>
void main()
{
	char temp[100];
	char **dp,*ptr;
	int i,j,count, k;
	
	printf("sorting using double pointers and DMA\n");
	printf("enter count \n");
	scanf("%d",&count);  //12
	dp=malloc(count * sizeof(char *));


	printf("enter %d names\n",count);  // enter 12 names

	for(i=0;i<count;i++)
	{
		scanf("%s",temp); // Sanjay  rajarammohanroy Rahul
		*(dp+i)=malloc(strlen(temp)+1);
		strcpy(*(dp+i),temp);
	
	}
		
		
	for(i=0;i<count-1;i++)
	{
		for(j=0;j<count-1-i;j++)
		{
			k=strcmp(*(dp+j),*(dp+j+1));
			if(k>0)
			{
			ptr=*(dp+j);
			*(dp+j)=*(dp+j+1);
			*(dp+j+1)=ptr;
			}
		}
	}

	printf("sorted names are \n");
	for(i=0;i<count;i++)
		printf("%s\n",*(dp+i));

	for(int i=0;i<count;i++)
	{
		free(*(dp+i));
	}
	free(dp);

}
