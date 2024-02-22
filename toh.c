#include<stdio.h>
int toh(int n,int a,int b,int c)
{
	if(n>0)
	{
	 toh(n-1,a,c,b);
	 printf("move data from %d to %d",a,c);
	 toh(n-1,b,a,c);
	}
}
int main()
{
	int n=5,a=1,b=2,c=3;
	toh(n,a,b,c);
	printf("%d\n",toh(n,a,b,c));


}
