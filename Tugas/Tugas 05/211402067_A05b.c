/*
        Nama        : Ivandohan Samuel siregar
        NIM         : 211402067
        Nama File   : 211402067_A05b.c

        ============== Menghitung Jumlah dari Digit-Digit Bilangan ==============
*/

#include <stdio.h>

int jumlahdigit(int);

int main()
{
    int bil_user, hasil;

    printf("\n\n\n== Menghitung Jumlah dari Digit-Digit Bilangan ==\n\n");
    printf("Masukkan Sebuah Bilangan    : \n");
    scanf("%d", &bil_user);

    hasil = jumlahdigit(bil_user); //Trigger fungsi

    printf("\nJumlah Digit-Digit dari %d adalah %d\n\n\n", bil_user, hasil);

    return 0;
}

int jumlahdigit(int bil_user)
{
    int sisa, jumlah;
    jumlah = 0;

    sisa = bil_user % 10;
    bil_user /= 10;

    if(bil_user == 0)
        return sisa;

    else
        jumlah = sisa + jumlahdigit(bil_user);

    return jumlah;
}