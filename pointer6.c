#include<stdio.h>
#include<malloc.h>

void main()
{
	//int A[20];
	int size;
	int i,j,temp;
	int *p;
printf("enter size of data\n");
scanf("%d",&size);//8
p=(int *)malloc(size*sizeof(int));
//p=A;

printf("enter %d numbers\n",size);
for(i=0;i<size;i++)
{
	scanf("%d",p+i);
}

	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
			if(*(p+j)>*(p+j+1))
			{
			temp=*(p+j);
			*(p+j)=*(p+j+1);
			*(p+j+1)=temp;
			}
		}
	}
printf("Sorted Data\n");
	for(i=0;i<size;i++)
	{
		printf("%d \n",*(p+i));
	}
//free(p);
free(p);
}

