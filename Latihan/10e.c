/* Nama file: primakah.c
Menentukan apakah suatu bilangan prima atau bukan */
#include <stdio.h>
#include <stdlib.h>
#include "10e.h"


int main(int argc, char **argv)
{
    int habis;
    long x;


    if (argc < 2)
        goto error;
    
    x = atoi(argv[1]);
    
    if(x <= 1)
        printf("Bilangan prima terkecil adalah 2.\n");
    else
    {
        habis = cekPrima(x);
        if(!habis)
            printf("%ld bilangan prima.\n", x);
        else
            printf("%ld bukan bilangan prima.\n", x);
    }

    return 0;
    error: printf("Pemakaian %s STRING1... STRING2... \n", argv[0]);
    exit(0);
}   
