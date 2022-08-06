#include <stdio.h>

int main(){
    int *intptr1, *intptr2;
    float *flptr;

    printf("Alamat intptr1: %p\n", &intptr1);   
    printf("Nilai tersimpan = %u\n", intptr1);
    printf("Alamat intptr2: %p\n", &intptr2);   
    printf("Nilai tersimpan = %u\n", intptr2);
    printf("Alamat flptr: %p.\n", &flptr);
    printf("Nilai tersimpan = %p\n", flptr);

    return 0;
}