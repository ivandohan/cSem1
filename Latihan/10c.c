/* Nama file: kirim2.c
Pengiriman argumen dengan alamat */
#include <stdio.h>
#include <math.h>


int main()
{
    int x = 5, y = 4;
    
    printf("Fungsi main():\n");
    printf("Sebelum memanggil fungsi1()\n");
    printf("x = %d\ty = %d\n", x, y);
    
    y += fungsi1(&x);
    
    printf("Fungsi main():\n");
    printf("Setelah memanggil fungsi1()\n");
    printf("x = %d\ty = %d\n", x, y);
    
    return 0;
}

int fungsi1(int *x)
{
    int y;
    
    printf("Fungsi1():\n");
    printf("x yang diterima = %d\n", *x);
    
    y = ++*x;
    
    printf("x berubah menjadi = %d\n");
    printf("y yang dikembalikan = %d\n", *x, y);
    
    return y;
}