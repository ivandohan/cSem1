/* Namafile: outchar.c
2 Menampilkan output karakter ke layar */
#include <stdio.h>

int main()
{
    char ch;

    printf("Berikan sebuah karakter: ");
    scanf("%c", &ch);
    printf("Karakter yang diberikan adalah: ");
    putchar(ch);

    return 0;
}
