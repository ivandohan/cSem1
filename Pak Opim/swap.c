/* 
	Nama Program : Swap
	Materi pak Opim
*/


#include <stdio.h>

int main() 
{
	int a, b, t;
	
	printf("Masukkan Nilai Bilangan Bulat : ");
	scanf("%d%d", &a, &b);
	
	t = a;
	a = b;
	b = t;
	printf("a=%d, b=%d", a, b);
	
	
	return 0;
}


