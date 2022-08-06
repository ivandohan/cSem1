/*
		NIM 		: 211402067
		Nama		: Ivandohan Samuel Siregar
		Title		: Mencetak Tabel ASCII
		Nama File	: asctab.c
*/


#include <stdio.h>

int main()

{
int i; 		/* pencacah nomor ASCII */

	/* Tampilkan seluruh karakter ASCII */
	printf("TABEL ASCII\n");

	for(i=0;i<256;i++)
	{
		printf("%d = %c\n", i, i);
		/* berhenti tiap-tiap kelipatan 20 */
		if(i%20 == 0)
			getchar();
	}

	/* berhenti untuk 20 baris terakhir */
	printf("Press <ENTER> ...\n");
	getchar();

	return 0;
}