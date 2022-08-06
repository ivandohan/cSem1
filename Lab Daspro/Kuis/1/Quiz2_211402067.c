/*
    ===== Kuis Praktikum Dasar Pemrograman =====
*/

/*
    Nama        : Ivandohan Samuel Siregar
    NIM         : 211402067
    Alat Pengecek Bilangan Prima
*/

/*
    2. Buatlah program untuk mengecek apakah bilangan yang di inputkan
    adalah bilangan Prima atau Tidak
    Input : 29
    Output : 29 Bukan Bilangan Prima    
*/


#include <stdio.h>

int main(){
    int bil_user, i, prima = 1;

    printf("\n\n\n===== Alat Pengecek Bilangan Prima =====\n\n\n");
    //Proses Input
    printf("Input Bilangan yang Akan Dicek  : ");
    scanf("%d", &bil_user);

    printf("\n\nHasil       : ");
    
    //Cek Input
    for(i = 2; i < bil_user; i++){
        if(i > 2){
           //rumus untuk mengecek bilangan prima
            if(bil_user % i == 0)
            {   
                prima = 0;
                break;
            }
        }
    }


    //Bentuk Output
    if(bil_user > 1 && prima == 1){
        printf("\n%d adalah bilangan prima. \n\n\n", bil_user);
    }

    else if(bil_user > 1 && prima == 0){
        printf("\n%d bukan bilangan prima. \n\n\n", bil_user);
    }

    else if(bil_user <= 1 && prima == 1){
        printf("\n%d bukan bilangan prima. \n\n\n", bil_user);
    }

    else if(bil_user <= 1 && prima == 0){
        printf("\n%d bukan bilangan prima. \n\n\n", bil_user);
    }


    printf("===== Terima Kasih =====\n\n\n");
    return 0;

}


