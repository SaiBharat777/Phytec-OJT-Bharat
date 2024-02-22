#include<stdio.h>
#include<string.h>

void main()
{
	char data[10][40],*p,temp[20];
	int i,j,count, k;
	p=data;
	printf("sorting using one pointer\n");
	printf("enter count \n");
	scanf("%d",&count);//8
	printf("enter %d names\n",count);

	for(i=0;i<count;i++)
		scanf("%s",p+i*40);//Rajesh   Dravid   Sachin

	for(i=0;i<count-1;i++)
	{
		for(j=0;j<count-1-i;j++)
		{
			k=strcmp(p+j*40,p+(j+1)*40);
			if(k>0)
			{
				strcpy(temp,p+j*40);
				strcpy(p+j*40,p+(j+1)*40);
				strcpy(p+(j+1)*40,temp);
			}
		}
	}

	printf("sorted names are \n");
	for(i=0;i<count;i++)
		printf("%s\n",p+i*40);
}
