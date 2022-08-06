/* Namafile: cthstrlen.c
2 Menghitung panjang string */
#include <stdio.h>
#include <string.h>

int main()
{
char kata1[14] = "Kapal ";
char kata2[ ] = "Selamat";

printf("Kata 1: \"%s\", panjang=%d\n", kata1, strlen(kata1));
printf("Kata 2: \"%s\", panjang=%d\n", kata2, strlen(kata2));

strncat (kata1, kata2, 5);
printf("Kata 1: \"%s\", panjang=%d\n", kata1, strlen(kata1));
printf("Kata 2: \"%s\", panjang=%d\n", kata2, strlen(kata2));


return 0;
}