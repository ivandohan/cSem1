/* Nama File: fibo2a.c
2 Menampilkan deret n bilangan fibonacci */

#include <stdio.h>

int f1 = 1, f2 = 1; /* variabel eksternal */
int fibonacci(int); /* prototipe fungsi */

int main()
{
    int i, n;

    printf("Banyak bilangan fibonacci: ");
    scanf("%d", &n);


    printf("Deret %d bilangan fibonacci:\n", n);
    for(i=1; i <= n; ++i)
        printf("%d ", fibonacci(i));
    
    printf("\n");

return 0;
}
