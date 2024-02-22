#include <stdio.h>
#include <string.h>

int main() {
    char *token;
    char data[100] = "Rahul 6366035611 rahul@gmail.com";
    token = strtok(data, " ");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}

