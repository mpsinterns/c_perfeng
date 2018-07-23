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
    const char *string = "abcde312$#@";
    const char *invalid = "*$#";
    for( count=0; count <= 1000000; count++) {
         size_t valid_len = strcspn(string, invalid);
    }
   
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("strcspn took %6.9f\n", secs);
    
}
