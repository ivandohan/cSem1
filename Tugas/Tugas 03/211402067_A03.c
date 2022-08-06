/*
        Nama        : Ivandohan Samuel siregar
        NIM         : 211402067
        Nama File   : 211402067_A03.c

        ============== Kalkulator Usia User ==============
*/
 
#include <stdio.h>
#include <math.h>
 
//Alat Pengecek Tahun Kabisat
int tahun_kabisat(int tahun1, int bln) 
{
    int flag = 0; //Berupa mark untuk nilai TRUE atau FALSE
    if (tahun1 % 100 == 0)
    {
        if (tahun1 % 400 == 0)
        {
            if (bln == 2) {flag = 1;}    
        }
    } 

    else if (tahun1 % 4 == 0) {
        if (bln == 2) {flag = 1;}
    }


    return (flag);
}
 
 
int main()
{ 
    int jlh_hari_pada_bulan[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int x, hari1, hari2, bulan1, bulan2, tahun1, tahun2, a, b=0;

    /*  
        x                      = Output usia user berupa hari saja
        a                      = variabel Backup nilai tahun1 sebelum dioperasi, 
                                 sekaligus menjadi variabel terminasi untuk perulangan while
        
        b                      = Jumlah tahun kabisat yang ada 
                                 di suatu rentang data tahun lahir s.d tahun ini
        
        hari1, tahun1, bulan1  = Inputan Tanggal lahir
        
        hari2, tahun2, bulan2  = Inputan Tanggal Saat ini
    */

    printf("\n\n\n*************************************\n");
    printf("========== KALKULATOR USIA ==========\n");
    printf("============= Ivandohan =============\n");
    printf("\n*************************************\n\n");

    printf("\n\n\n\n======= Penyesuaian Tanggal =======");
    //Input Tanggal Lahir
    printf("\n\nInput Tanggal Lahir Anda: \n\n");
    printf("Tanggal         : ");
    scanf("%d",&hari1); 
    printf("Bulan (Angka)   : ");
    scanf("%d",&bulan1);
    printf("Tahun           : ");
    scanf("%d",&tahun1);
 
    //Input Tanggal Saat Ini
    printf("\n\nInput Tanggal Saat Ini  : \n\n");
    printf("Tanggal         : ");
    scanf("%d",&hari2);
    printf("Bulan (Angka)   : ");
    scanf("%d",&bulan2);
    printf("Tahun           : ");
    scanf("%d",&tahun2);
 
    hari1 = jlh_hari_pada_bulan[bulan1 - 1] - hari1 + 1;
 
    //Pengecekan saat ini adalah tahun kabisat atau tidak
    if (tahun_kabisat(tahun1, bulan1)) 
    {
        hari1 = hari1 + 1;
    }
 
    //Perhitungan Usia
    a = tahun1;    //Saya mencadangkan data tahun1 sebelum dieksekusi agar dpt digunakan saat perulangan while
    hari1 = hari1 + hari2;
    bulan1 = (12 - bulan1) + (bulan2 - 1);
    tahun1 = (tahun2) - tahun1 - 1;   //tahun1 yg ini telah menjadi usia user

    // 1. Membentuk data agar sesuai dengan output yg diinginkan 
    // A. Menambahkan nilai bulan jika nilai hari kebanyakan 
    // a) Kondisi Kabisat
    if (tahun_kabisat((tahun2), (bulan2))) 
    {
        if (hari1 >= (jlh_hari_pada_bulan[bulan2 - 1] + 1)) 
        {
            hari1 = hari1 - (jlh_hari_pada_bulan[bulan2 - 1] + 1);
            bulan1 = bulan1 + 1;
        }
    }

    // b) Kondisi Tahun Normal 
    else if (hari1 >= jlh_hari_pada_bulan[bulan2 - 1]) 
    {
        hari1 = hari1 - (jlh_hari_pada_bulan[bulan2 - 1]);
        bulan1 = bulan1 + 1;
    }

    // B. Menambahkan nilai tahun jika nilai bulan kebanyakan =
    if (bulan1 >= 12) 
    {
        tahun1 = tahun1 + 1;
        bulan1 = bulan1 - 12;
    }
 
    // 2. Output berupa usia user
    // A. output tahun, bulan, hari
    printf("\n\n======= Usia Anda Saat Ini =======\n\n");
    printf("=> adalah %d tahun, %d bulan, %d hari", tahun1, bulan1, hari1);

    // a) Konversi usia di atas jadi dalam bentuk hari
    //      1).  Mencari tahu ada berapa kabisat di dalam rentang data tahun lahir s.d saat ini
    while (a <= tahun2)
    {
        if(a % 4 == 0 && a % 100 != 0)
        {
            b++;
        }
        else if(a % 400 == 0)
        {
            b++;
        }

        a++;
    }

    // B. output hanya dalam hari
    x = (tahun1 * 365) + ((30) * bulan1) + hari1 + b;  //mengubah semua satuan ke bentuk "hari"
    printf("\n=> atau setara dengan %d hari\n\n", x);

    printf("======= T E R I M A  K A S I H =======\n\n\n\n");

    return 0;
}
