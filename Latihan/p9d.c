/* Nama file : makro1.c */

#include <stdio.h>
#define KUADRAT(X) (X * X) //harus pakai kurung, ini menjadi ( 5 + 6 * 5 + 6)
int main()
{
    int i = 5, j = 6;
    
    printf("Kuadrat dari (%d+%d) = %d.\n", i, j, KUADRAT(i+j));
    
    return 0;
}

// Output:
// Kuadrat dari (5+6) = 41.
