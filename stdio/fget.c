#include <stdio.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
    
{
    unsigned int limit = 1000000 ; 
    FILE* fp = fopen("test.txt", "w") ; 
    int ch = 'a' ;
    unsigned int count;
    for( count=0; count <= limit; count++) 
    {
        fputc(ch,fp) ;
    }
   fclose (fp) ; 
    
    FILE* fg = fopen("test.txt", "r") ;
        
    struct timeval stop, start;
    gettimeofday(&start, NULL);
    for( count=0; count <= limit; count++) 
    {
       fgetc(fg);
    }
   
    
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("fgetc took %6.6f\n", secs);
    
}
