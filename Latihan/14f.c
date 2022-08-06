/* Nama file: hitungel.c
2 program frekwensi bilangan dalam array */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define JLHBIL 10

void inisialisasiArray(int [], int []);
void salinArray(int [], int []);
void printArray(int []);
void tampilkanFrekuensi(int [], int []);


int main()
{
    int bilangan[JLHBIL], salinan[JLHBIL];

    inisialisasiArray(bilangan, salinan);
    printArray(bilangan);
    salinArray(bilangan, salinan);
    tampilkanFrekuensi(bilangan, salinan);
    printArray(salinan);

    return 0;
}

void inisialisasiArray(int bilangan[], int salinan[])
{
    int i;

    srand(time(NULL));

    for(i=0; i<JLHBIL; i++)
    {
        bilangan[i] = rand() % JLHBIL;
        salinan[i] = -99;
    }
}

void salinArray(int bilangan[], int salinan[])
{
    int i, j, sama;

    /* Salin bilangan-bilangan yang berbeda */
    for(i=0; i<JLHBIL; i++)
    {/* cari apakah bilangan ke-i sudah ada di array salinan */
        sama = 0;
        for(j=0; j<JLHBIL; j++)
            if(salinan[j] == bilangan[i])
                sama = 1;
/* jika bilangan ke-i belum ada, bilangan
tersebut dimasukkan ke array salinan
pada posisi yang baru yg ditunjuk oleh
elemen -99 */

        if (!sama)
        {
            j = 0;
            /* cari elemen yang masih kosong */
            while(salinan[j] != -99) j++;
            salinan[j] = bilangan[i];
        }
    }
}

void printArray(int Array[])
{
    int i;

    /* Tampilkan isi array */

    for(i=0; i<JLHBIL; i++)
        printf("%d ", Array[i]);
    printf("\n");
}

void tampilkanFrekuensi(int bilangan[], int salinan [])
{
    int i, j, bil, ct;

/* Hitung bilangan yang berbeda */
    bil = 0;
    for(i=0; i<JLHBIL; i++)
        if(salinan[i] != -99) bil++;

    /* Hitung frekwensi bilangan yang berbeda */
    for(i=0; i<bil; i++)
    {
        ct = 0;
        for(j=0; j<JLHBIL; j++)
        if(salinan[i] == bilangan[j])
        ct++;
    printf("%d terjadi %d kali.\n", salinan[i], ct);
    }
}