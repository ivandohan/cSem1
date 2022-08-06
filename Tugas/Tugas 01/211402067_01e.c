/*
	NIM 		: 211402067
	Nama		: Ivandohan Samuel Siregar
	Nama File 	: 211402067_01e.c
	
    ======== Aplikasi Penghitung Nilai Maksimum dan Minimum 
             dari Dua Buah Bilangan ========
*/

#include <stdio.h>
#include <math.h>

int main(){

    float a, b, maks, min;

    printf("\n=== Nilai Maksimum dan Minimum ===");
    printf("\n\nBerikan Dua Bilangan untuk Dibandingkan!");
    
    //input nilai a
    printf("\n\n\ta   = ");
    scanf("%f", &a);

    //input nilai b
    printf("\n\tb   = ");
    scanf("%f", &b);

    maks = (a + b + fabs(a - b)) / 2;
    min = (a + b - fabs(a - b)) / 2;

    printf("\n\n Nilai Maksimum dari %f dan %f adalah %f ,", a,b,maks);
    printf("\n\n\t sedangkan\n\n");
    printf("Nilai Minimum dari %f dan %f adalah %f", a,b,min);


    printf("\n\n===== T E R I M A   K A S I H ===== \n\n");
}