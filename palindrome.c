#include<stdio.h>
int main()
{
	int num,rev_num=0,rem,temp;
	printf("enter the number\n");
	scanf("%d", &num);
	while(num>0)
	{
		rem=num%10;
		rev_num=rev_num*10+rem;
		num=num/10;
	}
	printf("palindrome is %d",rev_num);
	if(temp==num)
	{
	printf("it is a palindrome");
	}
	else
	{
	printf("it is not a palindrome");
	}
	
	return 0;

}

