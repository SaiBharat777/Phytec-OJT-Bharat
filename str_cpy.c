
#include <stdio.h>

int main() {
    char a[10] = "manju";
    char b[10] = "sanju";
    
    int i;

    for (i = 0; b[i] != '\0'; i++) {
        a[i] = b[i];
    }
    a[i] = '\0';

    printf("The copied string is %s\n", a);
    printf("The original string is %s\n", b);

    return 0;
}

