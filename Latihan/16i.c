/* Namafile: cthstrcmp.c
2 Membandingkan string */
#include <stdio.h>
#include <string.h>

int main()
{
    int x;
    char kata1[ ] = "Kapal ";
    char kata2[ ] = "Selamat";
    char kata3[7];

    printf("Kata 1: \"%s\"\n", kata1);
    printf("Kata 2: \"%s\"\n", kata2);

    printf("Hasil perbandingan %s dengan %s = %d\n", kata1, kata2, strcmp(kata1, kata2));
    strcpy(kata3, kata1);
    printf("Hasil perbandingan %s dengan %s = %d\n", kata1, kata3, strcmp(kata1, kata3));
    x = strcmp(kata2, kata3);
    printf("Hasil perbandingan %s dengan %s = %d\n", kata2, kata3, x);

    return 0;
}