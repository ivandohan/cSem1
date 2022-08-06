/* 
    Nama File : 09lthn.c
    Menyusun Program Menggunakan Fungsi
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int gnrt_acak();
int cek_prima(int);
void print_result(int, int);

int main(){

    int x, i, prima;
    srand(time(0));

    printf("\n\nGenerate Bilangan Acak\n\n");
    
    for(i=0; i<N; i++){
        
        x = gnrt_acak();
        prima = cek_prima(x);
        print_result(x, prima); 
    }

}

int gnrt_acak(){
    return rand() % 1000;
}


int cek_prima(int x){
    int i, prima = 1;

    for(i = 2; i < x; i++){
        if(i > 2){
            if(x % i == 0)
            {
                prima = 0;
                break;
            }
        }
    }
    return prima;
}

void print_result(int x, int prima){

    if(prima){
        printf("%d (prima)", x);
    }
    else{
        printf("%d ", x);
    }
    printf("\n"); 
}