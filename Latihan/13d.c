 /* Nama file: fibo1.c
2 Deret n bilangan fibonacci */

#include <stdio.h>

int fibonacci(int); /* prototipe fungsi */
int f1 = 1, f2 = 1; /* variabel-variabelglobal */

int main()
{
    int i, n;

    printf("Banyaknya bilangan fibonacci: ");
    scanf("%d", &n);

    printf("Deret %d bilangan fibonacci:\n", n);
    for(i=1; i <= n; ++i)
        printf("%d ", fibonacci(i));
    
    printf("\n");

    return 0;
}

int fibonacci(int f)
{
    f = (f <= 2) ? 1 : f1 + f2;
    f2 = f1;
    f1 = f;
    
    return f;
}