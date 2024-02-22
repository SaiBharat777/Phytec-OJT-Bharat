#include<stdio.h>
int removeduplicates(int arr[],int size)
{
	int result=arr;
	if(size<2)
	{
		return size;
	}
	int index=1;
	for(int i=1;i<size;i++)
	{
		if(arr[i]!=arr[i+1])
		{
			arr[i]=result+index;
			index++;
		}
	}
	return index;
}
int main()
{
	int arr[]={3,6,8,8,10,12,15,15,15,20};
	int size=sizeof(arr)/sizeof(arr[0]);
	removeduplicates(arr,size);
		printf("%ld\n",arr);
}

