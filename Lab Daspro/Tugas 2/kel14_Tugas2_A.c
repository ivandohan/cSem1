/*
    Kelompok 14
    Segitiga Sama sisi
*/

#include <stdio.h>

int main(){
    int num;

    printf("menampilkan bintang dalam bentuk segitiga samasisi\n");
    printf("masukkan banyak bintang pada alas yang diinginkan : ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++){
        for(int j=1; j<=num-i; j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf(" *");
        }
        printf("\n");
    }
}