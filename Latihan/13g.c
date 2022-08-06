/*Nama file: fibo3.c
2 Menampilkan deret n bilangan fibonacci */

#include <stdio.h>

int fibonacci(int); /* Prototipe fungsi */

int main()
{
    int i, n;

    printf("Berikan banyaknya bil fibonacci: ");
    scanf("%d", &n);
    printf("Deret %d bilangan fibonacci:\n", n);

    for(i=1; i <= n; ++i)
        printf("%d ", fibonacci(i));
    printf("\n");
    return 0;
}

int fibonacci(int f)
{
    /* f1 dan f2 bersifat statik */
    static int f1 = 1, f2 = 1;

    f = (f <= 2) ? 1 : f1 + f2;
    f2 = f1;
    f1 = f;
    return f;
}