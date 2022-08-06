#include <stdio.h>
#include <stdlib.h>

int cekPrima(long x)
{
    int i, habis = 0;
    for(i=2; i < x; i++)
    {
        if((x % i) == 0)
        {
            habis = 1;
            break;
        }
    }
    return habis;
}