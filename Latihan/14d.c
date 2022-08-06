/* Namafile: elemenarr.c
2 Mendemonstrasikan elemen array */
#include <stdio.h>

int main()
{
    int i, skala,
    bilangan[6] = {6, 12, 11, 5, 27, 10};

    printf("Elemen-elemen array:\n");
    skala = 0;
    
    for(i=0; i<6; i++)
    {
        printf("(bilangan + %d) --> ", skala);
        printf("bilangan[%d] ", i);

        printf("berisi nilai: %d\n", (bilangan + skala)[0]); skala++;
        skala++;
    }
    return 0;
}