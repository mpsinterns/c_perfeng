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
    int x = 42;
    for( count=-500000; count <= 500000; count++) {
        isdigit('1234');
        atof("1312312");
        testexp(x);
    }
    
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("sin took %6.9f\n", secs);
    
}

int testexp(int n){
   return  sin(n);
}
