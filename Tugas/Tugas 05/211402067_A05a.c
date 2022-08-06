/*
        Nama        : Ivandohan Samuel siregar
        NIM         : 211402067
        Nama File   : 211402067_A05a.c

        ============== Reverse String ==============
*/

#include <stdio.h>
void pembalikan();

int main()
{
    printf("\n\n\n== Fungsi Pembalikan Kalimat ==\n\n");
    printf("Tuliskan Sebuah Kalimat   :\n");
    
    pembalikan(); //Trigger fungsi

    printf("\n\n");
    return 0;
}

void pembalikan()
{
    char kalimat;
    kalimat = getchar();

    if (kalimat != '\n')
    {
        pembalikan();
        putchar(kalimat);
        return;
    }
    
}