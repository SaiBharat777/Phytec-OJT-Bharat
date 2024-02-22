#include<stdio.h>
#include<malloc.h>


int main()
{
int *ptr=NULL;
int size;
printf("Enter size\n");
scanf("%d",&size);//20
ptr=(int *)malloc(size*sizeof(int));
char *p1=(char *)malloc(size*sizeof(char));

if(ptr)
{
	printf("Enter %d numbers",size);
	for(int i=0;i<size;i++)
		scanf("%d",ptr+i);
	int max=*ptr;
	for(int i=1;i<size;i++)
	{
		if(*(ptr+i) > max)
			max=*(ptr+i);
	}
	printf("Max Value = %d\n",max);
double *p2=(double *)malloc(size*sizeof(double));
free(ptr);
free(p1);
free(p2);
//ptr=NULL;
}
else
{
printf("alloaction failure\n");
}
}
