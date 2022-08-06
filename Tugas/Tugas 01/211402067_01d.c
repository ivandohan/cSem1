/*
	NIM 		: 211402067
	Nama		: Ivandohan Samuel Siregar
	Nama File 	: 211402067_01d.c
	
    ======== Aplikasi Penghitung Panjang Kabel dalam Regangan Jembatan ========
*/

#include <stdio.h>
#include <math.h>
#define kuadrat(x) ((x) * (x))

int main(){

    /*
        Diketahui   : 
            L = panjang kabel, ....................(Misalkan "pk")
            d = lengkungan dari pusat kabel,
            l = panjang rentangan jembatan ........(Misalkan "prj")
    */

    float pk, d, prj;
    char jwb;

    printf("\nPanjang Kabel dalam Regangan Jembatan\n\n");
    printf("Diketahui   :\n\tLengkungan dari Pusat Kabel = 6 ");
    printf("\n\tPanjang Rentangan Jembatan = 56");
    printf("Ditanya     :\n\tBerapa Panjang Kabel?\n\n");

    printf("Jawaban     :\n\tTampilkan Jawaban (y/n)\n");
    printf("= ");
    scanf("%c", &jwb);


    //deklarasi nilai
    prj = 56;
    d = 6;


    //operasi
    if( jwb == 'y'){

    pk = prj + ((8 * kuadrat(d)) / (3 * prj));
    printf("\n\n\nPanjang Kabel = %f \n\n", pk);

    }

    else{
        return 0;
    }

    printf("\n\n===== T E R I M A   K A S I H ===== \n\n");

    return 0;
}

