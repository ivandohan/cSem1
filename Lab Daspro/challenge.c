#include <stdio.h>

int main(){
    int a;

    printf("Input Bilangan   : ");
    scanf("%i", &a);

    if(a > 0)
        printf("Bilangan %i adalah positif\n", a);
    else if(a < 0)
        printf("Bilangan %i adalah negatif\n", a);
    else if(a == 0)
        printf("Bilangan %i adalah 0\n", a);
    else
        printf("%i bukan bilangan\n", a);

    return 0;
}   