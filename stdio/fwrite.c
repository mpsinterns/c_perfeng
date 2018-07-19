#include <stdio.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

enum { SIZE = 5 } ;
int main(void)
{
   double a[SIZE] = {1, 2, 3, 4, 5};
    FILE *f1 = fopen("file.bin", "wb");
     ;
    
    struct timeval stop, start;
    gettimeofday(&start, NULL);
    unsigned int count;
    
    for( count=0; count <= 1000000; count++) 
    {
        size_t r1 = fwrite(a, sizeof a[0], SIZE, f1); 
    }
    
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("fwrite took %6.6f\n", secs);
    
}
