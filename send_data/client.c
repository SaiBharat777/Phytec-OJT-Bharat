// client.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8080
#define BUFFER_SIZE 1024

int main() {
    int client_socket;
    struct sockaddr_in server_addr;
    char buffer[BUFFER_SIZE] = {0};

    // Create socket
    if ((client_socket = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    // Initialize server address structure
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);

    // Convert IPv4 and IPv6 addresses from text to binary form
    if (inet_pton(AF_INET, "127.0.0.1", &server_addr.sin_addr) <= 0) {
        perror("Invalid address/ Address not supported");
        exit(EXIT_FAILURE);
    }

    // Connect to the server
    if (connect(client_socket, (struct sockaddr *)&server_addr, sizeof(server_addr)) == -1) {
        perror("Connection failed");
        exit(EXIT_FAILURE);
    }

    printf("Connected to the server on port %d.\n", PORT);

    // Send commands to the server
    while (1) {
        printf("Enter command (type 'exit' to close the connection): ");
        fgets(buffer, sizeof(buffer), stdin);

        // Send the command to the server
        send(client_socket, buffer, strlen(buffer), 0);

        if (strcmp(buffer, "exit\n") == 0) {
            break;
        }

        // Receive and print the server's response
        memset(buffer, 0, sizeof(buffer));
        if (recv(client_socket, buffer, sizeof(buffer), 0) == -1) {
            perror("Receive failed");
            exit(EXIT_FAILURE);
        }

        printf("Server response: %s", buffer);
    }

    // Close the socket
    close(client_socket);

    return 0;
}

