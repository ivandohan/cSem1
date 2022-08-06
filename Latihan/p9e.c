/* Nama file : makro2.c */

#include <stdio.h>
#define KUADRAT(X) ((X) * (X))
int main()
{
    int i = 5, j = 6;
    
    printf("Kuadrat dari (%d+%d) = %d.\n", i, j, KUADRAT(i+j));
    
    return 0;
}

// Output:
// Kuadrat dari (5+6) = 121