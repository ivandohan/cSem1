/* Namafile: cthstrcpy.c
2 Menyalin string */
#include <stdio.h>
#include <string.h>

int main()
{
    char kata1[] = "Selamat";
    char kata2[11];

    strcpy(kata2, kata1);
    printf("Kata 1 adalah: \"%s\"\n", kata1);
    printf("Kata 2 adalah: \"%s\"\n", kata2);

    return 0;
}