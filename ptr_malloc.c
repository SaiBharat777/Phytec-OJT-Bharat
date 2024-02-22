#include<stdio.h>
int main()
{
	int size,i,max;
	int *ptr;
	printf("enter the size of the array:");
	scanf("%d",&size);
	ptr= malloc(size*sizeof(int));
	printf("enter the array elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",ptr+i);
	}
	max=*ptr;
	for(i=1;i<size;i++)
	{
		if(*(ptr+i)>max)
			max=*(ptr+i);
	}
	printf("max  value is%d\n",max);
	free(ptr);
}
