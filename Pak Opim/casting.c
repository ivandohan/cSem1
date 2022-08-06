/*
		NIM 		: 211402067
		Nama		: Ivandohan Samuel Siregar
		Title		: Casting Data (Mengubah Jenis Data)
		Nama File	: casting.c
*/

#include <stdio.h>

int main()
{
	int x;
	float y, bilflo;
	printf("========== Casting Data ==========\n\n");
	printf("Berikan Bilangan Desimal untuk Dicasting = \n");
	scanf("%f", &bilflo);

	y = bilflo;
	x = (int) y;

	printf("\n\nJika Jenis Data Float y=%f Diubah ke Bentuk Data Integer,\nmaka hasilnya adalah x=%d \n\n", y, x);

	return 0;
}