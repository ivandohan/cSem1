/* Nama file: faktor.c
Program untuk menghitung faktorial bilangan bulat n! = 1, 2, 3, ... , n */
#include <stdio.h>

long long fakt(int); /* deklarasi prototipe fungsi */

int main()
{
    unsigned bil;

    printf("\n\nBerikan sebuah bilangan bulat: ");
    scanf("%u", &bil);
    printf("\n\n%u faktorial = %ld.\n\n\n", bil, fakt(bil));

    return 0;
}

long long fakt(int n) /* memanggil fungsi */
{
    int i;
    long long f=1;

    for(i=2;i<=n;++i)
        f *= i;

    return f;
}