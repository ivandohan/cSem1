/*
		NIM 		: 211402067
		Nama		: Ivandohan Samuel Siregar
		Title		: Penggunaan Jenis Data Typedef dengan Menganalisa Sirkuit Sederhana
		Nama File	: typedef.c
*/
#include <stdio.h>

typedef double Resistance;

int main()
{
	Resistance R1, R2, R3;
	double TotalR, Voltase, Arus;

	/* Minta tiga resistan dan voltase */
	printf("Berikan tiga resistan (Ohm): ");
	scanf("%lf %lf %lf", &R1, &R2, &R3);

	printf("Voltase yang digunakan (volt): ");
	scanf("%lf", &Voltase);
	
	/* Hitung Total Resistan dan Arus */
	TotalR = 1.0/(1.0/R1 + 1.0/R2 + 1.0/R3);
	Arus = Voltase / TotalR;
	
	/* Tampilkan Arus */
	printf("Arusnya = %lf amps.\n", Arus);

	return 0;
}