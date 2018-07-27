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
    const char* str = "hello world, friend of mine!";
    const char* sep = " ,!";
    for( count=0; count <= 1000000; count++) {
        str = strpbrk(str, sep);
    }
   
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("strpbrk took %6.9f\n", secs);
    
}
