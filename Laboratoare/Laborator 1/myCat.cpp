#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define MAX 1024

int main(int argc, char** argv) {

    if (argc != 2) {
        fprintf(stderr ,"Usage: ./myCat file\n");
        exit(1);
    }
    
    int fd = open(argv[1], O_RDONLY);

    if (fd < 0) {
        fprintf(stderr, "File %s could not be open!", argv[1]);
        exit(1);
    }

    char buffer[MAX];

    while ((read(fd, buffer, MAX)) > 0) {
        fprintf(stdout, "%s", buffer);
    }

    fprintf(stdout, "\n");

    close(fd);

    return 0;
}