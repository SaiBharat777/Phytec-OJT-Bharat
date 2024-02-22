#include <stdio.h>

int factorial(int num) {
    
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int n;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer for n.\n");
        return 1;
    }

    double sum = 0.0;

   
    for (int i = 1; i <= n; i++) {
        sum += (double)factorial(i) / i;
    }

    
    printf("Result: %.2f\n", sum);

    return 0;
}

