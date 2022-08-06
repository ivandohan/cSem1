/*
		NIM 		: 211402067
		Nama		: Ivandohan Samuel Siregar
		Title		: Menghitung Sisa Peluruhan Zat Radio Aktif
		Nama File	: radioactive.c
*/

#include <stdio.h>
#include <math.h>

int main()
{
	double JlhAwal, ParuhHidup, Waktu, Sisa;

	printf("Berikan jumlah awal (mg) zat, ");
	printf(" paruh-hidupnya (hari) dan ");
	printf("waktu (hari) untuk mencari jumlah yang tersisa: ");

	scanf("%lf %lf %lf", &JlhAwal, &ParuhHidup, &Waktu);
	
	Sisa = JlhAwal * pow(0.5, (Waktu / ParuhHidup));
	printf("Jumlah yang tersisa = %lf mg.\n",Sisa);

	return 0;
}