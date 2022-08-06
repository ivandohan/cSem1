 /* Nama file: rgcd.c
2 Program untuk menentukan PPB */

#include <stdio.h>
int gcd(int, int);
int main()
{
    int m, n;

    printf("Greatest Common Divisor\n");
    printf("Berikan dua buah bilangan bulat: ");
    scanf("%d %d", &m, &n);
    printf("GCD dari %d dan %d = %d\n", m, n, gcd(m,n));

    return 0;
}

int gcd(int p, int q)
{
    int r , res;

    r = p % q;

    if (r == 0)
        res = q;
    else
        res = gcd(q, r);
    
    return res;

    return
}