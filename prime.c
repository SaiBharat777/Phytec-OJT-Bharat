#include <stdio.h>
#include <math.h>
#include <stdio.h>
int main() {
    int num, count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 2; i <= sqrt(num); i++) 
    {
        if (num % i == 0) {
            count++;
            break;
        }
	//printf("%d",count);
    }
//}
   if (count == 0 && num > 1) {
       printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }

    return 0;
}

