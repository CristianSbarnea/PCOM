#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define fileName "deserialize.txt"

typedef struct packet {
    char payload[100];
    int sum;
    int size;
} TPacket;

int main() {

    int fd = open(fileName, O_RDONLY);
    
    if (fd < 0) {
        fprintf(stderr, "File %s could not be open!", fileName);
        return -1;
    }

    TPacket packet;

    while ((read(fd, &packet, sizeof(TPacket))) > 0) {
        fprintf(stdout, "Payload: %s\nSum: %d\nSize: %d\n", 
                                    packet.payload, 
                                    packet.sum, 
                                    packet.size);
    }

    close(fd);

    return 0;
}
