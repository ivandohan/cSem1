/*
    =============================
    +   UAS Dasar Pemrograman   +
    =============================
    
    Kelompok 6 KOM A
    Anggota :
    1. Ivandohan Samuel Siregar (211402067)
    2. Andre Gozali (211402100)
    3. Yohana Nainggolan (211402112)
    4. Tito Trinidad Situmorang (211402133)

*/ 
        
        
        //----- Versi 2 (Format Bytes File) -----//
/*
    Deskripsi Program   :
    Untuk versi 2 ini menggunakan fread() dan fwrite() sebagai pembaca dan penulis inputan ke dalam file.
    
    Kekurangan :
    Tidak dapat menambahkan data lewat file txt, dikarenakan file tersebut berisi bytes code.
    Menambahkan file hanya dapat lewat program saja

    Kelebihan : 
    Sedikit lebih efisien jika dibandingkan dengan versi 1.
*/

/*
    Kami menyadari banyak kekurangan di dalam menuliskan program ini.
    Ke depannya kami akan belajar lebih banyak lagi untuk membuat program-program yang lebih baik.

    Terima kasih yang sebanyak-banyaknya kami ucapkan kepada Pak Opim Salim Sitompul.
*/





#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct mahasiswa 
{
    int nim;
    char nama[50];
    
    struct tempat_tgl_lahir 
    {
        int tanggal;
        int bulan;
        int tahun;
        char tempatlahir[50];
    }ttl;
    
    char asalslta[50];
    char slta[50];
    char kota[50];
    
}mahasiswa;


void display()
{
    mahasiswa s1;
    FILE *fp;
    int j;
    fp = fopen("datamhs_tim6_a.txt","rb");
    
    printf("\n----------------------------------------------\n");
    printf("%-15s | %-30s","NIM", "NAMA");
    printf("\n----------------------------------------------\n");
    
    fflush(stdin);
    while(fread(&s1, sizeof(mahasiswa), 1, fp))
    {
        printf("%-15d | %-30s\n", s1.nim, s1.nama);
    }

    fclose(fp);
    
    printf("\n\nTekan <enter>...\n");
    fflush(stdin);
    getchar();
    
    printf("\n\n");
}

void tambah()
{
    mahasiswa *s;

    FILE *fp;

    int n, i, j, choice;


    printf("Berapa banyak mahasiswa yang ingin diinput? \n= ");
    scanf("%d", &n);

    s = (mahasiswa*)calloc(n, sizeof(mahasiswa));

    fp = fopen("datamhs_tim6_a.txt","ab+");
 
    for(i = 0; i < n; i++)
    {

        printf("\nMasukkan NIM            : ");
        scanf("%d", &s[i]);
        
        fflush(stdin);

        printf("Masukkan Nama           : ");
        gets(s[i].nama);

        fflush(stdin);

        printf("Masukkan Tempat Lahir   : ");
        gets(s[i].ttl.tempatlahir);

        fflush(stdin);

        printf("Masukkan Tanggal Lahir  (dd-mm-yyyy) :");
        scanf("%d-%d-%d", &s[i].ttl.tanggal, &s[i].ttl.bulan, &s[i].ttl.tahun);

        fflush(stdin);

        printf("\nAsal SLTA : \n1. SMA \n2. SMK \n3. MAN \n4. Lain-lain \n= ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                strcpy(s[i].asalslta, "SMA");
            break;

            case 2:
                strcpy(s[i].asalslta, "SMK");
            break;

            case 3:
                strcpy(s[i].asalslta, "MAN");
            break;

            case 4:
                strcpy(s[i].asalslta, "Lain-lain");
            break;

            default:
                strcpy(s[i].asalslta, "");
        }
        fflush(stdin);

        printf("\nJenis SLTA  : \n1. Negeri \n2. Swasta \n= ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                strcpy(s[i].slta, "Negeri");
            break;

            case 2:
                strcpy(s[i].slta, "Swasta");
            break;

            default:
                strcpy(s[i].slta, "");
        }
        fflush(stdin);
 
        printf("\nKota SLTA  : \n1. Medan \n2. Luar Medan \n= ");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1:
                strcpy(s[i].kota, "Medan");
            break;

            case 2:
                strcpy(s[i].kota, "Luar Medan");
            break;

            default:
                strcpy(s[i].kota, "");
        }
        fflush(stdin);

        fwrite(&s[i], sizeof(mahasiswa),1,fp);
    }

    fclose(fp);
}

