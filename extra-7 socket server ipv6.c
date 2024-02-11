#define _GNU_SOURCE

#include <errno.h>
#include <getopt.h>
#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#include <arpa/inet.h>

#define BUFSIZE 1024
#define DEFAULT_PORT 37482
#define DEFAULT_MESSAGE "Hello Spring!!"
#define DEFAULT_SERVER "localhost"

#define USAGE \
    "usage:\n" \
    "  echoclient [options]\n" \
    "options:\n" \
    "  -p <port>            Port (Default: 37482)\n" \
    "  -s <server>          Server (Default: localhost)\n" \
    "  -m <message>         Message to send to server (Default: \"Hello Spring!!\")\n" \
    "  -h                   Show this help message\n"

static struct option longOptions[] = {
    {"server", required_argument, NULL, 's'},
    {"port", required_argument, NULL, 'p'},
    {"message", required_argument, NULL, 'm'},
    {"help", no_argument, NULL, 'h'},
    {NULL, 0, NULL, 0}
};

int main(int argc, char **argv) {
    int option_char;
    unsigned short portno = DEFAULT_PORT;
    char *hostname = DEFAULT_SERVER;
    char *message = DEFAULT_MESSAGE;

    // Parse and set command line arguments
    while ((option_char = getopt_long(argc, argv, "s:p:m:h", longOptions, NULL)) != -1) {
        switch (option_char) {
            case 's': hostname = optarg; break;
            case 'p': portno = (unsigned short)atoi(optarg); break;
            case 'm': message = optarg; break;
            case 'h': 
                fprintf(stdout, "%s", USAGE);
                return 0;
            default:
                fprintf(stderr, "%s", USAGE);
                return EXIT_FAILURE;
        }
    }

    if ((portno < 1025) || (portno > 65535)) {
        fprintf(stderr, "Invalid port number: %d\n", portno);
        return EXIT_FAILURE;
    }

    char port_str[6];
    snprintf(port_str, sizeof(port_str), "%u", portno);

    struct addrinfo hints, *serverInfo, *p;
    memset(&hints, 0, sizeof(hints));
    hints.ai_family = AF_UNSPEC;    // Use IPv4 or IPv6
    hints.ai_socktype = SOCK_STREAM;

    int rv;
    if ((rv = getaddrinfo(hostname, port_str, &hints, &serverInfo)) != 0) {
        fprintf(stderr, "getaddrinfo: %s\n", gai_strerror(rv));
        return EXIT_FAILURE;
    }

    int sockfd;
    for (p = serverInfo; p != NULL; p = p->ai_next) {
        if ((sockfd = socket(p->ai_family, p->ai_socktype, p->ai_protocol)) == -1) {
            perror("client: socket");
            continue;
        }

        if (connect(sockfd, p->ai_addr, p->ai_addrlen) == -1) {
            close(sockfd);
            perror("client: connect");
            continue;
        }

        break; // if we get here, we must have connected successfully
    }

    if (p == NULL) {
        fprintf(stderr, "client: failed to connect\n");
        return EXIT_FAILURE;
    }

    freeaddrinfo(serverInfo);

    ssize_t numbytes;
    if ((numbytes = send(sockfd, message, strlen(message), 0)) == -1) {
        perror("send");
        close(sockfd);
        return EXIT_FAILURE;
    }

    char buf[BUFSIZE];
    if ((numbytes = recv(sockfd, buf, BUFSIZE-1, 0)) == -1) {
        perror("recv");
        close(sockfd);
        return EXIT_FAILURE;
    }

    buf[numbytes] = '\0';
    printf("client: received '%s'\n", buf);

    close(sockfd);
    return 0;
}