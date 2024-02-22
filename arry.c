#include<stdio.h>
void main()
{
	int n,kn=5,sum=0,diff,sumn,m;
	int a[12]={6,7,8,9,10,11,12,13,14,16,18};
	for(int i=0;i<10;i++)
	{
		sum=sum+a[i];
	}
	for(int j=0;j<10;j++)
	{

		sum=sum-a[j];
	}
	sum=a[1]+8;
	printf("missed number is %d\n",sum);
	for(int k=0;k<12;k++)
	{
		sum=sum-a[k];
	}
	sum=a[1]+10;
	printf("missed number is %d\n",sum);
}

	//printf("enter the size element :\n");
	//scanf("%d",&n);
	//int a[n];
	//printf("enter the elements:\n");
	//scanf("%d",&a[n]);
	//int a[12]={6,7,8,9,10,11,12,13,14,16,17};
	//kn=kn*(kn+1)/2;
	//int k=17;
	//k=k*(k+1)/2;
	//kn=k-kn;
	//for(int i=0;i<12;i++)
	//{
		//sum=sum+a[i];
	//}
	//diff=kn-sum;
	//printf("midssed number is %d\n",diff);

