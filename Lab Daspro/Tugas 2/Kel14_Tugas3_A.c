/*
    Kelompok 14
    Diamond
*/

#include <stdio.h>

int main() {
    int i;
    int j;
    int a;
    int b;
    int c = 1;

    for (i = 1; i <= 11; i++)
    {
        for (a = i; a%2 != 0; a++)
        {
            printf("\t");
            for (b = 5; b >= c; b--)
            {
                printf(" ");
            }
            for (j = 1; j <= i; j++)
            {
            printf("*");
            }
            printf("\n");
            c++;
        }
    }

    c = 1;

    for (i = 9; i >= 1; i--)
    {
         for (a = i; a%2 != 0; a++)
        {
            printf("\t");
            for (b = 1; b <= c; b++)
            {
                printf(" ");
            }            
            for (j = 1; j <= i; j++)
            {
            printf("*");
            }
            printf("\n");
            c++;
        }
    }
}
