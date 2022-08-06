 /* Namafile: arrayAcak
2 Menginisialisasi array dengan bilangan acak
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

int main()
{
    int bilangan[N], i, totBil=0;
    float rata2;

    /* generate random array */
    srand(time(NULL));

    for(i=0; i<N; i++)
    {
        bilangan[i] = (rand() % N)+1;
        totBil += bilangan[i];
    }
    rata2 = (float)totBil/(float)N;

    /* print array */
    for(i=0; i<N; i++)
        printf("%d ", bilangan[i]);
    
    printf("\n Total = %d\n", totBil);
    printf(" Rata2 = %f\n", rata2);

    return 0;
}