#include<stdio.h>
#include<malloc.h>


void main()
{
	int *p,row,col,i,j;
	
	printf("enter number of rows\n");
	scanf("%d",&row);//4
	printf("enter number of columns\n");
	scanf("%d",&col);//5
	p=(int *)malloc(row * col *sizeof(int));//80

	for(i=0;i<row;i++)//2
	{
	printf("enter row %d elemnts",i);
		for(j=0;j<col;j++)//0
		{
			scanf("%d",p+i*col+j);//2 4 6 8 10 3 5
		}
	}
	printf("Matrix Elements are\n");

	for(i=0;i<row;i++)
	{
	for(j=0;j<col;j++)
	{
		printf("%d\t",*(p+i*col+j));
	}
	printf("\n");
	}
free(p);
p=NULL;
}
