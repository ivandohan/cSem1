 /* Nama file: catalan.c
2 Program untuk mencetak bilangan Catalan */
#include <stdio.h> 
#define JLHBIL 20

void printArray(long []);

int main()
{
    int i, j, n;
    long C[JLHBIL] = {1, 1, 0};

    printf("Harga awal array:\n");
    printArray(C);

    printf("Jumlah bilangan Catalan yang diinginkan: ");
    scanf("%d", &n);
    if(n<=JLHBIL)
    {
        printf("%d bil. Catalan pertama:\n",n);
        printf("%ld %ld ", C[0], C[1]);
        
        for(i=2; i<n; i++)
        {
            for(j=0; j<=i-1; j++)
                C[i] = C[i] + (C[j] * C[i-j-1]);
            printf("%ld ", C[i]);
        }

        printf("\n");
    }
    else
        printf("Bilangan terlalu besar, maksimum adalah %d...\n", JLHBIL);

    return 0;
}

void printArray(long C[])
{
    int i;

    for(i=0; i <JLHBIL; i++)
        printf("%d ", C[i]);
    
    printf("\n");
}