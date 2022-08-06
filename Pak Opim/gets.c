/* Nama file: gets.c
2 Menggunakan fungsi gets() */
#include <stdio.h>

int main()
{
    char str[80];

    printf("Berikan sebuah kalimat: ");
    gets(str);
    printf("Anda menulis: %s\n", str);

    return 0;
}