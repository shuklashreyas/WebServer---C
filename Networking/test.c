#include "Server.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void launch(struct Server *server)
{
    char buffer[30000] = {0};
    printf("=============== Waiting For Connection=====================\n");
    int adress_length = sizeof(server->address);
    int new_socket = accept(server->socket, (struct sockaddr *)&server->address, (socklen_t *)&adress_length);

    read(new_socket, buffer, 30000);
    printf("%s\n", buffer);
    char *hello = "HTTP/1.1 200 OK\nContent-Type: text/plain\nContent-Length: 12\n\nSHREYAS SHUKLA!";
    write(new_socket, hello, strlen(hello));
    close(new_socket);
}

int main()
{
    struct Server server = server_constructor(AF_INET, SOCK_STREAM, 0, INADDR_ANY, 8080, 10, launch);
    server.launch(&server);
}
