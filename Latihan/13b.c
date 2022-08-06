/* Namafile: scope.c */
#include <stdio.h>
int main()
{
    int x = 1;
    int y = 2;
    printf("x=%d\n", x);
    printf("y=%d\n", y);

    {
        double x = 3.141592;
        y += (int) x;
        printf("y=%d\n", y);
    }
    
    y += x;
    printf("y=%d\n", y);

    return 0;
}