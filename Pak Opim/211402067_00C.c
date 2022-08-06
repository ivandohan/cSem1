/*
	NIM 		: 211402067
	Nama		: Ivandohan Samuel Siregar
	Nama File 	: 211402067_01C.c
	Membalik Bilangan Bulat
*/


#include <stdio.h>

int main()
{
	int n, hsl, sisa;
	
	printf("Operasi Membalik Bilangan Bulat\n");
	printf("Input Nilai		: ");
	scanf("%d", &n);
	
	hsl = 0;
	
	while(n > 0)
	{
		sisa = n%10;
		hsl = (hsl*10) + sisa;
		n = n/10;
	}
	
	printf("Hasil		: %d", hsl);
	return 0;
}