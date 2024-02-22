#include<stdio.h>
#define N 5
int main()
{
	int a[]={1,2,3,4,5};
	int *ptr;
	ptr=a;
	int max;
	max=a[0];
	int i;
	for(ptr=&a[0];ptr<&a[N];ptr++)
	{
		if(*ptr>max)
		{
			max=*ptr;
		}
	}
		printf("the maximum array is %d\n",max);
		return 0;
	
}

