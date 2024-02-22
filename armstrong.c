#include<stdio.h>
int main()
{
	int num,originalnum,rem,result=0;
	printf("enyrt the three number:");
	scanf("%d",&num);
	originalnum=num;
	while(originalnum!=0)
	{
		rem=originalnum%10;
		result=result+rem*rem*rem;
		originalnum=originalnum/10;
	}
	if(result==num)
	{
		printf("it is a armstrong number:",num);
	}
	else
	{
		printf("it is not a armstrong number:",num);
	}
	return 0;
}

