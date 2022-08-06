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


        //----- Versi 1 (Format Text File) -----//
/*
    Deskripsi Program   :
    Untuk versi 1 ini menggunakan fscanf() dan fprintf() sebagai pembaca dan penulis inputan ke dalam file.
    
    Kekurangan :
    Program lebih kompleks daripada versi 1

    Kelebihan : 
    Dapat menambahkan data lewat file txt secara langsung dengan mengikuti format yang sudah tersedia, dan juga
    dapat menambahkan data secara interaktif
*/ 

/*
    Kami menyadari banyak kekurangan di dalam menuliskan program ini.
    Ke depannya kami akan belajar lebih banyak lagi untuk membuat program-program yang lebih baik.

    Terima kasih yang sebanyak-banyaknya kami ucapkan kepada Pak Opim Salim Sitompul.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> //library untuk menggunakan fungsi sleep();
#include <conio.h> //library untuk menggunakan getch dll;

int id = 0;
struct dataMahasiswa
{
    char namaLengkap[50];
    char nim[11];
    char namaDepan[20];
    char namaTengah[20];
    char namaBelakang[20];
    char tempatLahir[20];
    char tanggal[20];
    char asalSlta[20];
    char slta[20];
    char kota[30];
};

struct dataMahasiswa mahasiswa[100];
 

//Deklarasi Fungsi
//a. Layout
void layoutgaris(int num);
void layoutjudul();
void menu();

//b. Proses Program tanpa output ke layar
void baca();
void save();
int search_nama(char *cari);
int search_nim(char *cari);
int search_tmptlahir(char *cari);

//c. Proses Program dengan output ke layar
void display();
void tambah();
void update();
void delete();
void search();
void jumlahdata();



int main()
{
    menu();
    return 0;
}

void menu()
{
    int ch;
    static int tanda = 0;
    if (tanda == 0)
    {
        baca();
    }
    tanda = 1;
    do{
        system("cls");
        printf("\nProgram Manager Database Mahasiswa KOM A");
        printf("\n1. Tampilkan Isi Database");
        printf("\n2. Tambahkan Data");
        printf("\n3. Banyak Mahasiswa yang Terdata");
        printf("\n4. Cari Mahasiswa");
        printf("\n5. Update Data Mahasiswa");
        printf("\n6. Hapus Data Mahasiswa");
        printf("\n7. Simpan Perubahan");
        printf("\n0. EXIT");

        printf("\nPilh Menu : ");
        scanf("%d", &ch);

        switch(ch){

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
                save();
            break;
        }
    }while(ch != 0);
}

void layoutjudul()
{
    layoutgaris(150);
    puts("");
    printf("\t\t\t\t\t\tMahasiswa Teknologi Informasi KOM A 2021\n");
    layoutgaris(150);
    puts("");
    printf("%-2s| %-30s | %-12s | %-20s | %-28s | %-10s | %-11s | %-10s |\n", "No", "Nama Lengkap", "NIM", "Tempat Lahir", "Tanggal Lahir (dd/mm/yyyy)", "Asal SLTA", "Jenis SLTA", "Kota SLTA");
    layoutgaris(150);
    puts("");
}


void layoutgaris(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("-");
    }
}

void baca()
{
    FILE *fp;
    if ((fp = fopen("datamhs_tim6_b.txt", "r")) == NULL)
    {
        fp = fopen("datamhs_tim6_b.txt", "w");
        int fcloseall;
    }
    else
    {
        fp = fopen("datamhs_tim6_b.txt", "r");
        while (fscanf(fp, "%[^,], %[^,], %[^,], %[^,], %[^,], %[^,], %[^,],\n", mahasiswa[id].nim, mahasiswa[id].namaLengkap, mahasiswa[id].tempatLahir, mahasiswa[id].tanggal, mahasiswa[id].asalSlta, mahasiswa[id].slta, mahasiswa[id].kota) != EOF)
        {
            id++;
        }
        fclose(fp);
    }
}

void save()
{
    FILE *fp;
    int i;
    fp = fopen("datamhs_tim6_b.txt", "w");
    for (i = 0; i < id; i++)
    {
        fprintf(fp, "%s, %s, %s, %s, %s, %s, %s,\n", mahasiswa[i].nim, mahasiswa[i].namaLengkap, mahasiswa[i].tempatLahir, mahasiswa[i].tanggal, mahasiswa[i].asalSlta, mahasiswa[i].slta, mahasiswa[i].kota);
    }
    fclose(fp);
    printf("Data berhasil disimpan!\n");
    printf("Tekan <enter>...\n");
    getch();
    system("cls");
    menu();
}

void jumlahdata(){
    printf("\nBanyak Mahasiswa yang Terdata = %d\n\n", id);
    
    printf("\n\nTekan <enter>...\n");
    getch();
    system("cls");
    menu();
    
    printf("\n\n");
}


void display()
{
    int i;
    int nomor = 0;

    layoutjudul();
    for (i = 0; i < id; i++)
    {
        printf("%-2d| %-30s | %-12s | %-20s | %-28s | %-10s | %-11s | %-10s |\n", ++nomor, mahasiswa[i].namaLengkap, mahasiswa[i].nim, mahasiswa[i].tempatLahir, mahasiswa[i].tanggal, mahasiswa[i].asalSlta, mahasiswa[i].slta, mahasiswa[i].kota);
    }

    if (id > 0)
    {
        layoutgaris(150);
    }

    printf("\nTekan <enter>...");
    getch();
    system("cls");
    menu();
}


void tambah()
{
    char choice;
    int choice1;

    do
    {
        printf("NIM                 : ");
        scanf("%s", mahasiswa[id].nim);
        fflush(stdin);
    } while (strlen(mahasiswa[id].nim) < 1 || strlen(mahasiswa[id].nim) > 9);

    do
    {
        printf("Nama depan          : ");
        scanf("%[^\n]", mahasiswa[id].namaDepan);
        fflush(stdin);
    } while (strlen(mahasiswa[id].namaDepan) < 1 || strlen(mahasiswa[id].namaDepan) > 20);
    strcat(mahasiswa[id].namaDepan, " ");
    do
    {
        printf("Nama tengah         : ");
        scanf("%[^\n]", mahasiswa[id].namaTengah);
        fflush(stdin);
    } while (strlen(mahasiswa[id].namaTengah) > 20);
    strcat(mahasiswa[id].namaDepan, mahasiswa[id].namaTengah);
    strcat(mahasiswa[id].namaDepan, " ");
    do
    {
        printf("Nama belakang       : ");
        scanf("%[^\n]", mahasiswa[id].namaBelakang);

        fflush(stdin);
    } while (strlen(mahasiswa[id].namaBelakang) > 20);
    strcat(mahasiswa[id].namaDepan, mahasiswa[id].namaBelakang);
    strcpy(mahasiswa[id].namaLengkap, "");
    strcpy(mahasiswa[id].namaLengkap, mahasiswa[id].namaDepan);

    do
    {
        printf("Tempat Lahir        : ");
        scanf("%[^\n]", mahasiswa[id].tempatLahir);
        fflush(stdin);
    } while (strlen(mahasiswa[id].tempatLahir) < 1 || strlen(mahasiswa[id].tempatLahir) > 20);
    do
    {
        printf("Tanggal Lahir (dd-mm-yyyy) : ");
        scanf("%[^\n]", mahasiswa[id].tanggal);
        fflush(stdin);
    } while (strlen(mahasiswa[id].tanggal) < 1 || strlen(mahasiswa[id].tanggal) > 20);
    
    
    printf("Asal SLTA           : \n1. SMA \n2. SMK \n3. MAN \n4. Lain-lain \n= ");
    scanf("%d", &choice1);
    switch(choice1){
        case 1:
            strcpy(mahasiswa[id].asalSlta, "SMA");
        break;

        case 2:
            strcpy(mahasiswa[id].asalSlta, "SMK");
        break;

        case 3:
            strcpy(mahasiswa[id].asalSlta, "MAN");
        break;

        case 4:
            strcpy(mahasiswa[id].asalSlta, "Lain-lain");
        break;

        default:
            strcpy(mahasiswa[id].asalSlta, "");
    }
    fflush(stdin);


    printf("\nJenis SLTA          : \n1. Negeri \n2. Swasta \n= ");
    scanf("%d", &choice1);
    switch(choice1){
        case 1:
            strcpy(mahasiswa[id].slta, "Negeri");
        break;

        case 2:
            strcpy(mahasiswa[id].slta, "Swasta");
        break;

        default:
        strcpy(mahasiswa[id].slta, "");
    }
    fflush(stdin);
    
    printf("\nKota SLTA           : \n1. Medan \n2. Luar Medan \n= ");
    scanf("%d", &choice1);
    switch(choice1){
        case 1:
            strcpy(mahasiswa[id].kota, "Medan");
        break;

        case 2:
            strcpy(mahasiswa[id].kota, "Luar Medan");
        break;

        default:
            strcpy(mahasiswa[id].kota, " ");
    }
    fflush(stdin);


    //Konfirmasi Hasil
    printf("\n%-30s | %-12s | %-20s | %-28s | %-10s | %-11s | %-10s |\n", mahasiswa[id].namaLengkap, mahasiswa[id].nim, mahasiswa[id].tempatLahir, mahasiswa[id].tanggal, mahasiswa[id].asalSlta, mahasiswa[id].slta, mahasiswa[id].kota);
    
    do
    {
        printf("Apakah data mahasiswa yang dimasukkan sudah benar ? (Ya(y)  Tidak(n)  Batal(0)\n");
        choice = getch();
        fflush(stdin);
        if (choice == 'y')
        {
            id++;
            save();
            printf("Data telah tersimpan!");
            sleep(2);
            system("cls");
            menu();
        }
        else if (choice == 'n')
        {
            printf("Silahkan Input Ulang");
            system("cls");
            tambah();
        }
        else if (choice == '0')
        {
            system("cls");
            menu();
        }
        else
        {
            continue;
        }
    } while (1);
}

void update()
{
    int i;
    int nomor = 0;
    int urutan, choice1;
    char choice;
    layoutjudul();
    
    for (i = 0; i < id; i++)
    {
        printf("%-2d| %-30s | %-12s | %-20s | %-28s | %-10s | %-11s | %-10s |\n", ++nomor, mahasiswa[i].namaLengkap, mahasiswa[i].nim, mahasiswa[i].tempatLahir, mahasiswa[i].tanggal, mahasiswa[i].asalSlta, mahasiswa[i].slta, mahasiswa[i].kota);
    }
    if (id > 0)
    {
        layoutgaris(150);
    }
    printf("\n\nData ke berapa yang mau diedit? (0. Batal) ");
    scanf("%d", &urutan);
    fflush(stdin);
    puts("");
    if (urutan == 0)
    {
        system("cls");
        menu();
    }
    else
    {
        printf("%-2d| %-30s | %-12s | %-20s | %-28s | %-10s | %-11s | %-10s |\n", urutan, mahasiswa[urutan - 1].namaLengkap, mahasiswa[urutan - 1].nim, mahasiswa[urutan - 1].tempatLahir, mahasiswa[urutan - 1].tanggal, mahasiswa[urutan - 1].asalSlta, mahasiswa[urutan - 1].slta, mahasiswa[urutan - 1].kota);
        
        //Backup nilai asli dari struct ke dalam variabel temp 
        char temp_namaLengkap[30];
        char temp_nim[9];
        char temp_namaDepan[20];
        char temp_namaTengah[20];
        char temp_namaBelakang[20];
        char temp_tempatLahir[20];
        char temp_tanggalLahir[20];
        char temp_asalSlta[20];
        char temp_slta[20];
        char temp_kota[30];
        strcpy(temp_namaLengkap, mahasiswa[urutan - 1].namaLengkap);
        strcpy(temp_nim, mahasiswa[urutan - 1].nim);
        strcpy(temp_namaDepan, mahasiswa[urutan - 1].namaDepan);
        strcpy(temp_namaTengah, mahasiswa[urutan - 1].namaTengah);
        strcpy(temp_namaBelakang, mahasiswa[urutan - 1].namaBelakang);
        strcpy(temp_tempatLahir, mahasiswa[urutan - 1].tempatLahir);
        strcpy(temp_tanggalLahir, mahasiswa[urutan - 1].tanggal);
        strcpy(temp_asalSlta, mahasiswa[urutan - 1].asalSlta);
        strcpy(temp_slta, mahasiswa[urutan - 1].slta);
        strcpy(temp_kota, mahasiswa[urutan - 1].kota);
        //selesai backup data

        //timpa data
        do
        {
            printf("\n\nNIM             : ");
            scanf("%s", mahasiswa[urutan - 1].nim);
            fflush(stdin);
        } while (strlen(mahasiswa[urutan - 1].nim) < 1 || strlen(mahasiswa[urutan - 1].nim) > 9);

        do
        {
            printf("Nama Depan      : ");
            scanf("%s", mahasiswa[urutan - 1].namaDepan);
            fflush(stdin);
        } while (strlen(mahasiswa[urutan - 1].namaDepan) < 1 || strlen(mahasiswa[urutan - 1].namaDepan) > 20);
        strcat(mahasiswa[urutan - 1].namaDepan, " ");
        
        do
        {
            printf("Nama Tengah     : ");
            scanf("%[^\n]", mahasiswa[urutan - 1].namaTengah);
            fflush(stdin);
        } while (strlen(mahasiswa[urutan - 1].namaTengah) > 20);
        strcat(mahasiswa[urutan - 1].namaDepan, mahasiswa[urutan - 1].namaTengah);
        strcat(mahasiswa[urutan - 1].namaDepan, " ");
        
        do
        {
            printf("Nama Belakang   : ");
            scanf("%[^\n]", mahasiswa[urutan - 1].namaBelakang);

            fflush(stdin);
        } while (strlen(mahasiswa[urutan - 1].namaBelakang) > 20);
        strcat(mahasiswa[urutan - 1].namaDepan, mahasiswa[urutan - 1].namaBelakang);
        strcpy(mahasiswa[urutan - 1].namaLengkap, "");
        strcpy(mahasiswa[urutan - 1].namaLengkap, mahasiswa[urutan - 1].namaDepan);
        
        do
        {
            printf("Tempat Lahir    : ");
            scanf("%[^\n]", mahasiswa[urutan - 1].tempatLahir);
            fflush(stdin);
        } while (strlen(mahasiswa[urutan - 1].tempatLahir) < 1 || strlen(mahasiswa[urutan - 1].tempatLahir) > 20);
        
        do
        {
            printf("Tanggal Lahir (dd-mm-yy)  : ");
            scanf("%[^\n]", mahasiswa[urutan - 1].tanggal);
            fflush(stdin);
        } while (strlen(mahasiswa[urutan - 1].tanggal) < 1 || strlen(mahasiswa[urutan - 1].tanggal) > 20);
        

        printf("Asal SLTA           : \n1. SMA \n2. SMK \n3. MAN \n4. Lain-lain \n= ");
        scanf("%d", &choice1);
        switch(choice1){
            case 1:
                strcpy(mahasiswa[urutan - 1].asalSlta, "SMA");
            break;

            case 2:
                strcpy(mahasiswa[urutan - 1].asalSlta, "SMK");
            break;

            case 3:
                strcpy(mahasiswa[urutan - 1].asalSlta, "MAN");
            break;

            case 4:
                strcpy(mahasiswa[urutan - 1].asalSlta, "Lain-lain");
            break;

            default:
                strcpy(mahasiswa[urutan - 1].asalSlta, "");
        }
        fflush(stdin);


        printf("\nJenis SLTA          : \n1. Negeri \n2. Swasta \n= ");
        scanf("%d", &choice1);
        switch(choice1){
            case 1:
                strcpy(mahasiswa[urutan - 1].slta, "Negeri");
            break;

            case 2:
                strcpy(mahasiswa[urutan - 1].slta, "Swasta");
            break;

            default:
            strcpy(mahasiswa[urutan - 1].slta, "");
        }
        fflush(stdin);
    
        printf("\nKota SLTA           : \n1. Medan \n2. Luar Medan \n= ");
        scanf("%d", &choice1);
        switch(choice1){
            case 1:
                strcpy(mahasiswa[urutan - 1].kota, "Medan");
            break;

            case 2:
                strcpy(mahasiswa[urutan - 1].kota, "Luar Medan");
            break;

            default:
                strcpy(mahasiswa[urutan - 1].kota, " ");
        }
        fflush(stdin);
        
        //Konfirmasi hasil timpa data
        printf(" %-30s | %-12s | %-20s | %-28s | %-10s | %-11s | %-10s |\n", mahasiswa[urutan - 1].namaLengkap, mahasiswa[urutan - 1].nim, mahasiswa[urutan - 1].tempatLahir, mahasiswa[urutan - 1].tanggal, mahasiswa[urutan - 1].asalSlta, mahasiswa[urutan - 1].slta, mahasiswa[urutan - 1].kota);
        do
        {
            printf("\nApakah data ini yang akan diupdate? (Ya(y)  Tidak(n)  Batal(0))\n");
            choice = getch();
            fflush(stdin);
            if (choice == 'y')
            {
                printf("Data berhasil diupdate!");
                sleep(1);
                system("cls");
                menu();
            }
            else if (choice == 'n')
            {
                strcpy(mahasiswa[urutan - 1].namaDepan, temp_namaLengkap);
                strcpy(mahasiswa[urutan - 1].nim, temp_nim);
                strcpy(mahasiswa[urutan - 1].namaDepan, temp_namaDepan);
                strcpy(mahasiswa[urutan - 1].namaTengah, temp_namaTengah);
                strcpy(mahasiswa[urutan - 1].namaBelakang, temp_namaBelakang);
                strcpy(mahasiswa[urutan - 1].tempatLahir, temp_tempatLahir);
                strcpy(mahasiswa[urutan - 1].tanggal, temp_tanggalLahir);
                strcpy(mahasiswa[urutan - 1].asalSlta, temp_asalSlta);
                strcpy(mahasiswa[urutan - 1].slta, temp_slta);
                strcpy(mahasiswa[urutan - 1].kota, temp_kota);
                system("cls");
                update();
            }
            else if (choice == '0')
            {
                strcpy(mahasiswa[urutan - 1].namaDepan, temp_namaLengkap);
                strcpy(mahasiswa[urutan - 1].nim, temp_nim);
                strcpy(mahasiswa[urutan - 1].namaDepan, temp_namaDepan);
                strcpy(mahasiswa[urutan - 1].namaTengah, temp_namaTengah);
                strcpy(mahasiswa[urutan - 1].namaBelakang, temp_namaBelakang);
                strcpy(mahasiswa[urutan - 1].tempatLahir, temp_tempatLahir);
                strcpy(mahasiswa[urutan - 1].tanggal, temp_tanggalLahir);
                strcpy(mahasiswa[urutan - 1].asalSlta, temp_asalSlta);
                strcpy(mahasiswa[urutan - 1].slta, temp_slta);
                strcpy(mahasiswa[urutan - 1].kota, temp_kota);
                system("cls");
                menu();
            }
            else
            {
                continue;
            }
        } while (1);
    }
}

void delete()
{
    int i;
    int nomor = 0;
    int urutan;
    char choice;
    //Menampilkan data
    layoutjudul();
    for (i = 0; i < id; i++)
    {
        printf("%-2d| %-30s | %-12s | %-20s | %-28s | %-10s | %-11s | %-10s |\n", ++nomor, mahasiswa[i].namaLengkap, mahasiswa[i].nim, mahasiswa[i].tempatLahir, mahasiswa[i].tanggal, mahasiswa[i].asalSlta, mahasiswa[i].slta, mahasiswa[i].kota);
    }
    if (id > 0)
    {
        layoutgaris(150);
    }

    printf("\n\nData ke berapa yang mau dihapus? (0. Batal) ");
    scanf("%d", &urutan);
    fflush(stdin);
    puts("");
    if (urutan == 0)
    {
        system("cls");
        menu();
    }
    else
    {
        printf("%-2d| %-30s | %-12s | %-20s | %-28s | %-10s | %-11s | %-10s |\n", urutan, mahasiswa[urutan - 1].namaLengkap, mahasiswa[urutan - 1].nim, mahasiswa[urutan - 1].tempatLahir, mahasiswa[urutan - 1].tanggal, mahasiswa[urutan - 1].asalSlta, mahasiswa[urutan - 1].slta, mahasiswa[urutan - 1].kota);
        puts("");
        do
        {
            printf("\nApakah ini data yang akan dihapus? (Ya(y)  Tidak(n)  Batal(0))\n");
            choice = getch();
            fflush(stdin);
            if (choice == 'y')
            {
                strcpy(mahasiswa[urutan - 1].namaLengkap, "");
                strcpy(mahasiswa[urutan - 1].nim, "");
                strcpy(mahasiswa[urutan - 1].namaDepan, "");
                strcpy(mahasiswa[urutan - 1].namaTengah, "");
                strcpy(mahasiswa[urutan - 1].namaBelakang, "");
                strcpy(mahasiswa[urutan - 1].tempatLahir, "");
                strcpy(mahasiswa[urutan - 1].tanggal, "");
                strcpy(mahasiswa[urutan - 1].asalSlta, "");
                strcpy(mahasiswa[urutan - 1].slta, "");
                strcpy(mahasiswa[urutan - 1].kota, "");
                for (i = urutan; i < id; i++)
                {
                    strcpy(mahasiswa[i - 1].namaLengkap, mahasiswa[i].namaLengkap);
                    strcpy(mahasiswa[i - 1].nim, mahasiswa[i].nim);
                    strcpy(mahasiswa[i - 1].nim, mahasiswa[i].namaDepan);
                    strcpy(mahasiswa[i - 1].nim, mahasiswa[i].namaTengah);
                    strcpy(mahasiswa[i - 1].nim, mahasiswa[i].namaBelakang);
                    strcpy(mahasiswa[i - 1].tempatLahir, mahasiswa[i].tempatLahir);
                    strcpy(mahasiswa[i - 1].tanggal, mahasiswa[i].tanggal);
                    strcpy(mahasiswa[i - 1].asalSlta, mahasiswa[i].asalSlta);
                    strcpy(mahasiswa[i - 1].slta, mahasiswa[i].slta);
                    strcpy(mahasiswa[i - 1].kota, mahasiswa[i].kota);
                }
                id--;
                printf("Data berhasil dihapus!");
                sleep(1);
                system("cls");
                menu();
            }
            else if (choice == 'n')
            {
                system("cls");
                delete();
            }
            else if (choice == '0')
            {
                system("cls");
                menu();
            }
            else
            {
                continue;
            }
        } while (1);
    }
}
//Cari Data Mahasiswa
void search()
{
    int choice;
    long long int cari;
    char char_cari[60];
    int hasil;
    //Tampilan Jenis Pencarian
    printf("Cari Data Berdasarkan  : \n");
    printf("1. Nama\n");
    printf("2. NIM\n");
    printf("3. Tempat Lahir\n");
    printf("4. Kembali\n\n");
    do
    {
        printf("Pilihan Anda: ");
        scanf("%d", &choice);
        fflush(stdin);
        puts("");
        switch (choice)
        {
        case 1:
            do
            {
                printf("Nama         : ");
                scanf("%[^\n]", char_cari);
                fflush(stdin);
            } while (strlen(char_cari) < 0 || strlen(char_cari) > 60);
            hasil = search_nama(char_cari);
            if (hasil != -1)
            {
                printf("Data ditemukan!\n");
                sleep(1);
                layoutjudul();

                printf("%-2d| %-30s | %-12s | %-20s | %-28s | %-10s | %-11s | %-10s |\n", hasil + 1, mahasiswa[hasil].namaLengkap, mahasiswa[hasil].nim, mahasiswa[hasil].tempatLahir, mahasiswa[hasil].tanggal, mahasiswa[hasil].asalSlta, mahasiswa[hasil].slta, mahasiswa[hasil].kota);
                if (id > 0)
                {
                    layoutgaris(150);
                }
                do
                {
                    printf("\nCari Lagi? (Ya(y)  Tidak(n))");
                    choice = getch();
                    fflush(stdin);
                    puts("");
                    if (choice == 'y')
                    {
                        system("cls");
                        search();
                    }
                    else if (choice == 'n')
                    {
                        system("cls");
                        menu();
                    }
                    else
                    {
                        continue;
                    }
                } while (1);
            }
            else
            {
                printf("Data tidak ditemukan!\n");
                sleep(1);
                do
                {
                    printf("\nCari Lagi? (Ya(y)  Tidak(n))");
                    choice = getch();
                    fflush(stdin);
                    puts("");
                    if (choice == 'y')
                    {
                        system("cls");
                        search();
                    }
                    else if (choice == 'n')
                    {
                        system("cls");
                        menu();
                    }
                    else
                    {
                        continue;
                    }
                } while (1);
            }
            continue;
        case 2:
            do
            {
                printf("Masukkan NIM    : ");
                scanf("%[^\n]", char_cari);
                fflush(stdin);
            } while (strlen(char_cari) < 0 || strlen(char_cari) > 60);
            hasil = search_nim(char_cari);
            if (hasil != -1)
            {
                printf("Data ditemukan!\n");
                sleep(1);
                layoutjudul();

                printf("%-2d| %-30s | %-12s | %-20s | %-28s | %-10s | %-11s | %-10s |\n", hasil + 1, mahasiswa[hasil].namaLengkap, mahasiswa[hasil].nim, mahasiswa[hasil].tempatLahir, mahasiswa[hasil].tanggal, mahasiswa[hasil].asalSlta, mahasiswa[hasil].slta, mahasiswa[hasil].kota);
                layoutgaris(150);
                puts("");
                do
                {
                    printf("\nCari Lagi? (Ya(y)  Tidak(n))");
                    choice = getch();
                    fflush(stdin);
                    puts("");
                    if (choice == 'y')
                    {
                        system("cls");
                        search();
                    }
                    else if (choice == 'n')
                    {
                        system("cls");
                        menu();
                    }
                    else
                    {
                        continue;
                    }
                } while (1);
            }
            else
            {
                printf("Data tidak ditemukan!\n");
                sleep(1);
                do
                {
                    printf("\nCari Lagi? (Ya(y)  Tidak(n))");
                    choice = getch();
                    fflush(stdin);
                    puts("");
                    if (choice == 'y')
                    {
                        system("cls");
                        search();
                    }
                    else if (choice == 'n')
                    {
                        system("cls");
                        menu();
                    }
                    else
                    {
                        continue;
                    }
                } while (1);
            }
        case 3:
            do
            {
                printf("Masukkan Tempat Lahir : ");
                scanf("%[^\n]", char_cari);
                fflush(stdin);
            } while (strlen(char_cari) < 0 || strlen(char_cari) >= 20);
            hasil = search_tmptlahir(char_cari);
            if (hasil != -1)
            {
                printf("Data ditemukan!\n");
                sleep(1);
                layoutjudul();

                printf("%-2d| %-30s | %-12s | %-20s | %-28s | %-10s | %-11s | %-10s |\n", hasil + 1, mahasiswa[hasil].namaLengkap, mahasiswa[hasil].nim, mahasiswa[hasil].tempatLahir, mahasiswa[hasil].tanggal, mahasiswa[hasil].asalSlta, mahasiswa[hasil].slta, mahasiswa[hasil].kota);
                layoutgaris(150);
                puts("");
                do
                {
                    printf("\nCari Lagi? (Ya(y)  Tidak(n))");
                    choice = getch();
                    fflush(stdin);
                    puts("");
                    if (choice == 'y')
                    {
                        system("cls");
                        search();
                    }
                    else if (choice == 'n')
                    {
                        system("cls");
                        menu();
                    }
                    else
                    {
                        continue;
                    }
                } while (1);
            }
            else
            {
                printf("Data tidak ditemukan!\n");
                sleep(1);
                do
                {
                    printf("\nCari Lagi? (Ya(y)  Tidak(n))");
                    choice = getch();
                    fflush(stdin);
                    puts("");
                    if (choice == 'y')
                    {
                        system("cls");
                        search();
                    }
                    else if (choice == 'n')
                    {
                        system("cls");
                        menu();
                    }
                    else
                    {
                        continue;
                    }
                } while (1);
            }
            continue;
        case 4:
            system("cls");
            menu();
        default:
            continue;
        }
    } while (1);
}

int search_nama(char *cari)
{
    int i;
    int n;
    for (n = 0; n < id; n++)
    {
        if (strcmp(mahasiswa[n].namaLengkap, cari) == 0)
        {
            return n;
        }
    }
    return -1;
}
int search_nim(char *cari)
{
    int i;
    int n;
    for (n = 0; n < id; n++)
    {
        if (strcmp(mahasiswa[n].nim, cari) == 0)
        {
            return n;
        }
    }
    return -1;
}
int search_tmptlahir(char *cari)
{
    int i;
    int n;
    for (n = 0; n < id; n++)
    {
        if (strcmp(mahasiswa[n].tempatLahir, cari) == 0)
        {
            return n;
        }
    }
    return -1;
}