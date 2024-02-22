#include<stdio.h>

int main()
{
int A[1000000];
int size,i,max;
int *ptr=A;
printf("Enter the number of elements :: ");
scanf("%d",&size);//5
printf("Enter %d numbers\n",size);
for(i=0;i<size;i++)
{
	scanf("%d",ptr+i);
}
max=*ptr;
for(i=1;i<size;i++)
{
	if(*(ptr+i) > max)
		max=*(ptr+i);
}
printf("Max value = %d\n",max);
}

