#include<stdio.h>
#include<string.h>

void main()
{
	char data[10][20],*p[10],*temp;
	char **dp;
	int i,j,count, k;
	for(i=0;i<10;i++)
	p[i]=data[i];
	
	dp=p;
	printf("sorting using double pointers\n");
	printf("enter count \n");
	scanf("%d",&count);
	
	printf("enter %d names\n",count);

	for(i=0;i<count;i++)
		scanf("%s",*(dp+i));//Rahul, Avinash

	for(i=0;i<count-1;i++)
	{
		for(j=0;j<count-1-i;j++)
		{
			k=strcmp(*(dp+j),*(dp+j+1));
			if(k>0)
			{
			//	strcpy(temp,p+j*20);
			//	strcpy(p+j*20,p+(j+1)*20);
			//	strcpy(p+(j+1)*20,temp);
			temp=*(dp+j);
				*(dp+j)=*(dp+j+1);
			*(dp+j+1)=temp;
			}
		}
	}

	printf("sorted names are \n");
	for(i=0;i<count;i++)
		printf("%s\n",*(dp+i));
}
