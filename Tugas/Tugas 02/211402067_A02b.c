/*
	NIM 		: 211402067 
	Nama		: Ivandohan Samuel Siregar
	Nama File 	: 211402067_A02a.c
	
    ======== Aplikasi Pemeriksa Kebenaran Nilai Tahun Kabisat ========
*/


#include <stdio.h>

int main(){
    int x;  //x = tahun

    printf("\n\nPenentuan Nilai Kebenaran Tahun Kabisat\n\n");
    printf("Tahun yang akan dicek adalah\n=");
    scanf("%i", &x);


    //a. Tahun kabisat jika habis dibagi 400 
    if(x % 400 == 0)
        printf("\nYa, benar sekali, tahun %i adalah tahun kabisat\n\n", x);
    
    //b. Bukan tahun kabisat jika habis dibagi 100, tetapi tidak habis dibagi 400 
    else if(x % 100 == 0)
        printf("\nSayang sekali, tahun %i BUKANlah tahun kabisat\n\n", x);
    
    //c. Tahun kabisat jika tidak habis dibagi 100, tetapi habis dibagi 4 
    else if(x % 4 == 0)
        printf("\nYa, benar sekali, tahun %i adalah tahun kabisat\n\n", x);
    
    //d. Selain itu pastilah bukan tahun kabisat 
    else
        printf("\nSayang sekali, tahun %i BUKANlah tahun kabisat\n\n", x);



    return 0;
}

