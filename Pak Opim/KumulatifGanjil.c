/*
		NIM 		: 211402067
		Nama		: Ivandohan Samuel Siregar
		Title		: Menghitung Kumulatif Bilangan
		Nama File	: KumulatifGanjil.c
*/
#include <stdio.h>

int main()
{
	int n, i, Jlh;

	printf("Menghitung kumulatif bilangan.\n");
	printf("Berikan nilai n: ");
	scanf("%d", &n);

	i = 1;
	Jlh = 0;
	printf("%d", i);
	
	while(i < n)
	{
		Jlh = Jlh + i;
		i = i + 2;
	if(i < n)
		printf("+%d", i);
	else
		printf("=");
	}
	
	printf("%d\n", Jlh);

	return 0;
}