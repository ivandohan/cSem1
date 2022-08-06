/*
        Nama        : Ivandohan Samuel siregar
        NIM         : 211402067
        Nama File   : 211402067_UTS.c

        ============== Bilangan Prima Random ==============
*/


#include <stdio.h>
#include <stdlib.h>


const int N = 20;

int main(){
    int bil_acak, i, x = 0, j;
     //x adalah variabel flag



    printf("\n\n======= Bilangan Prima Random =======\n\n");

    j = 0;
    do {      
        bil_acak = rand() % N + 1;
        
        //Pengecekan Prima
        for (i = 2; i <= bil_acak / 2; i++) {        
            //Bukan bilangan prima
            if (bil_acak % i == 0) 
            {
                x++;
            }
        }

        //Fungsi Output setelah pengecekan
        if (x == 0)
            printf("\n %d bilangan prima.", bil_acak);

        else
            printf("\n %d ", bil_acak);

        
        
        j++; //Variabel terminasi perulangan
    
    } while(j < 5); //perulangan selama 5 kali


    printf("\n\n\n======= T E R I M A  K A S I H =======\n\n\n\n");
    return 0;

}