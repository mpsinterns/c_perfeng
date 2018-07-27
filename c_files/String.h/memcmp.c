#include <stdio.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    struct timeval stop, start;
    gettimeofday(&start, NULL);
    unsigned int count;
    char a1[] = {'a','b','c'};
    char a2[sizeof a1] = {'a','b','d'};
    
    for( count=0; count <= 1000000; count++) {
        int rc = memcmp(a1, a2, sizeof a1);
    }
   
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("memcmp took %6.9f\n", secs);
    
}
