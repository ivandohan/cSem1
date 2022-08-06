/*
    Kelompok 14
    Sama kaki
*/
#include <stdio.h>

int main()
{
    //i = baris, j = kolom
    int input, i, j;

    printf("Masukkan angka : ");
    scanf("%d", &input);

    for(i = 1; i <= input; i++){
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
    printf("\n");
    }

    for(i = 1; i <= input; i++)
    {
        for (j = input; j > i; j--)
        {
            printf("* ");
        }
    printf("\n");
    }
    
    return 0;
}