/*
    ===== Kuis Praktikum Dasar Pemrograman =====
*/

/*
    Nama        : Ivandohan Samuel Siregar
    NIM         : 211402067
    Aplikasi Pembatas Usia Pembeli Tiket Bioskop
*/

/*
    1. Pembelian tiket bioskop, yang dimana tiket bioskop hanya boleh di beli
    dengan syarat harus berumur di atas 18 tahun.
    Input : berapakah umur anda = 19
    Output: Anda bisa membeli tiket bioskop
*/


#include <stdio.h>

int main(){
    int usia;
    char jwb;

    printf("\n\n=== Aplikasi Pembatas Usia Pembeli Tiket Bioskop ===\n\n");
    printf("One Piece Movie ke-15 Kini Sudah Hadir di Bioskop Kesayangan Kamu\n\n");
    printf("Beli tiket sekarang? (y/n) \n= ");
    scanf("%c", &jwb);

    if(jwb == 'y'){
        printf("\n\nKonfirmasi Usia Terlebih Dahulu");
        printf("\nUsia Kamu     : ");
        scanf("%d", &usia);

        if(usia > 18 && usia < 100){
            printf("\nUsia Kamu Mencukupi.");
            printf("\nKamu dapat membeli tiket bioskop.\n\n");
        }
        else if(usia > 0 && usia < 19){
            printf("\nMaaf Kamu Belum Cukup Umur.\nPilih Anime Lain Saja.\n\n");
        }
        else if(usia < 0){
            printf("\nUsia tidak pernah bernilai negatif.\nMemangnya kamu dari isekai mana?\n\n");
        }
        else if(usia > 100){
            printf("\nUtamakan Kesehatan Anda.\n#DirumahAja\n\n");
        }
    }

    else if(jwb == 'n'){
        printf("\nOkoklah...\n\n");
        return 0;
    }

    else {
        printf("\nMangsut? \nJawabannya y atau n loh...\n\n");
    }

    return 0;
}