/*
    Nama        : Ivandohan Samuel Siregar
    NIM         : 211402067
    Nama File   : 211402067_Tugas01b.c

    ========== Operator Aritmetika Bilangan (Revisi) ==========
*/

#include <stdio.h>

int main(){
    int x, y, mod;
    float a, b, hasil;
    char opr;


    //Intro
    printf("\n\nOperasi Aritmetika Bilangan\n\n");
    printf("Keterangan  :\n");
    printf("1. Perkalian    (x)  2. Pembagian   (/)\n");
    printf("3. Penjumlahan  (+)  4. Pengurangan (-)\n");
    printf("5. Modulo       (m)\n");
    printf("=======================================");




    //Pemilihan Operator
    printf("\n\nPilih Operator\n= ");
    scanf("%c", &opr);


    //Khusus untuk modulo karena harus input bil integer
    if( opr == 'm'){
        //Memasukkan nilai untuk dioperasi khusus mod
        printf("\n\nInput Bilangan\n");
        printf("Bilangan 1      = ");
        scanf("%d", &x);
        printf("Bilangan 2      = ");
        scanf("%d", &y);

        mod = x % y;
        printf("\nHasil dari %d mod %d \n=  %d\n", x, y, mod);
    }
    

    //Untuk input pada umumnya
    else if( opr == 'x', '/', '+', '-'){

        //Memasukkan nilai untuk dioperasi
        printf("\n\nInput Bilangan\n");
        printf("Bilangan 1      = ");
        scanf("%f", &a);
        printf("Bilangan 2      = ");
        scanf("%f", &b);


        //Operator dan Alurnya
        if(opr == 'x'){
            hasil = a * b;
            printf("\nHasil dari %f x %f \n=  %f\n", a, b, hasil);
        }

        else if(opr == '/'){
            hasil = a / b;
            printf("\nHasil dari %f / %f \n=  %f\n", a, b, hasil);

        }
    
        else if(opr == '+'){
            hasil = a + b;
            printf("\nHasil dari %f + %f \n=  %f\n", a, b, hasil);
        }
    
         else if(opr == '-'){
            hasil = a - b;
            printf("\nHasil dari %f - %f \n=  %f\n", a, b, hasil);
        }
        //Jika input operator tidak sesuai format
        else
            printf("\nOperator Tidak Dikenali :3\n\n    ");
    
    }
        


    //Penutup
    printf("\n\n\n====== T E R I M A  K A S I H ======\n\n\n");

    return 0;
}
