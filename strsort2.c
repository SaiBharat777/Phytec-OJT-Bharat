#include<stdio.h>
#include<string.h>

void main(int argc, char *argv[])
{
	char data[10][50];
	char *p[10],*temp;   
	int i,j,count, k;

	for(int i=0;i<10;i++)
		p[i]=data[i];

	printf("enter count \n");
	scanf("%d",&count);//8
	
	printf("enter %d names\n",count);

	for(i=0;i<count;i++)
		scanf("%s",p[i]); // Rajeshchaouhan Anil Kumble RahulDravid SachinTendulkar 

	for(i=0;i<count-1;i++)
	{
		for(j=0;j<count-1-i;j++)
		{
			k=strcmp(p[j],p[j+1]);
			if(k>0)
			{

			temp=p[j];
			p[j]=p[j+1];
			p[j+1]=temp;
			}
		}
	}
	printf("sorted names using 2-D array are \n");
	for(i=0;i<count;i++)
		printf("%s\n",data[i]);


	printf("sorted names using array of pointers are \n");
	for(i=0;i<count;i++)
		printf("%s\n",p[i]);
}
