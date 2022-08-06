/* Nama file: rsuka.c
Program rekursif sederhana */

#include <stdio.h>

void hitung(int); /* prototipe fungsi */

int main()
{
    hitung(1); /* pemicu */

    return 0;
}

void hitung(int n)
{
    printf("%d Saya suka rekursif!\n",n);

    if (n < 5) /* termination case */
        hitung(n+1); /* pemanggilan rekursif */

    printf("%d Rekursif saya suka!\n",n);
}