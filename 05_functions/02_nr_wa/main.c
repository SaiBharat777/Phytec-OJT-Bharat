#include <stdio.h>

#include "nr_wa.h"

int main()
{
     int num1, num2;

     printf("Enter two numbers: ");
     scanf("%d %d", &num1, &num2);

     // Function call
     sum(num1, num2);

     return 0;
}