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
    char szSomeFileName[] = "foo/bar/foobar.txt";
    for( count=0; count <= 1000000; count++) {
        char *pLastSlash = strrchr(szSomeFileName, '/');
    }
   
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("strrchr took %6.9f\n", secs);
    
}
