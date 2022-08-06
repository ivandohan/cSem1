/* Nama file: rbagi.c
2 Program menghitung hasil bagi bil. bulat */
#include <stdio.h>
#include <stdlib.h>
unsigned RBagi(unsigned,unsigned,unsigned *);
int main()
{
    unsigned m, n, hb, *sisa;

    printf("Pembagian\n");
    printf("Berikan 2 bil. bulat positip: ");
    scanf("%u %u", &m, &n);
    sisa = (unsigned *)malloc(sizeof(unsigned));
    *sisa = 0;
    
    hb = RBagi(m, n, sisa);

    printf("%d/%d=%u %u/%u.\n",m,n,hb,*sisa,n);
    return 0;
}

unsigned RBagi(unsigned yb, unsigned pb, unsigned *si)
{
    unsigned hb = 0;
    
    if(pb > yb)
    {
        *si = yb;
        hb = 0;
    }
    else
        hb += RBagi(yb - pb, pb, si) + 1;
    
    return hb;
}
