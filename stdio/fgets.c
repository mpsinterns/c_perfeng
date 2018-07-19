#include <stdio.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

enum { SIZE = 5 } ;
int main(void)
{
    FILE* tmpf = tmpfile();
    fputs("Alan Turing\n", tmpf);
    fputs("John von Neumann\n", tmpf);
    fputs("Alonzo Church\n", tmpf);
 
    rewind(tmpf);
 
    char buf[8] ; 

    
    struct timeval stop, start;
    gettimeofday(&start, NULL);
    unsigned int count;
    
    for( count=0; count <= 1000000; count++) 
    {
        while (fgets(buf, sizeof buf, tmpf) != NULL); 
    }
    
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("fgets took %6.6f\n", secs);
}
