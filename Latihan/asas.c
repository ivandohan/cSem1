/*
Menentukan berapa hari usia seseorang sejak tanggal kelahirannya hingga pada satu tanggal 
tertentu yg diinginkan dan adanya tahun kabisat yg dilalui selama jangka waktu yg dihitung
*/

#include <stdio.h>

int main()
{
    int hari, hari2, bln, bln2, thn, thn2, x, z, p, q, r, k = 0 ;
    int a ;
    
        /* Berikan tanggal lahir */
        printf("Berikan tanggal lahir Anda (hari bln thn) : ");
        scanf("%d %d %d", &hari, &bln, &thn);
        
        /* Berikan tanggal sekarang */
        printf("Berikan tanggal hari ini (hari bln thn) : ");
        scanf("%d %d %d", &hari2, &bln2, &thn2);
        
        /* menentukan apakah merupakan tahun tsb kabisat atau bukan */
        for (x = thn ; x <= thn2 ; x++)
        {
            if(x % 4 == 0 && x % 100 != 0)
            {
                k++;
            }
            else if(x % 400 == 0)
            {
                k++;
            }
        }

        /* Jumlah hari pada bulan tersebut */
        if(hari % 4 == 0 && hari % 100 != 0)
        {
            z = 29;
        }
        else if(hari % 400 == 0)
        {
            z = 29;
        }
        else
        {
            z = 28;
        }

        if(bln == 1 || 3 || 5 || 7 || 8 || 10 || 12)
        {
            z = 31;
        }
        else if(bln== 4 || 6 || 9 || 11)
        {
            z = 30;
        }

        /* Agar nilai bulan tidak minus */ 
        if(hari2 < hari)
        {
            hari2 += z;
            bln2--;
            if(bln2 < bln)
            {
                bln2 += 12;
                thn2--;
            }
        }
        else if(bln2 < bln2)
        {
            bln2 += 12;
            thn2--;
        }

        /* Bila tahun memiliki nilai minus */
        if(thn2 < thn)
        {
            printf("Mohon masukkan data yang benar\n");
        }
        else if(hari == hari2 && bln == bln2 && thn == thn2)
        {
            printf("Tidak ada hari yang kamu lewati.\n");
        }
        else
        {
            /* Apabila tahun tidak bernilai minus */ 
            printf("Kamu telah melalui %d tahun %d bulan %d hari.\n", thn2-thn, bln2-bln, hari2-hari);
            printf("Kamu telah melalui %d tahun kabisat.\n", k);

            /* Konversi usia di atas jadi dalam bentuk hari */
            a = ((thn2-thn) * 365) + ((bln2-bln) * 30) + hari2-hari + k;
    
    
            /* output hanya dalam hari */
            printf("\n=> atau %d hari\n\n", a);

        }
        return 0;

}