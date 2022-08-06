/* Nama file : proto1.c
Perlunya deklarasi prototipe */
#include <stdio.h>

int *f1(int *); /* deklarasi prototipe fungsi */

int main()
{
    
    int x = 11, z = x, *y;

    printf("x = %d, z = %d", x, z);
    y = f1(&z); /* pemanggilan fungsi */
    printf("*y = %d\n", *y);
    
    return 0;
}

int *f1(int *z) /* definisi fungsi */
{
    (*z)++;

    return z;
}