#include<stdio.h>
void main()
{
	int min,max,num;
	int temp,rem;
	printf("enter min to  max values\n");
	scanf("%d-%d",&min,&max);
	if(min>max)
	{
		int samp=min;
		min=max;
		max=temp;
	}
	for(num=min;num<max;num++)
	{
		temp=num;
		int sum=0,c=0;
		int tag=num;
		while(temp!=0)
		{
			temp=temp/10;
			c++;
		}
		while(tag!=0)
		{
			rem=tag%10;
			int i=1;
			int x=c;
			while(x!=0)
			{
				i=i*rem;
				x--;
			}
			sum=sum+i;
			tag=tag/10;
		}
		if(sum==num)

			printf("armstrong num is %d\n",sum);

	}
}





