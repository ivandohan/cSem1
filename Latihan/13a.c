/* Nama file: poskar.c
2 Menentukan karakter huruf keberapa */
#include <stdio.h>
int periksaKarakter(char);
int tentukanLokasi(char);

int main()
{
    char ch;

    printf("Tuliskan sembarang kalimat:\n");
    while((ch = getchar()) != 10)
    {

        if (ch != 32)
            printf("\nkarakter %c", ch);
        
        if (periksaKarakter(ch) == 1)
            printf(", nomor %2d dalam alphabet.",
        
        tentukanLokasi(ch));
    }

    printf("\n");

    return 0;
}

int periksaKarakter(char ch)
{
    if(((ch > 64) && (ch < 91)) || (((ch > 96) && (ch < 123))))
        return 1;
    
    return -1;
}

int tentukanLokasi(char ch)
{
    char kar;

    kar = ch^32;
    
    return (kar - 64);
}
