#include <stdio.h>


int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int n, sum = 0;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        sum += factorial(i);
        printf("%d! ", i);
        if (i < n) {
            printf("+ ");
        }
    }

    printf("= %d\n", sum);

    return 0;
}

