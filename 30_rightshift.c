#include<stdio.h>
int main()
{
        int num,rs;
        printf("Enter the number: ");
        scanf("%d",&num);
        printf("number of times to be shift right: ");
        scanf("%d",&rs);
        int result=num>>rs;
        printf("%d\n",result);
}

