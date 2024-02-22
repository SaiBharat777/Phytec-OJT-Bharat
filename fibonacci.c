
#include<stdio.h>

int main() {
    int n;
    printf("Enter the Fibonacci number position: ");
    scanf("%d", &n);

    int first = 0, second = 1, fib;

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    if (n == 1)
    {
        fib = first;
    } 
    else if (n == 2)
    {
        fib = second;
    }
    else 
    {
        for (int i = 3; i <= n; i++) {
            fib = first + second;
            first = second;
            second = fib;
        }
    }

    printf("The Fibonacci number at position %d is: %d\n", n, fib);

    return 0;
}

