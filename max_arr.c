#include<stdio.h>
int main()
{
	int size;
	printf("enter the size of an array:");
	scanf("%d",&size);
	int arr[size];
	printf("enter the array elements in an array:");
	for(int i=0;i<size;++i)
	scanf("%d",&arr[i]);
	int large=arr[0];
	for(int i=1;i<size;++i)
	{
		if(arr[i]>large)
		{
			large=arr[i];
		}
	}
	printf("largest number in an arr is %d\n",large);
	return 0;
}

