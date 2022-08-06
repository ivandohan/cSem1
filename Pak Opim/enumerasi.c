/*
		NIM 		: 211402067
		Nama		: Ivandohan Samuel Siregar
		Title		: Penggunaan Jenis Data Enum
					Dengan Menggunakan Urutan Bulan sebagai Contoh
		Nama File	: enumerasi.c
*/


#include <stdio.h>
/* Definisi jenis data enum */
enum bln {jan=1,feb,mar,apr,mei,jun,jul,agt,sep,okt,nop,des};

int main()
{
	/* deklarasi variabel berjenis enum */
	enum bln bln_sekarang, bln_kemarin, bs;
	printf("Urutan Bulan : ");
	scanf("%d", &bs);
	
	bln_sekarang = bs;
	bln_kemarin = bln_sekarang - 1;
	printf("Sebelum bulan ke-%d adalah bulan ke-%d.\n", bln_sekarang, bln_kemarin);
	return 0;
}