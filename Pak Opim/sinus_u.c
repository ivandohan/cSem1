/*
		NIM 		: 211402067
		Nama		: Ivandohan Samuel Siregar
		Title		: Menghitung Sinus(x) Dengan rumus pendekatan: 
					sin(x) = x - x^3/3! + x^5/5! - x^7/7! + ...
					di mana x dinyatakan dalam radian (pi radian = 180 derajat) 
		Nama File	: sinus_u.c
*/

#include <stdio.h>
#define JLH_SUKU 10
int tanda(int);
unsigned long faktorial(int);
double pangkat(double, int);
int main()
{

	double x = 0.0, sin_x;
	int i, j, suku;
	/* Tabel Sinus x untuk 10 nilai x */
	printf("TABEL SINUS\nx\tSin(x)\n");
	for(j=0; j<10; j++)
	{
		suku = 1;
		sin_x = 0.0;
	}
	for(i=1; i<=JLH_SUKU; i+=2)
	{
		sin_x += tanda(suku) * ((pangkat(x,i))/(double)
		faktorial(i));
		suku++;
	}
	return 0;
}