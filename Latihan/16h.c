/* Namafile: cthstrcat.c
2 Menyalin string */
#include <stdio.h>
#include <string.h>

int main()
{
    char kata1[14] = "Kapal ";
    char kata2[ ] = "Selamat";

    printf("Kata 1 adalah: \"%s\"\n", kata1);
    printf("Kata 2 adalah: \"%s\"\n", kata2);

    strcat (kata1, kata2, 5);

    printf("Kata 1 adalah: \"%s\"\n", kata1);
    printf("Kata 2 adalah: \"%s\"\n", kata2);

    return 0;
}