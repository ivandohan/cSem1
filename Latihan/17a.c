/* Program 16.1
2 Nama file: datamhs.c
3 Struct data mahasiswa */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXMHS 2

struct dataMhs
{
    char *nim;
    char *nama;
    char jenkel;
    unsigned umur;
};
struct dataMhs mhs2122[MAXMHS];

void cetakDataMhs(struct dataMhs[]);

int main()
{
    int i;

    for(i = 0; i < MAXMHS; i++)
    {
        mhs2122[i].nim = (char *) malloc (10);
        printf("Nim : ");
        gets(mhs2122[i].nim);
        printf("Nama : ");
        mhs2122[i].nama = (char *) malloc (21);
        gets(mhs2122[i].nama);
        printf("Jenis Kelamin : ");
        scanf("%c", &mhs2122[i].jenkel);
        printf("Umur : ");
        scanf("%u", &mhs2122[i].umur);
        printf("\n");
        fflush(stdin);
        getchar();
    }
    cetakDataMhs(mhs2122);

    return 0;
}

void cetakDataMhs(struct dataMhs mhs2122[])
{
    int i;
    printf("Data Pribadi Mahasiswa.\n");
    printf("------------------------------\n");
    printf("%-10s%-21s%-5s%-4s\n","NIM","NAMA","L/P", "UMUR");
    printf("------------------------------\n");
    for(i = 0; i < MAXMHS; i++)
    {
        printf("%-10s", mhs2122[i].nim);
        printf("%-22s", mhs2122[i].nama);
        printf("%-4c ",mhs2122[i].jenkel);
        printf("%-2d\n", mhs2122[i].umur);
    }
    printf("-----------------------------\n");
}