#include <stdio.h>

int main(){
    int x, y, *intptr1 = &x, *intptr2 = &y;
    float f, *flptr = &f;

    printf("\n\nAlamat x: %p.\n", &x);
    printf("Alamat y: %p.\n", &y);
    printf("Alamat f: %p.\n", &f);

    printf("Alamat intptr1 %p.\n", &intptr1);
    printf("Nilai tersimpan = %p\n", intptr1);
    printf("Alamat intptr2 %p.\n", &intptr2);
    printf("Nilai tersimpan = %p\n", intptr2);
    printf("Alamat flptr: %p.\n", &flptr);
    printf("Nilai tersimpan = %p\n\n\n", flptr);

    return 0;
}