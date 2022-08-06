/* Namafile: cthStringPtr3.c
2 Alokasi dinamik untuk string */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define KOTA "CORVALLIS"

int main()
{
    char *kota1;
    int i;

    kota1 = (char *) malloc(sizeof(KOTA));

    //kota1 = KOTA;

    strcpy(kota1, KOTA);

    printf ("Alokasi memori=%u\n", sizeof(char)*strlen(KOTA)+1);
    
    printf ("%s, %c%c\n", kota1, *(kota1+1), *(kota1+2));
    
    printf("Alamat memori kota1=%u\n", &kota1);
    printf("Isi alamat %u adalah %u\n", &kota1,&kota1[0]);
    
    for(i=0; i<9; i++)
    {
        printf("Alamat memori kota1[%d] = %u\n", i,&kota1[i]);
        printf("Berisi nilai = %c\n\n", *(kota1+i));
    }
    return 0;
}