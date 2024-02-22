#include<stdio.h>

int main() {
	int i;
    char a[10] = "manju";
    char b[10] = "sanju";
    char *ptr1 = a;
    char *ptr2 = b;

    for (int i = 0; *(ptr2 + i) != '\0'; i++) {
        *(ptr1 + i) = *(ptr2 + i);
    }
    
    *(ptr1 + i) = '\0';  // Add null terminator at the end

    printf("the copied string is %s\n", a);
    printf("the original string is %s\n", b);

    return 0;
}

