#include<stdio.h>
int fib(int n)
{
if (n <= 1) 
{
return n;
}
return fib(n - 1) + fib(n - 2);
}
int main()
{
int n = 8;
printf("nth Fibonacci number is %d", fib(n));
return 0;
}
