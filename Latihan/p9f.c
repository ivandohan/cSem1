/* Namafile: ujikondisional.c
Menguji penggunaan prototipe kondisional */
#include <stdio.h>
#define TEST 1
int main()
{
    int n;
    
    printf("Pengulangan while\n");
    
    n = 5;
    while(n < 7)
    {
        #if TEST >= 1
        printf("n=%d\n", n);

        #endif
        n++;
        
        #if TEST >= 1
        printf("Sekarang n=%d\n", n);
        #endif
    }
    
    #if TEST == 0
    printf("Nilai n=%d\n", n);
    #endif

    return 0;

}