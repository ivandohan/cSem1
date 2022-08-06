/*
		NIM 		: 211402067
		Nama		: Ivandohan Samuel Siregar 
		Tugas 2		: Menghitung Kumulatif Bilangan Ganjil
*/


#include <stdio.h>

int main()
{
	
	int n, i, jlh;
	
	printf("Menghitung Kumulatif Bilangan Ganjil\n");
	printf("Input Nilai		: ");
	scanf("%d", &n);
	
	i = 1;
	jlh = 0;
	
	while(i <= n)
	{
		jlh = jlh + i;
		i = i + 2;
	}
	
	printf("Jumlah Kumulatif Ganjil	: %d", jlh);
	return 0;
}