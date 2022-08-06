/* Nama file: kpkppb.c
Program untuk mencari KPK dan PPB */
#include <stdio.h>
void faktor(int);
int main()
{
    int bil;
    
    printf("Berikan sebuah bilangan bulat: ");
    scanf("%d", &bil);
    faktor(bil);
    
    return 0;
}

void faktor(int bil)
{
    int f, g;

    f = 2;
    while (bil % f != 0){
        f++;
    }
    g = bil / f;
    printf("KPK = %d, PPB = %d\n", f, g);
}