void jumlahdata()
{
    mahasiswa s1;
    FILE *fp;

    fp = fopen("datamhs_tim6_a.txt","rb");
    fseek(fp,0,SEEK_END);

    int n = ftell(fp)/sizeof(mahasiswa);

    printf("\nBanyak Mahasiswa yang Terdata = %d\n\n", n);
    
    fclose(fp);
    
    printf("\n\nTekan <enter>...\n");
    fflush(stdin);
    getchar();
    
    printf("\n\n");
}

void search()
{
    mahasiswa s1;
    FILE *fp;
    int j, nim, found = 0;
    char choice;
    fp = fopen("datamhs_tim6_a.txt","rb");

    printf("Masukkan NIM untuk dicari : ");
    scanf("%d", &nim);

    while(fread(&s1, sizeof(mahasiswa), 1, fp))
    {
        if(s1.nim == nim)
        {
            found = 1;
            printf("\nNIM           = %d", s1.nim);
            printf("\nNama          = %s", s1.nama);
            printf("\nTempat Lahir  = %s", s1.ttl.tempatlahir);
            printf("\nTanggal Lahir = (%d-%d-%d)", s1.ttl.tanggal, s1.ttl.bulan, s1.ttl.tahun);
            printf("\nAsal SLTA     = %s", s1.asalslta);
            printf("\nJenis SLTA    = %s", s1.slta);
            printf("\nKota SLTA     = %s", s1.kota);
            }

        }
    

    if(!found)
    {
        printf("\nData Tidak Ditemukan\n\n");
    }

    fclose(fp);   

    printf("\n\nTekan <enter>...\n");
    fflush(stdin);
    getchar();
}

void update()
{
    mahasiswa s1;
    FILE *fp, *fp1;
    int j, nim, found = 0, choice;
    fp = fopen("datamhs_tim6_a.txt","rb");
    fp1 = fopen("temp.txt","wb");
    printf("Masukkan NIM yang akan diupdate :");
    scanf("%d", &nim);

    while(fread(&s1, sizeof(mahasiswa), 1, fp))
    {
        if(s1.nim == nim)
        {
            found = 1;
            fflush(stdin);
            printf("Masukkan Nama Baru      : ");
            gets(s1.nama);

            fflush(stdin);

            printf("Masukkan Tempat Lahir   : ");
            gets(s1.ttl.tempatlahir);

            fflush(stdin);

            printf("Masukkan Tanggal Lahir  (dd-mm-yyyy) :");
            scanf("%d-%d-%d", &s1.ttl.tanggal, &s1.ttl.bulan, &s1.ttl.tahun);

            fflush(stdin);

            printf("\nAsal SLTA : \n1. SMA \n2. SMK \n3. MAN \n4. Lain-lain \n= ");
            scanf("%d", &choice);
            switch(choice)
            {
                case 1:
                    strcpy(s1.asalslta, "SMA");
                break;

                case 2:
                    strcpy(s1.asalslta, "SMK");
                break;

                case 3:
                    strcpy(s1.asalslta, "MAN");
                break;

                case 4:
                    strcpy(s1.asalslta, "Lain-lain");
                break;

                default:
                    strcpy(s1.asalslta, "");
            }
            fflush(stdin);

            printf("\nJenis SLTA  : \n1. Negeri \n2. Swasta \n= ");
            scanf("%d", &choice);
            switch(choice)
            {
                case 1:
                    strcpy(s1.slta, "Negeri");
                break;

                case 2:
                    strcpy(s1.slta, "Swasta");
                break;

                default:
                    strcpy(s1.slta, "");
            }
        fflush(stdin);
 
        printf("\nKota SLTA  : \n1. Medan \n2. Luar Medan \n= ");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1:
                strcpy(s1.kota, "Medan");
            break;

            case 2:
                strcpy(s1.kota, "Luar Medan");
            break;

            default:
                strcpy(s1.kota, "");
        }
        fflush(stdin);
            
        }

        fwrite(&s1, sizeof(mahasiswa),1,fp1);
    }
    fclose(fp);
    fclose(fp1);

    if(found)
    {
        fp1 = fopen("temp.txt","rb");
        fp = fopen("datamhs_tim6_a.txt","wb");

        while(fread(&s1,sizeof(mahasiswa),1,fp1))
        {
            fwrite(&s1,sizeof(mahasiswa),1,fp);
        }

        fclose(fp);
        fclose(fp1);
    }
    else
    {
        printf("\nData Tidak Ditemukan\n\n");
    }

    fclose(fp);   
}

