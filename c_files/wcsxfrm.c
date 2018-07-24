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
    const wchar_t *in1 = L"\u00e5r";
    wchar_t out1[1+wcsxfrm(NULL, in1, 0)];

    for( count=0; count <= 10; count++) 
    {
        wcsxfrm(out1, in1, sizeof out1/sizeof *out1);
    }

    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("wcsxfrm took %6.6f\n", secs);
}
