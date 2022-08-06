/* Program 10.6
2 Nama file: fibo3a.c
3 Program deret n bilangan fibonacci */
#include <stdio.h>
extern int fibonacci(int);
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