void delete()
{
    mahasiswa s1;
    FILE *fp, *fp1;
    int j, nim, found = 0;
    fp = fopen("datamhs_tim6_a.txt","rb");
    fp1 = fopen("temp.txt","wb");
    printf("Masukkan NIM yang akan dihapus : ");
    scanf("%d", &nim);

    while(fread(&s1, sizeof(mahasiswa), 1, fp))
    {
        if(s1.nim == nim)
        {
            found = 1;
        }
        else
            fwrite(&s1, sizeof(mahasiswa),1,fp1);

    }
    fclose(fp);
    fclose(fp1);

    if(found)
    {
        fp1 = fopen("temp.txt","rb");
        fp = fopen("datamhs_tim6_a.txt","wb");

        while(fread(&s1,sizeof(mahasiswa),1,fp1))
        {
            fwrite(&s1,sizeof(mahasiswa),1,fp);
        }

        fclose(fp);
        fclose(fp1);
    }
    else
    {
        printf("\nData Tidak Ditemukan\n\n");
    }

    fclose(fp);   
}


void sortir()
{
    mahasiswa *s, s1;
    FILE *fp;
    int i, j, choice;
    fp = fopen("datamhs_tim6_a.txt","rb");
    fseek(fp,0,SEEK_END);
    int n = ftell(fp) / sizeof(mahasiswa);
    s = (mahasiswa*)calloc(n,sizeof(mahasiswa));

    rewind(fp);
    for(i = 0; i < n; i++)
    {
        fread(&s[i],sizeof(mahasiswa),1,fp);
    }

    printf("Sortir Berdasarkan  : \n1. Nama \n2. NIM \n= ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            for(i = 0; i < n; i++)
            {
                for(j = i + 1; j < n; j++)
                {
                    if(strcmp(s[i].nama,s[j].nama) > 0)
                    {
                        s1 = s[i];
                        s[i] = s[j];
                        s[j] = s1;
                    }
                }
            }
        break;

        case 2:
            for(i = 0; i < n; i++)
            {
                for(j = i + 1; j < n; j++)
                {
                    if(s[i].nim > s[j].nim)
                    {
                        s1 = s[i];
                        s[i] = s[j];
                        s[j] = s1;
                    }
                }
            }
        break;
    }
    fflush(stdin);


    printf("\n----------------------------------------------\n");
    printf("%-15s | %-30s","NIM", "NAMA");
    printf("\n----------------------------------------------\n");
    
    for(i = 0; i < n; i++)
    {
        printf("%-15d | %-30s\n", s[i].nim, s[i].nama);
    }

    fclose(fp);

    printf("\n\nTekan <enter>...\n");
    fflush(stdin);
    getchar();

    printf("\n\n");
}

