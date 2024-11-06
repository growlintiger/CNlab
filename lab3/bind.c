#include <stdio.h>
#include <string.h>      // For memset
#include <sys/socket.h>  // For socket, bind, setsockopt
#include <arpa/inet.h>   // For sockaddr_in, inet_addr, htons
#include <unistd.h>      // For close

#define MYPORT 6969      // Define your port number

int main() {
    int sockfd, a;
    struct sockaddr_in my_addr;
    int opt = 1;

    // Create socket
    sockfd = socket(PF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        perror("Socket creation failed");
        return 1;
    }

    // Set socket options
    if (setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt)) == -1) {
        perror("Setsockopt failed");
        close(sockfd);
        return 1;
    }

    // Configure address struct
    my_addr.sin_family = AF_INET;
    my_addr.sin_port = htons(MYPORT);
    my_addr.sin_addr.s_addr = INADDR_ANY; // Bind to all available interfaces
    memset(&(my_addr.sin_zero), '\0', 8);

    // Bind socket
    a = bind(sockfd, (struct sockaddr *)&my_addr, sizeof(struct sockaddr));
    if (a == -1) {
        perror("Bind failed");
        close(sockfd);
        return 1;
    }

    printf("Bind successful: %d\n", a);

    // Close the socket
    close(sockfd);

    return 0;
}

