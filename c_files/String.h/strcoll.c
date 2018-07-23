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
    setlocale(LC_COLLATE, "cs_CZ.iso88592");
    const char* s1 = "hrnec";
    const char* s2 = "chrt";
    for( count=0; count <= 1000000; count++) {
        if(strcoll(s1, s2) < 0){}
    }
   
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("strcoll took %6.9f\n", secs);
    
}
