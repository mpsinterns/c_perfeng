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
    const char* string = "Hello World!";
    const char* string2 = "Hello";
    for( count=0; count <= 1000000; count++) {
        int rc = strcmp(string, string2);
    }
   
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("strcmp took %6.9f\n", secs);
    
}
