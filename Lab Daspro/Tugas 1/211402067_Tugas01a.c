/*
    Nama        : Ivandohan Samuel Siregar
    NIM         : 211402067
    Nama File   : 211402067_Tugas01.c

    ========== Operator Aritmetika Bilangan Integer ==========
*/

#include <stdio.h>

int main(){
    int a, b, hasil;
    char opr;


    //Intro
    printf("\n\nOperasi Aritmetika Bilangan Integer\n\n");
    printf("Keterangan  :\n");
    printf("1. Perkalian    (x)  2. Pembagian   (/)\n");
    printf("3. Penjumlahan  (+)  4. Pengurangan (-)\n");
    printf("5. Modulo       (m)\n");
    printf("=======================================");


    //Pemilihan Operator
    printf("\n\nPilih Operator\n= ");
    scanf("%c", &opr);

    //Memasukkan nilai untuk dioperasi
    printf("\n\nInput Bilangan\n");
    printf("Bilangan 1      = ");
    scanf("%d", &a);
    printf("Bilangan 2      = ");
    scanf("%d", &b);


    //Operator dan Alurnya
    if(opr == 'x'){
        hasil = a * b;
        printf("\nHasil dari %d x %d \n=  %d\n", a, b, hasil);
    }

    else if(opr == '/'){
        hasil = a / b;
        printf("\nHasil dari %d / %d \n=  %d\n", a, b, hasil);

    }
    
    else if(opr == '+'){
        hasil = a + b;
        printf("\nHasil dari %d + %d \n=  %d\n", a, b, hasil);
    }
    
    else if(opr == '-'){
        hasil = a - b;
        printf("\nHasil dari %d - %d \n=  %d\n", a, b, hasil);
    }
    
    else if(opr == 'm'){
        hasil = a % b;
        printf("\nHasil dari %d mod %d \n=  %d\n", a, b, hasil);
    }

    else
        printf("\nOperator Tidak Dikenali :3\n\n");


    //Penutup
    printf("\n\n\n====== T E R I M A  K A S I H ======\n\n\n");

    return 0;
}
