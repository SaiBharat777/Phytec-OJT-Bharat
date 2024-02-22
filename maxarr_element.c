#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int large=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>large)
		{
			large=arr[i];
		}
	}
	printf("large number is %d\n",large);
	return 0;
}

