/* Nama file: rfibo.c
2 Program untuk menentukan suku fibonacci */
#include <stdio.h>
int rfibo(int);

int main()
{
    unsigned n;
    int f;

    printf("Deret Fibonacci\n");
    printf("Suku deret fibonacci ke berapa? ");
    scanf("%d", &n);
    printf("Suku Fibonacci ke %d adalah", n);

    f = rfibo(n);
    printf(" %d\n", f);
    
    return 0;
}

int rfibo(int n)
{
    int i, f=0;

    if (n < 3)
        return 1;
    else
        f = f + (rfibo(n-1) + rfibo(n-2));
    return f;
}