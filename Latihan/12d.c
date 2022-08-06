/* Nama file: hailston.c
2 Bilangan "hailstones" */
#include <stdio.h>
int hailstone(int);

int main()
{
    int n;

    printf("\nBerikan bilangan bulat: ");
    scanf("%d", &n);
    printf("Hailstone dari %d =\n%d ", n,n);
    printf("\nJumlah: %d.\n", hailstone(n));

    return 0;
}

int hailstone(register int n)
{
    int n1;
    static int ct = 1;

    if (n == 1)
        return 1;
    
    else if ((n%2) == 0)
    {
        n1 = n/2;
        printf("%d ", n1);
        ct++;
        hailstone(n1);
    }

    else
    {
        n1 = 3*n + 1;
        printf("%d ", n1);
        ct++;
        hailstone(n1);
    }
    
    return ct;
}