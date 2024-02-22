#include<stdio.h>
void ma_mi()
{	
	
	int max,min,i,n;
	printf("enter the siz\n");
	scanf("%d",&n);
	int a[n];
	printf("ntr the array elemeents\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	max=a[0];
	min=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
		
			max=a[i];
		}
	       	       if(a[i]<min)
		{
			min=a[i];
		}

	}
printf("max=%d\n,min=%d\n",max,min);
}
	int main()
	{
		ma_mi();
	}
