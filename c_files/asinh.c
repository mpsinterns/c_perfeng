#include <stdio.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    struct timeval stop, start;
    gettimeofday(&start, NULL);
    signed int count;
    double x = 42;
    for( count=0; count <= 1000000; count++) {
        asinh(x);
    }
    
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("inverse hyperbolic sin took %6.9f\n", secs);
    
}
