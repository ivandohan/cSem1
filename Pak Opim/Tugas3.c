/*
		NIM 		: 211402067
		Nama		: Ivandohan Samuel Siregar
		Tugas 3		: Menghitung Kumulatif Bilangan Genap
*/


#include <stdio.h>

int main()
{
	
	int n, i, jlh;
	
	printf("Menghitung Kumulatif Bilangan Ganjil\n");
	printf("Input Nilai		: ");
	scanf("%d", &n);
	
	i = 0;
	jlh = 0;
	
	while(i <= n)
	{
		jlh = jlh + i;
		i = i + 2;
	}
	
	printf("Jumlah Kumulatif Ganjil	: %d", jlh);
	return 0;
}