/*
        Nama        : Ivandohan Samuel Siregar
        NIM         : 211402067
        Nama File   : 211402067_A06.c

        ============== Menghitung Median Suatu Array ==============
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h> 


void bubbleSort(int *array , int n)
{ 
    int i, j, temp;

    for(i = 0; i < n-1; i++)
        for(j = n-1; j > i; j--)
            if(array[j-1] > array[j])
            {
                temp = array[j-1];
                array[j-1] = array[j];
                array[j] = temp;
            }


    printf("\n\nBilangan Random Setelah Disortir\n=> ");
    for(i=0 ; i<n ; i++)
    {
        printf("%d ",array[i]);
    }
}


float hitungMedian(int array[] , int n)
{
    float median = 0;
    

    if(n % 2 == 0)
        median = (array[(n-1)/2] + array[n/2])/2.0;
    else
        median = array[n/2];
    
    return median;
}

int main()
{

    int elemen_array[100] = {0};
    int i = 0 ,n = 0;
    float median = 0;

    printf("\n\n\n=== Program Menghitung Median Suatu Array ===\n\n");
    printf("Keterangan :\n");
    printf("Elemen array akan otomatis diisi dengan bilangan-bilangan random oleh program.\n\n");


    //Input rentang data elemen array, dengan batas maksimal 100.
    printf("\nInput Jumlah Elemen Array \n *Maks 100\n=> ");
    scanf("%d",&n);

    //Mengisi elemen-elemen array dengan bilangan acak
	srand(time(NULL));
	for(i = 0; i < n; i++)
    {
        elemen_array[i] = (rand() % n)+1;
    }
    
    //Menampilkan hasil srand
    printf("\nBilangan Random Array Oleh Program\n=> ");
	for(i = 0; i < n; i++)
        printf("%d ", elemen_array[i]);

    //Menyortir hasil srand tersebut
    bubbleSort(elemen_array , n);
    
    //Trigger fungsi pencari nilai median
    /*
        Fungsi bernilai float karena..
        apabila input user bernilai genap maka nilai median menjadi lebih akurat jika
        dibandingkan dengan menggunakan tipe data integer.
    */
    median = hitungMedian(elemen_array , n);
    
    //Output akhir berupa nilai median array tersebut
    printf("\n\nMedian Array Tersebut adalah ...\n=> %f\n\n\n",median);
    
    return 0;
}