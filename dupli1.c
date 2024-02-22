#include<stdio.h>
int main()
{
	int n,i,j,ld=0,count=1;
	int a[10]={3,6,8,8,10,12,15,15,20};
	n=sizeof(a)/sizeof(int);
	for(i=0;i<n;i++)
	{
		if(a[i]==a[i+1] &&a[i]!=ld)
		{
			printf("%d\n",a[i]);
		}
	}
	//for(i=0;i<n;i++)
	//{
	//	if(a[i]==a[i+1]&& a[i]!=ld)
	//	{
	//		count++;
	//		printf("count of duplicates %d\n",count);
	//	}
//	}
//	for(i=0;i<n;i++)
//		{
//			if(a[i]==a[i+1] && a[i]!=ld)
//		{
//			printf("%d\n",a[i]);
//		}
//	}
	for(i=0;i<n;i++)
	{
		if(a[i]==a[i+1] && a[i]!=ld)
		{
			j=j+1;
		}
		while(a[i]=a[j])
		{
			j++;
		}
		printf("%d %d\n",a[i],j-i);
		i=j-1;
	}

		
}
		
