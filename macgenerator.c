#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

// nr >= 0 && nr < 256
void tohex(int nr, char *hex) {
    printf("arrive\n");
    hex = malloc(3*sizeof(char));
    snprintf(hex, 4, "%02X", nr); // Format as 2-digit uppercase hex
    printf("%s %d", hex, nr);
}

int main (int argc, char** argv) {
    struct timeval t;
    int nr;

    if (argc > 2) { printf("usage: ./macgenerator [NR_OF_MACS]\n"); exit(1); }
    else if (argc == 2) nr = atoi(argv[1]);
    else nr = 1;

    gettimeofday(&t, NULL);
    srand(t.tv_usec);
   
    for (int i = 0; i < nr; i++)
        printf("%02X:%02X:%02X:%02X:%02X:%02X\n", rand()%255, rand()%255, rand()%255, rand()%255, rand()%255, rand()%255);
}   
