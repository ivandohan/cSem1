/*
        Nama        : Ivandohan Samuel siregar
        NIM         : 211402067
        Nama File   : 211402067_A04.c

        ============== Program Simulasi Lempar Koin ==============
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tossing(int lemparan);

int main(){

    //Jalankan program Saudara untuk 100, 1000, dan 10000 lemparan.
    //Karena dimulai dari 100, maka
    int lemparan = 100;
    
    printf("\n\n\n\t\t~~~~~~~~~~ Program Simulai Lempar Koin ~~~~~~~~~~");
    
    do {
        printf("\n\nProgram untuk %d lemparan\n", lemparan);
        printf("============================\n");
        
        tossing(lemparan);
        
        lemparan *= 10;
        
        printf("\n\n\n");

    } while(lemparan <= 10000);

    return 0;   
}

int tossing(int lemparan){

    int head, temp, help, sisi_koin, barisan_head, tail_head, barisan_tailhead;
    
    /********************************************************************
     *   head = variabel untuk sisi head                                *
     *   sisi_koin = antara 0 dan 1                                     *
     *   barisan_head = barisan berisi head saja                        *
     *   tail_head = ergantian tail dan head                            *
     *   barisan_tailhead = barisan pergantian tail dan head terbanyak  *
    *********************************************************************/

    head = 0;
    barisan_head = 0;
    help = 1;
    tail_head = 0;
    barisan_tailhead = 0;

    srand(time(NULL));
    
    for (int i=1 ; i<=lemparan; i++){
        
        sisi_koin = rand() % 2;
        printf("%d", sisi_koin);
        
        if (sisi_koin == 1){
            head++;

            if(i == lemparan)
            {
                if(head > barisan_head)
                {
                    barisan_head = head;
                }
            }
        }
        
        else {
            if(head > barisan_head)
            {
                barisan_head = head;
            }

            head = 0;
        }

        //-----------------------------------------------------------------------------------------------------
        
        if (help == 1 && sisi_koin == 1){
                temp = 1;
                help--;
        }
        
        else {
            if(sisi_koin != temp)
            {
                tail_head++;
                temp = sisi_koin;
                
                if(i == lemparan && tail_head > barisan_tailhead)
                {
                        barisan_tailhead = tail_head;
                }
                
            }
            else {
                if(sisi_koin == 1)
                {
                    temp = 1;
                    help--;
                }

                if(tail_head > barisan_tailhead)
                {
                    barisan_tailhead = tail_head;
                }

                help++;
                tail_head = 0;
            }
        }
    }

    printf("\n============================\n");
    printf("Keterangan      : ");
    printf("\nBarisan Head Terpanjang                       = %d", barisan_head);
    printf("\nBarisan Pergantian Head dan Tail Terpanjang   = %d", (barisan_tailhead + 1) / 2);

}