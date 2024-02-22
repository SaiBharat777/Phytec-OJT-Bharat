#include<stdio.h>
#include<stdlib.h>
int asc(int a,int b)
{
//printf("asc function\n");
	return a>b;  
}

int dsc(int a,int b)
{
//printf("dsc function\n");
	return a<b; 
}
                                //dsc
void sort(int *p,int count,int (*fp)(int ,int))
{
int i,j,temp;
printf("using sort function\n");
	for(i=0;i<count-1;i++)
	{
		for(j=0;j<count-1-i;j++)
		{
			if(fp(*(p+j),*(p+j+1)))  // *(p+j) < *(p+j+1)
			{
			temp=*(p+j);
			*(p+j)=*(p+j+1);
			*(p+j+1)=temp;
			}
		}
	}

}
void main(int argc,char *argv[])
{
	int A[10]={25,20,11,43,34,99,22,88,77,66};
	int i,choice;
	choice=atoi(argv[1]);
	printf("SORTING USING FUNCTION POINTERS\n");
	//printf("enter 1 for ascending and 2 for descending\n");
	//	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	sort(A,10,asc);
	break;
	case 2:
	sort(A,10,dsc);
	break;
	}
	for(i=0;i<10;i++)
	{
		printf("%d \n",A[i]);
	}
}

