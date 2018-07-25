#include <stdio.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>


int main(void)
{
    struct timeval stop, start;
    gettimeofday(&start, NULL);
    unsigned int count;
    wchar_t src[] = L"hi";
    wchar_t dest[6] = {L'a', L'b', L'c', L'd', L'e'};

    for( count=0; count <= 1000000; count++) 
    {
        wcsncpy(dest, src, 4);
    }

    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("wcsncpy took %6.6f\n", secs);
}
