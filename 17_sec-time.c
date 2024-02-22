#include<stdio.h>
int main()
{
	int sec;
	printf("Enter the sec: ");
	scanf("%d",&sec);
	int h=sec/3600;
	int rem=sec%3600;
	int m=rem/60;
	int s=rem%60;
	printf("%d:%d:%d\n",h,m,s);
}
