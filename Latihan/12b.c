/* Nama file: rpangkat.c
2 Menghitung perpangkatan bilangan bulat */

#include <stdio.h>
long pangkat(int, int);

int main()
{
    int m, n, hsl;

    printf("Berikan bil. pokok dan eksponen: ");
    scanf("%d %d", &m, &n);
    
    hsl = pangkat(m, n); /* trigger */
    printf("%d pangkat %d = %ld\n", m, n, hsl);

    return 0;
}

long pangkat(int m, int n)
{
    long p=1;

    if (n > 0)
        p = m * pangkat(m, n-1);

    return p;
}