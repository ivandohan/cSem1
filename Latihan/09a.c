#include <stdio.h>

int main()
{
    int x = 5;
    printf("\n\nx = %d\n\n", x);
    // Lokasi memori di mana x tersimpan
    printf("\nAlamat dari x : %p\n\n\n", &x);

    return 0;
}