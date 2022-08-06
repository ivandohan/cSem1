/* Nama file : proto2.c
Tanpa deklarasi prototipe fungsi */

#include <stdio.h>

int f2(int *z)
{
    int x = 3;
    *z += x;
    return 0;
}

int main()
{
    int x = 7, *z = &x;
    
    f2(z);
    printf("*z = %d\n", *z);
    
    return 0;
}