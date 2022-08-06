/*
	NIM 		: 211402067
	Nama		: Ivandohan Samuel Siregar
	Tugas 1		: Perkalian Bilangan
*/



#include <stdio.h>

int main() 
{
	int a, b, c, k;
	
	printf("Perkalian Bilangan\n");
	printf("Input Bilangannya : ");
	scanf("%d\n%d", &a, &b);
	
	
	k = 0;
	c = 0;
	
	while(k != b)
	{
		k++;
		c = c + a;
	}
	
	printf("%d * %d = %d\n", a, b, c);
	return 0;
	
	
}