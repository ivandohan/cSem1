/*
	NIM 		: 211402067 
	Nama		: Ivandohan Samuel Siregar
	Nama File 	: 211402067_01a.c
	
    ======== Aplikasi Penghitung Volume dan Luas Permukaan Bola ========
*/

#include <stdio.h>
#define kuadrat(x) ((x) * (x))

int main(){

    char opsi;
    float r, phi, vol, luasp;

    /*
        r = jari-jari, phi = 22/7, vol = volume, luasp = luas permukaan 
    */

    printf("\n========  B O L A  ========\n\n\n");
    printf("Soal yang Ingin Anda Selesaikan  : \n");
    printf("a). Luas Permukaan Bola\n");
    printf("b). Volume Bola\n\n");
    printf("Pilihan Anda = ");
    scanf("%c", &opsi);

    phi = 3.142857;

    printf("\n\nJari-Jari Bola = ");
    scanf("%f", &r);

    if(opsi == 'a'){

        luasp = 4 * phi * kuadrat(r);
        printf("\n\nLuas Permukaan Bola = %f cm^2", luasp);
    
    }

    else{

        vol = (4 * phi * kuadrat(r) * r) / 3;
        printf("\n\nVolume Bola = %f cm^3", vol);

    }

    printf("\n\n===== T E R I M A   K A S I H ===== \n\n");

    return 0;
}