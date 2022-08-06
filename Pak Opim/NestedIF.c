/* Nama file: NestedIF.c
 Kalkulator empat fungsi */

#include <stdio.h>



int main(){

    int a, b;
    char ch, yn;
    //ch = deklarasi input operator

    printf("Kalkulator Sederhana\n");
    printf("Keterangan              : \n\tUntuk Operasi Relasional Input \"r\"");
    printf("\n\nInput Bilangan      : \n");
    scanf("%d %c %d", &a,&ch,&b);

    /*
    printf("Bilangan 1      :");
    scanf("%i", &a);
    printf("Bilangan 2      :");
    scanf("%i", &b);

    printf("Operator                :");
    scanf("%c", &ch);
*/

    if(ch == '+')
        printf("= %d", a + b);

    else if(ch == '-')
        printf("= %d", a - b);

    else if(ch == '*')
        printf("= %d", a * b);

    else if(ch == '/')
        printf("= %d", a / b);

    else if(ch == '%')
        printf("= %d", a % b);
   

    
    else 
        if(ch == 'r'){

            if(a < b)
                printf("a < b");

            if(a <= b)
                printf("a <= b");

            if(a > b)
                printf("a > b");

            if(a >= b)
                printf("a >= b");

            if(a != b)
                printf("a != b");
        }   
    
    else
        printf("Operator tidak diketahui");

    return 0;
}




