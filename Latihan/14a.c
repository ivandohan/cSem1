/* Nama file: rata2.c
2 Menghitung rata-rata bilangan */
#include <stdio.h>

int main()
{
    /* Deklarasi array */
    int bilangan[] = {6,12,11,5,27,10,17,8,10,26};
    int i, jlh_bil, total = 0;
    float rata2;

    jlh_bil = sizeof(bilangan)/sizeof(int);
    
    for(i=0;i<jlh_bil;i++)
        printf("%d", bilangan[i]);
    
    printf("\n");


    for(i=0;i<jlh_bil;i++)
        total += bilangan[i];
    
    rata2 = (float) total / (float) jlh_bil;
    printf("Rata2 %d bilangan=%.2f\n",jlh_bil,rata2);

return 0;
}