/*
		NIM 		: 211402067
		Nama		: Ivandohan Samuel Siregar
		Title		: Mengkonversi Suhu dari Celcius ke Fahrenheit
		Nama File	: konversi1.c
*/
#include <stdio.h>
int main()
{
	int Celcius, Fahrenheit;
	/* Minta temperatur celcius */
	printf("Berikan temperatur Celcius: ");
	scanf("%d", &Celcius);

	/* Hitung temperatur Fahrenheit */
	Fahrenheit = (9 * Celcius) / 5 + 32;
	/* Tampilkan temperatur */
	printf("%d Celcius = %d Fahrenheit.\n", Celcius, Fahrenheit);

	return 0;
}