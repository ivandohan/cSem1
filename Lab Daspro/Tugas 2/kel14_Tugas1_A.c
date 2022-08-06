/*
    Kelompok 14
    Segitiga Sama Kaki
*/

#include <stdio.h>

int main(){
    int num;

    printf("menampilkan bintang dalam bentuk segitiga sama kaki\n");
    printf("masukkan bintang terbanyak di suatu baris yang diinginkan : ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

    for(int i=1; i<=num; i++){
        for(int j=num-1; j>=i; j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}