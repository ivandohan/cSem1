/* Namafile: cthStringPtr2.c
 Alamat memori array karakter */
#include <stdio.h>

int main()
{
    char kota1[] = "CORVALLIS";
    int i;

    printf("%s, %c%c\n", kota1, kota1[1], kota1[2]);

    printf("Alamat memori kota1 = %u\n", &kota1;
    printf("Isi alamat %u adalah %u\n", &kota1,&kota1[0]);
    
    for(i=0; i<9; i++)
        printf("Alamat memori kota1[%d] = %u\n", i, &kota1[i]);

    return 0;

}