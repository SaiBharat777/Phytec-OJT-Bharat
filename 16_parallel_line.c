#include<stdio.h>
int main()
{
	int a1,a2,b1,b2,c1,c2,d1,d2;
	float s1,s2;
	printf("Enter co-ordinates for line 1: ");
	scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
	printf("Enter co-ordinates for line 2: ");
	scanf("%d%d%d%d",&c1,&c2,&d1,&d2);
        s1=(b2-b1)/(a2-a1);
	s2=(d2-d1)/(c2-c1);
	if(s1==s2)
	{
		printf("Parallel lines\n");
	}
	else
	{
		printf("not parallel lines\n");
	}
}

