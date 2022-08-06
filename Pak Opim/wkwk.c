/* Namafile: product1.c
 Menghitung a * b tanpa perkalian */


#include <stdio.h>

int main()
{
int a, b, c, k;

	printf("Mengalikan bilangan.\n");
	printf("Berikan dua buah bilangan: ");
	scanf("%d%d", &a, &b);
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