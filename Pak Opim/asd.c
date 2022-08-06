/* 
	Namafile: swap1.c
 	Mempertukarkan nilai dua variabel 
*/
#include <stdio.h>
int main() {
	
	int N;
	
	printf("Masukkan nilai N : ");
	scanf("%d", &N);
	
	if (N>50) 
	{
		N = N + 20;
	}
	else
	{
		N = N - 20;
	}
	
	printf("\nN = %d", N);
	return 0;
}