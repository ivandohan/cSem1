/*
        Nama        : Ivandohan Samuel siregar
        NIM         : 211402067
        Nama File   : 211402067_TebakAngka1.c

        ============== Permainan Tebak angka Tanpa Batas Percobaan ==============
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int N = 12; //Rentang bilangan yang akan ditebak adalah 0 s.d 12

int main(){
    int tebakan, bil_acak, i;  //tebakan = tebakan user  //bil_acak = bil random
    i = 0;

    srand(time(0));
    bil_acak = rand() % N + 1;

        
    printf("\n\n=== Permainan Tebak Angka ===\n\n");
    printf("Keterangan  : \n");
    printf("Anda dapat mencoba sebanyak yang anda mau.\n\n\n\n");

    printf("\tMari Kita Mulai\n");
    printf("================================="); 

    do{
        printf("\n\nMasukkan Bilangan Prediksi Anda = \n ");
        scanf("%d", &tebakan);

        i++;

        if (tebakan < bil_acak)
            printf("Tebakan anda kekecilan");
        else if (tebakan > bil_acak)
            printf("Tebakan anda kebesaran");

    } while (tebakan != bil_acak);

    printf("\n\nSelamat!! Tebakan anda benar setelah mencoba sebanyak %d kali\n\n", i);
}

