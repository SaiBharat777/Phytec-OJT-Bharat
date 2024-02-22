#include<stdio.h>

void sortAsc(int *p,int count)
{
int i,j,temp;

	for(i=0;i<count-1;i++)
	{
		for(j=0;j<count-1-i;j++)
		{
			if(*(p+j)>*(p+j+1))
			{
			temp=*(p+j);
			*(p+j)=*(p+j+1);
			*(p+j+1)=temp;
			}
		}
	}
}

void sortDsc(int *p,int count)
{
int i,j,temp;

	for(i=0;i<count-1;i++)
	{
		for(j=0;j<count-1-i;j++)
		{
			if(*(p+j)<*(p+j+1))
			{
			temp=*(p+j);
			*(p+j)=*(p+j+1);
			*(p+j+1)=temp;
			}
		}
	}
}


void main()
{
	int A[10]={25,20,11,43,34,99,22,88,77,66};
	int i,choice;
	printf("enter 1 for ascending and 2 for descending\n");
		scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	sortAsc(A,10);
	break;
	case 2:
	sortDsc(A,10);
	break;
	}
	for(i=0;i<10;i++)
	{
		printf("%d \n",A[i]);
	}
}

