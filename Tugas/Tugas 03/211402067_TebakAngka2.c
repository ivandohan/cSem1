/*
        Nama        : Ivandohan Samuel siregar
        NIM         : 211402067
        Nama File   : 211402067_TebakAngka2.c

        ============== Permainan Tebak Angka dengan Batas Percobaan ==============
*/
  
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int N = 20;   //Rentang bilangan yang akan ditebak adalah 0 s.d 20

int main(){
    int tebakan, bil_acak, i, j, k;  //tebakan = tebakan user  //bil_acak = bil random
    i = 0;

    k = 9;  //Batas percobaan hanya 5 kali karena i = 0, j += k, dan i += j.

    srand(time(0));
    bil_acak = rand() % N + 1;

    printf("\n\n=== Permainan Tebak Angka ===\n\n");
    printf("Keterangan  : \n");
    printf("Anda hanya dapat mencoba sebanyak 5 kali.\n\n\n\n");

    printf("\tMari Kita Mulai\n");
    printf("=================================");

    while (i < k) //While pertama, krn i start dari 0, maka memberi k = 9 akan membatasinya menjadi 5 kali perulangan saja.
    {
        j = 0;
        do {
            printf("\n\nMasukkan Bilangan Prediksi Anda = \n ");
            scanf("%d", &tebakan);

            j++;

            if (tebakan < bil_acak)
                printf("Tebakan anda kekecilan");
            else if (tebakan > bil_acak)
                printf("Tebakan anda kebesaran");

        } while (tebakan != bil_acak, j < 1); //....... While kedua. Di sini J sudah berniali 1



        if (tebakan == bil_acak){
            j += k;     //Jika benar, perulangan while 1 akan kita buat berhenti. 
        }

        else if (tebakan != bil_acak){
            j += 1;     //Jika salah, perulangan while 1 akan kita biarkan
        }               //berlanjut tanpa adanya infinity loop

        i += j;         //0, 2, 4, 6, 8,...., n, untuk membatasi percobaannya
    }
    
    if (tebakan == bil_acak){
        printf("\n\nSelamat! Tebakan anda benar!!\n\n");
    }

    else if (tebakan != bil_acak){
        printf("\n\nMaaf, tebakan anda masih belum tepat.\n\n");
    }

    return 0;
}


/*
    Catatan     : 
    untuk mengubah jumlah batas percobaannya, maka lakukan perubahan
    nilai pada variabel k.

    Kurang lebih hasil challange dari bapak di pertemuan sebelumnya saya 
    selesaikan seperti ini.
    Mohon maaf jika ada kekurangan dan kesalahan di dalamnya.
    Terima kasih Pak.
*/