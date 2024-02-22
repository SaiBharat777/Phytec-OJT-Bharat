#include<stdio.h>
int * findMaxValAddress(const int *p, int siz)
{
	int max,i; 
	const int *maxAddress=p;
	max=*p;
	if(siz <=1)
	{
	return maxAddress;
	}
for(i=1;i<siz;i++)
{
	if( *(p+i) > max)
	{
		max=*(p+i);
		maxAddress=p+i;
	}
}
p=NULL;
return maxAddress;
}

int findMaxVal(const int *p, int siz)
{
	int max,i;
	max=*p;
	if(siz<=1)
		return max;
	for(i=1;i<siz;i++)
	{
		if( *(p+i) > max)
		{
		max=*(p+i);
		}
	}
p=NULL;
return max;
}

int main()
{
	int Num[10]={90,80,54,123,87,919,54,12,28,265};
	int *maxPos,maxVal,i;
	printf("array elements are \n");
	for(i=0;i<10;i++)
	{
		printf("%d  ---> %p\n",Num[i],&Num[i]);
	
	}

	maxVal=findMaxVal(Num,10);
	maxPos=findMaxValAddress(Num,10);
	
	printf("Maximum Value = %d\n",maxVal);
	printf("Max Value = %d, Max Value Address = %p\n",*maxPos,maxPos);
	free(maxPos);
	maxPos=NULL;
	return 0;
}


