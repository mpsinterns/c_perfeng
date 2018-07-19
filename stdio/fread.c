#include <stdio.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

enum { SIZE = 5 } ;
int main(void)
{
    double a[SIZE] = {1.,2.,3.,4.,5.};
    FILE *fp = fopen("test.bin", "wb"); // must use binary mode
    fwrite(a, sizeof *a, SIZE, fp); // writes an array of doubles
    fclose(fp);
 
    double b[SIZE];
    fp = fopen("test.bin","rb") ;
    
    struct timeval stop, start;
    gettimeofday(&start, NULL);
    unsigned int count;
    
    for( count=0; count <= 1000000; count++) 
    {
        size_t ret_code = fread(b, sizeof *b, SIZE, fp); 
    }
    
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("fread took %6.6f\n", secs);
    
}
