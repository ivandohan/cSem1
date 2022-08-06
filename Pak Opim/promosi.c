/*
		NIM 		: 211402067
		Nama		: Ivandohan Samuel Siregar
		Title		: Promosi Data (dari Data Terkecil ke Terbesar
		Nama File	: promosi.c
*/

#include <stdio.h>

int main()
{
	int x, bilbul;
	float y;
	
	printf("========== Promosi Data ========== \n\n");
	printf("Berikan Bilangan Bulat = \n");
	scanf("%d", &bilbul);

	x = bilbul;
	y = x;

	printf("\n\n Bentuk float dari x=%d adalah y=%f\n", x, y);

	return 0;
}