/*
	NIM 		: 211402067
	Nama		: Ivandohan Samuel Siregar
	Nama File 	: 211402067_01b.c
	
    ======== Aplikasi Penghitung Volume dan Luas Permukaan Kerucut ========
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

    printf("\n========  K E R U C U T  ========\n\n\n");
    printf("Soal yang Ingin Anda Selesaikan : \n");
    printf("a). Luas Permukaan Kerucut\n");
    printf("b). Volume Kerucut\n\n");
    printf("Pilihan Anda = ");
    scanf("%c", &opsi);

    phi = 3.142857;

    //Request Nilai Jari-Jari
    printf("\n\nJari-Jari Kerucut = ");
    scanf("%f", &r);

    //Request Nilai Tinggi
    printf("\nTinggi Kerucut = ");
    scanf("%f", &h);



    if(opsi == 'a'){

        luasp = phi * r * (r + sqrt( kuadrat(r) + kuadrat(h) ));
        printf("\n\nLuas Permukaan Kerucut = %f cm^2", luasp);
    
    }

    else{

        vol = (phi * kuadrat(r) * h) / 3;
        printf("\n\nVolume Kerucut = %f cm^3", vol);

    }

    printf("\n\n===== T E R I M A   K A S I H ===== \n\n");

    return 0;
}