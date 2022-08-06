/*
		NIM 		: 211402067
		Nama		: Ivandohan Samuel Siregar
		Title		: Mengkonversi Suhu dari Fahrenheit ke Celcius
		Nama File	: konversi1.c
*/
#include <stdio.h>

int main()
{
	float Celcius, Fahrenheit;

	/* Minta temperatur fahrenheit */
	printf("Berikan temperatur Fahrenheit: ");
	scanf("%f", &Fahrenheit);

	/* Hitung temperatur Celcius */
	Celcius = (5.0F/9.0F) * (Fahrenheit - 32);
	/* Tampilkan temperatur*/
	printf("%f Fahrenheit = %f Celcius.\n",Fahrenheit, Celcius );

	return 0;
}