/*
	NIM 		: 211402067 
	Nama		: Ivandohan Samuel Siregar
	Nama File 	: 211402067_A02a.c
	
    ======== Aplikasi Penukar Nilai Dua Buah Variabel Bilangan ========
*/


#include <stdio.h>

void swap(int *x, int *y)
{
    *x += *y;
    *y = *x - *y;
    *x -= *y;
}

int main()
{

    int a, b;

    printf("\n\nPertukaran Nilai Dua Buah Variabel\n\n");
    
    //Before
    printf("Sebelum Pertukaran\n");
    printf("Nilai variabel a    : ");
    scanf("%i", &a);
    printf("Nilai variabel b    : ");
    scanf("%i", &b);

    //Proses
    swap(&a, &b);

    //After
    printf("\n\nSetelah Pertukaran\n");
    printf("Nilai variabel a    : %i", a);
    printf("\nNilai variabel b    : %i\n\n", b);

    return 0;
}
