#include <sys/socket.h>
#include <netinet/in.h>

struct Server
{
    int domain;
    int service;
    int protocol;
    u_long interface;
    int port;
    int backlog;

    struct sockaddr_in address;

    int socket;

    void (*launch)(void);
};

struct Server server_constructor(int domain, int service, int protocol, u_long interface, int port, int backlog, void (*launch)(void));
