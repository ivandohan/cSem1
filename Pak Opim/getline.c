/* Nama file: getline.c
2 Program contoh penggunaan getline */
#include <stdio.h>
#include <stdlib.h>

int getline(char **, int *);

int main()
{
    int bytes_read;
    int nbytes = 100;
    char *my_string;

    printf("Tulis satu baris teks.");
    /* Dua baris ini merupakan inti program */
    my_string = (char *) malloc (nbytes + 1);
    bytes_read = getline (&my_string, &nbytes);

    if (bytes_read == -1)
    {
        puts ("ERROR!");
    }
    else
    {
        printf("Saudara tulis %s\n", my_string);
    }
    return 0;
}