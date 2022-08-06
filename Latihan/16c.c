/* Nama file: Contoh13_2.c
2 Deklarasi array untuk string */
#include <stdio.h>

int main()
{
    char kota2[] = "Corvallis", temp;

    temp = kota2[2];
    kota2[2] = kota2[1];
    kota2[1] = temp;

    printf("%s\n", kota2);

    return 0;
}