#include <stdio.h>
#include <math.h>

int main() {
    for (int num = 2; num <= 20; num++) {
        int count = 0;

        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                count++;
                break;
            }
        }

        if (count == 0 && num > 1) {
            printf("%d is a prime number\n", num);
        }
    }

    return 0;
}

