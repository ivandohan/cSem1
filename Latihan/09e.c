#include <stdio.h>
#include <stdlib.h>

int main(){
    int *intptr;

    printf("\n\n\nAlamat intptr = %p\n", &intptr);
    /* mengalokasikan memori */
    intptr = (int *) malloc(sizeof(int));

    printf("intptr menerima alamat = %p\n", intptr);

    *intptr = 980;
    printf("Isi memori yang ditunjuk intptr = %d\n\n\n", *intptr);

    free(intptr);
    printf("Isi memori yang ditunjuk intptr = %d\n\n\n", *intptr);

    return 0;

}