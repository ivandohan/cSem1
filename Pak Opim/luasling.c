/*
		NIM 		: 211402067
		Nama		: Ivandohan Samuel Siregar
		Title		: Menghitung Luas Lingkaran
		Nama File	: luasling.c
*/

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
#define KUADRAT(x) ((x) * (x))

double luas;
double luas_lingkaran(double);

int main(int argc, char **argv)
{
	float jari2;

	if(argc < 2)
	{
		printf("PENGGUNAAN:\n\t%s jari-jari\n", argv[0]);
	}
	else
	{
		jari2 = atof(argv[1]);
		luas = luas_lingkaran(jari2);
		printf("Luas lingkaran berjari-jari %f = %f\n", jari2, luas);
	}

	return 0;
}

double luas_lingkaran(double r)
{
return (PI * KUADRAT(r));
}