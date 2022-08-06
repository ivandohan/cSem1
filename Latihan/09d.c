#include <stdio.h>

int main(){
    
    int i, j, *intptr;

    printf("\n\n\nAlamat i = %p\n", &i);
    i = 890;
    printf("i menerima nilai = %d\n", i);

    printf("Alamat intptr = %p\n", &intptr);
    intptr = &i;
    printf("intptr menerima alamat %p\n",intptr);
    
    printf("Alamat j = %p\n", &j);
    j = *intptr; /* dereference */
    printf("j menerima nilai = %d\n\n\n", j);


    return 0;

}