/* Program 16.3
2 Nama file: koord.c
3 Program untuk menyusun titik koordinat dalam
linked list */

#include <stdio.h>
#include <stdlib.h>

typedef struct titikSimpul titikKoord;
struct titikSimpul
{
    int absis;
    int ordinat;
    titikKoord *berikut;
};

titikKoord *tambahTitik(titikKoord *);
titikKoord *buangTitik(titikKoord *);
void cetakDaftar(titikKoord *);

int main()
{
    titikKoord *kepala = NULL;
    char pilih = '0';
    do
    {
        system("cls");
        printf("Menu:\n");
        printf("1. Menambah titik.\n");
        printf("2. Membuang titik.\n");
        printf("3. Mencetak daftar.\n");
        printf("4. Selesai.\n");

        printf("Pilihan: ");
        pilih = getchar();
        switch(pilih)
        {
            case '1': kepala = tambahTitik(kepala);
                break;
            case '2': kepala = buangTitik(kepala);
                break;
            case '3': cetakDaftar(kepala);
                break;
        }
        fflush(stdin);
    }
    while (pilih < '4');
    
    return 0;
}

titikKoord *tambahTitik(titikKoord *kepala)
{
    titikKoord *baru, *ekor;

    baru = (titikKoord *) malloc(sizeof(titikKoord));

    printf("Berikan absis : ");
    scanf("%d", &baru->absis);
    printf("Berikan ordinat: ");
    scanf("%d", &baru->ordinat);
    baru->berikut = NULL;

    if(kepala == NULL)
        kepala = baru;

    else
    { 
        ekor = kepala;
        while (ekor->berikut != NULL)
        {
            ekor = ekor->berikut;
            ekor->berikut = baru;
        }
    }
    return kepala;
}

titikKoord *buangTitik(titikKoord *kepala)
{
    int x, y, ada = 0;
    titikKoord *cari, *hapus;

    printf("Titik mana?\n");
    printf("Berikan absis dan ordinat: ");
    scanf("%d %d", &x, &y);
    cari = kepala;
    while((cari != NULL) && !ada)
    {
        if((cari->absis == x) && (cari->ordinat == y))
            ada = 1;
        else
            cari = cari->berikut;
    }
    if(ada)
    {
        hapus = kepala;

        if(hapus == cari)
        {
            kepala = kepala->berikut;
            cari->berikut = NULL;
            free(cari);
        }
        else
        {
            while ((hapus->berikut != NULL) &&
            (hapus->berikut != cari))
            {
                hapus = hapus->berikut;
                hapus->berikut = cari->berikut;
                cari->berikut = NULL;
                free(cari);
            }
        }
    }

    else
    {
        printf("Titik (%d,%d) tidak ada dalam daftar.\n", x, y);
        printf("Tekan <ENTER>\n");
        fflush(stdin);
        getchar();
    }
    return kepala;
}

void cetakDaftar(titikKoord *kepala)
{
    titikKoord *cetak;

    printf("Daftar titik koordinat: \n");

    cetak = kepala;
    while(cetak != NULL)
    {
        printf("(%d,%d) ", cetak->absis, cetak->ordinat);
        cetak = cetak->berikut;
    }
    
    printf("\nTekan <enter>...\n");
    fflush(stdin);
    getchar();
}