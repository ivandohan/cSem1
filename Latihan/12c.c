/* Namafile: rTail.c
2 Contoh tail rekursif */
#include <stdio.h>
int fTail(int);

int main()
{
    int n, hsl;

    printf("Rekurensi bilangan\n");
    printf("Berikan sebuah blangan bulat: ");
    scanf("%d", &n);

    if (n >= 0)
        hsl = fTail(n); /* Trigger */

    printf("%d", hsl);
    return 0;
}

int fTail(int n)
{
    if (n == 0) /* Syarat berhenti */
        return 0;
    
    else
    {   
        printf("%d ", n); /* Print menurun */
        return fTail(n-1) + 1; /* rekursif call */
    }

}
