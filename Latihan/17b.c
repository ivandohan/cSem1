
/* Program 16.2
2 Nama file: fdatamhs.c
3 Program untuk mencatat data mahasiswa
menggunakan fungsi */
#include <stdio.h>
#include <stdlib.h>
#define MAXMHS 2

struct rekordDataMhs
{
    char nim[9];
    char nama[21];
    char jenkel;
    unsigned umur;
};
typedef struct rekordDataMhs dataMhs;

dataMhs inputDataMhs(dataMhs);
void cetakDataMhs(dataMhs []);

int main()
{

    dataMhs mhsRek, mhs2122[MAXMHS];
    int i;

/* Input data mahasiswa */
    for(i=0; i<MAXMHS; i++)
        mhs2122[i] = inputDataMhs(mhsRek);
/* Output data mahasiswa */
    cetakDataMhs(mhs2122);
    return 0;
}

dataMhs inputDataMhs(dataMhs rekMhs)
{
    printf("Nomor induk mahasiswa: ");
    gets(rekMhs.nim);
    printf("Nama mahasiswa: ");
    gets(rekMhs.nama);
    printf("Jenis kelamin: ");
    rekMhs.jenkel = getchar();
    printf("Umur : ");
    scanf("%u", &rekMhs.umur);
    printf("\n");
    fflush(stdin);

    return rekMhs;
}

void cetakDataMhs(dataMhs mhs2122[])
{
    int i;
    printf("Data Pribadi Mahasiswa.\n");
    printf("\n-----------------------------\n");
    printf("%-10s%-21s%-5s%-4s\n","NIM", "NAMA","L/P", "UMUR");
    printf("\n-----------------------------\n");
    for(i = 0; i < MAXMHS; i++)
    {
        printf("%-10s", mhs2122[i].nim);
        printf("%-21s", mhs2122[i].nama);
        printf("%-5c ",mhs2122[i].jenkel);
        printf("%2d\n", mhs2122[i].umur);
    }
    printf("--------------------------\n");
}
