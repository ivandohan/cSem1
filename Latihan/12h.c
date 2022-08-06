/* Nama file: jlhDigit.c
Menghitung penjumlahan digit bilangan */

#include <stdio.h>


int jlhDigit(int); /* prototype */

int main()
{
    int bil, hsl;

    printf("Penjumlahan digit bilangan\n");
    printf("Berikan sebuah bilangan bulat: ");
    scanf("%d", &bil);

    hsl = jlhDigit(bil); /* function call */

    printf("Jumlah digit bilangan %d = %d\n", bil, hsl);

    return 0;
}

int jlhDigit(int bil)
{
    int sisa, jlh = 0;

    sisa = bil % 10;
    bil = bil / 10;

    if(bil == 0)
        return sisa;
    else
        jlh = sisa + jlhDigit(bil);

    return jlh;
}