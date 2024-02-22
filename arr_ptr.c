#include<stdio.h>

int main()
{
int num1=99;
int num2=88;
int num3=66;
int num4=35;
int num5=75;

int *ptr[5]={&num1,&num2,&num3,&num4,&num5};
printf("sizeof ptr = %lu\n",sizeof(ptr));
for(int i=0;i<5;i++)
{
printf("%d\n",*ptr[i]);//66
}



}