//Untuk membuat database baru (fungsi write), silahkan buka komen di bawah ini

// void buat(){
//     mahasiswa *s;

//     FILE *fp;

//     int n, i, j, choice;


//     printf("Berapa banyak mahasiswa yang ingin diinput? \n= ");
//     scanf("%d", &n);

//     s = (mahasiswa*)calloc(n, sizeof(mahasiswa));

//     fp = fopen("datamhs_tim6_a.txt","w");
 
//     for(i = 0; i < n; i++){

//         printf("\nMasukkan NIM : ");
//         scanf("%d", &s[i]);
        
//         fflush(stdin);

//         printf("Masukkan Nama   : ");
//         gets(s[i].nama);

//         fflush(stdin);

//         printf("Masukkan Tempat Lahir  : ");
//         gets(s[i].ttl.tempatlahir);

//         fflush(stdin);

//         printf("Masukkan Tanggal Lahir  (dd-mm-yyyy) :");
//         scanf("%d-%d-%d", &s[i].ttl.tanggal, &s[i].ttl.bulan, &s[i].ttl.tahun);

//         fflush(stdin);

//         printf("Asal SLTA : \n1. SMA \n2. SMK \n3. MAN \n4. Lain-lain \n= ");
//         scanf("%d", &choice);
//         switch(choice){
//             case 1:
//                 strcpy(s[i].asalslta, "SMA");
//             break;

//             case 2:
//                 strcpy(s[i].asalslta, "SMK");
//             break;

//             case 3:
//                 strcpy(s[i].asalslta, "MAN");
//             break;

//             case 4:
//                 strcpy(s[i].asalslta, "Lain-lain");
//             break;

//             default:
//                 strcpy(s[i].asalslta, " ");
//         }
//         fflush(stdin);

//         printf("Jenis SLTA  : \n1. Negeri \n2. Swasta \n= ");
//         scanf("%d", &choice);
//         switch(choice){
//             case 1:
//                 strcpy(s[i].slta, "Negeri");
//             break;

//             case 2:
//                 strcpy(s[i].slta, "Swasta");
//             break;

//             default:
//                 strcpy(s[i].slta, " ");
//         }
//         fflush(stdin);
 
//         printf("Kota SLTA  : \n1. Medan \n2. Luar Medan \n= ");
//         scanf("%d", &choice);
        
//         switch(choice){
//             case 1:
//                 strcpy(s[i].kota, "Medan");
//             break;

//             case 2:
//                 strcpy(s[i].kota, "Luar Medan");
//             break;

//             default:
//                 strcpy(s[i].kota, " ");
//         }
//         fflush(stdin);


//         fwrite(&s[i], sizeof(mahasiswa),1,fp);
//     }

//     fclose(fp);
// }

int main() {
    int ch;
    do{
        system("cls");
        printf("\nProgram Manager Database Mahasiswa KOM A");
        printf("\n1. Tampilkan Isi Database");
        printf("\n2. Tambahkan Data");
        printf("\n3. Banyak Mahasiswa yang Terdata");
        printf("\n4. Cari Mahasiswa");
        printf("\n5. Update Data Mahasiswa");
        printf("\n6. Hapus Data Mahasiswa");
        printf("\n7. Sortir Data");
        // printf("\n8. Buat Database");
        printf("\n0. EXIT");

        printf("\nPilh Menu : ");
        scanf("%d", &ch);

        switch(ch)
        {

            case 1:
                display();
            break;

            case 2:
                tambah();
            break;

            case 3:
                jumlahdata();
            break;

            case 4:
                search();
            break;

            case 5:
                update();
            break;

            case 6:
                delete();
            break;

            case 7:
                sortir();
            break;

            //untuk membuat data base baru, silahkan buka komen di bawah
            // case 8:
            //     buat();
            // break;
        }


    }while(ch != 0);


    return 0;
}