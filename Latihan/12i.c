/*
    Nama            : Ivandohan Samuel Siregar
    NIM             : 211402067
    Nama File       : 12i.c
    Menghitung Banyak Digit Suatu Bilangan
*/

#include <stdio.h>
int bnykDigit(int);

int main()
{   
    int bil, hasil;

    printf("\n\nMenghitung Banyak Digit Bilangan\n\n");
    printf("Berikan Bilangan Bulat : ");
    scanf("%d", &bil);

    hasil = bnykDigit(bil);

    printf("\n\nBanyak Digit Bilangan %d adalah %d\n\n", bil, hasil);
    
    return 0;
}

int bnykDigit(int bil)
{
    int n;
    static int jlh = 0;

    if(bil > 0){
        
        jlh++;
        bnykDigit(bil/10);
    }

    else if(bil == 0){
        n = 1;
        return n;
    }

    return jlh;
}