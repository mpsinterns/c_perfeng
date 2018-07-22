#include <stdio.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{   
unsigned int limit = 1000000 ;
    
int ch = 'a' ;
    
    struct timeval stop, start;
    gettimeofday(&start, NULL);
    unsigned int count ;
    for( count=0; count <= limit; count++) 
    {
      putchar(ch) ;
    }
   
    
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("putchar took %6.6f\n", secs);
    
}
