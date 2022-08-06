/*
	NIM 		: 211402067
	Nama		: Ivandohan Samuel Siregar
	Nama File 	: 211402067_01c.c
	
    ======== Aplikasi Penghitung Volume dan Luas Permukaan Silinder ========
*/

#include <stdio.h>
#include <math.h>
#define kuadrat(x) ((x) * (x))

int main(){

    char opsi;
    float r, h, phi, vol, luasp;

    /*
        r = jari-jari, phi = 22/7, vol = volume, luasp = luas permukaan,

        h= tinggi
    */

    printf("\n========  S I L I N D E R  ========\n\n\n");
    printf("Soal yang Ingin Anda Selesaikan : \n");
    printf("a). Luas Permukaan Silinder\n");
    printf("b). Volume Silinder\n\n");
    printf("Pilihan Anda = ");
    scanf("%c", &opsi);

    phi = 3.142857;

    //Request Nilai Jari-Jari
    printf("\n\nJari-Jari Silinder = ");
    scanf("%f", &r);

    //Request Nilai Tinggi
    printf("\nTinggi Silinder = ");
    scanf("%f", &h);



    if(opsi == 'a'){

        luasp = 2 * phi * r * ( r + h ) ;
        printf("\n\nLuas Permukaan Silinder = %f cm^2", luasp);
    
    }

    else{

        vol = phi * kuadrat(r) * h ;
        printf("\n\nVolume Silinder = %f cm^3", vol);

    }

    printf("\n\n===== T E R I M A   K A S I H ===== \n\n");

    return 0;
}