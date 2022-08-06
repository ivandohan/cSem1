/*
		NIM 		: 211402067
		Nama		: Ivandohan Samuel Siregar
		Title		: Mengkonversi Karakter ke Kode ASCII
		Nama File	: AscKar.c
*/
#include <stdio.h>

int main()
{
	char c;

	/* Minta sebuah karakter */
	printf("Berikan sebuah karakter: ");
	scanf("%c", &c);
	/* Tampilkan Kode ASCII */
	printf("Kode ASCII %c adalah %d.\n", c, c);

	return 0;
}