/* Nama file: permacak.c
2 Program pembangkit permutasi acak */
#include <stdio.h>
#include <stdlib.h>
#define N 10
#define TESTRUN 12

typedef int permutasi[N];
void cetakArray(int [], int);
void swap(int [], int, int);

int main()
{
    permutasi p;
    int k, m, t, i, j;

    /* Inisialisasi array */
    for(i = 0; i < N; i++)
        p[i] = i;

    printf("Permutasi Acak\n");
    cetakArray(p, N);

    /* Proses permutasi */
    for(j = 0; j < TESTRUN; j++)
    {
        for(k = N-1; k > 0; k--)
        {
            m = rand() % k;
            swap(p, k, m);
        }
        cetakArray(p, N);
    }
    return 0;
}

void cetakArray(int p[], int n)
{
    int i;

    for(i=0; i < n; i++)
        printf(" %2d", p[i]);
    printf("\n");
}

void swap(int p[], int k, int m)
{
    int t;

    t = p[k];
    p[k] = p[m];
    p[m] = t;
}
