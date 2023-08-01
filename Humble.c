#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "ganggu.c"



                                    ////////////////////////////////
                                    /////// Variable Global ///////
                                    //////////////////////////////

bool cek = true,cek1 = true,cek2 = true,cek3 = true,cek4 = true,cek5 = true,cek6 = true;
char username[50],password[50];
char nama[50][50],password1[50][50],no_hp[50][50],alamat[50][50];
char pilih,pilih1,huruf,simpan,huruf1,huruf2,huruf3,huruf4,huruf5,pilih2,pilih3,pilih4 = 'y',pilih5;
int jam,total,total_bayar = 0,uang;
int har_rek[3] = {40000,60000,80000};
int har_lat[3] = {30000,50000,70000};
int i = 0,j = 0,k = 0,l = 0;
int a = 0,b = 0,c = 0,d = 0,e = 0,batasan = 15,batasan1 = 15,batasan2 = 15,batasan3 = 15,batasan4 = 15;
int tanggal,bulan,tahun;

                                    ////////////////////////////////
                                    ///////// Proto Type //////////
                                    //////////////////////////////

void project_trs();
void pilihan();
void daftar_akun();
void login_akun();
void cek_data();
void ubah_akun();
void history();
void pil_reklat();
void pil_rek();
void pil_lat();
void damn();
void akhir();
bool val_nama(char nama[]);
bool val_password1(char password1[]);
bool val_no_hp(char no_hp[]);
bool val_alamat(char alamat[]);

                                    ////////////////////////////////
                                    ////// 53K5 Bebas Kau :) //////
                                    //////////////////////////////

void project_trs()
{
    set_background_color(15);
    set_text_color(4);
    for (int x = 0; x <= 170; x++)
    {
        for (int y = 0; y <= 40; y++)
        {
            set_cursor_position(x, y);
            if (x == 0 || x == 170 || y == 0 || y == 40)
            {
                printf("%c",14);
                Sleep(1);
            }
            else
            {
                printf(" ");
            }
        }
    }

    system ("color 1");
    set_cursor_position(50,2);  printf ("  %c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c%c%c%c   %c           %c   %c%c%c%c%c%c%c%c%c%c         %c     %c%c%c%c%c%c%c%c%c%c%c",14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14);
    Sleep (200);
    system ("color 2");
    set_cursor_position(50,3);  printf ("%c                %c        %c           %c   %c         %c        %c    %c           %c",14,14,14,14,14,14,14,14,14);
    Sleep (200);
    system ("color 3");
    set_cursor_position(50,4);  printf ("%c                %c        %c           %c   %c          %c       %c    %c           %c",14,14,14,14,14,14,14,14,14);
    Sleep (200);
    system ("color 4");
    set_cursor_position(50,5);  printf ("%c                %c        %c           %c   %c           %c      %c    %c           %c",14,14,14,14,14,14,14,14,14);
    Sleep (200);
    system ("color 5");
    set_cursor_position(50,6);  printf ("%c                %c        %c           %c   %c            %c     %c    %c           %c",14,14,14,14,14,14,14,14,14);
    Sleep (200);
    system ("color 6");
    set_cursor_position(50,7);  printf ("%c%c%c%c%c%c%c%c%c        %c        %c           %c   %c             %c    %c    %c           %c",14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14);
    Sleep (200);
    system ("color 7");
    set_cursor_position(50,8);  printf ("        %c        %c        %c           %c   %c            %c     %c    %c           %c",14,14,14,14,14,14,14,14,14);
    Sleep (200);
    system ("color 8");
    set_cursor_position(50,9);  printf ("        %c        %c        %c           %c   %c           %c      %c    %c           %c",14,14,14,14,14,14,14,14,14);
    Sleep (200);
    system ("color 9");
    set_cursor_position(50,10); printf ("        %c        %c        %c           %c   %c          %c       %c    %c           %c",14,14,14,14,14,14,14,14,14);
    Sleep (200);
    system ("color 1");
    set_cursor_position(50,11); printf ("        %c        %c        %c           %c   %c         %c        %c    %c           %c",14,14,14,14,14,14,14,14,14);
    Sleep (200);
    system ("color 4");
    set_cursor_position(50,12); printf ("%c%c%c%c%c%c%c          %c         %c%c%c%c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c%c%c         %c     %c%c%c%c%c%c%c%c%c%c%c",14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14);
    
    Sleep (200);
    set_cursor_position(4,17);  printf ("%c %c %c %c   %c %c %c %c   %c     %c        %c        %c       %c        %c        %c       %c",14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14);
    set_cursor_position(4,18);  printf ("%c     %c   %c         %c   %c        %c   %c      %c %c   %c %c      %c   %c      %c %c     %c",14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14);
    set_cursor_position(4,19);  printf ("%c %c %c %c   %c %c %c %c   %c %c         %c %c %c %c     %c   %c   %c     %c %c %c %c     %c   %c   %c",14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14);
    set_cursor_position(4,20);  printf ("%c   %c     %c         %c   %c      %c       %c    %c       %c    %c       %c    %c     %c %c",14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14);
    set_cursor_position(4,21);  printf ("%c     %c   %c %c %c %c   %c     %c   %c         %c   %c       %c   %c         %c   %c       %c",14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14);
    Sleep (500);
    set_cursor_position(80,26); printf ("%c       %c   %c %c %c %c       %c     %c   %c     %c   %c       %c   %c %c %c %c     %c         %c %c %c %c",14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14);
    set_cursor_position(80,27); printf ("%c %c   %c %c   %c     %c       %c     %c   %c     %c   %c %c   %c %c   %c      %c    %c         %c",14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14);
    set_cursor_position(80,28); printf ("%c   %c   %c   %c %c %c %c       %c %c %c %c   %c     %c   %c   %c   %c   %c %c %c %c     %c         %c %c %c %c",14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14);
    set_cursor_position(80,29); printf ("%c       %c   %c   %c         %c     %c   %c     %c   %c       %c   %c      %c    %c         %c",14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14);
    set_cursor_position(80,30); printf ("%c       %c   %c     %c   %c   %c     %c   %c %c %c %c   %c       %c   %c %c %c %c     %c %c %c %c   %c %c %c %c",14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14);
    set_cursor_position(50,35); printf ("Tekan y Untuk Melanjutkan Selain Dari y Untuk Keluar Dari Program : "); pilih = getche();
    
    if (pilih == 'y')
    {
        system("cls");
        pilihan();
    }
    else
    {
        printf ("\a");
        exit;
    }
}

void pilihan()
{
    set_background_color (0);
    set_text_color (13);
    for (int a = 80; a >= 0; a--)
    {
        for (int b = 0; b <= 15; b++)
        {
            if (b == 0 || a == 0)
            {
                set_cursor_position (a,b); printf ("%c",14);
                Sleep(1);
            }
            if (b == 0)
            {
                set_cursor_position (a,40); printf ("%c",14);
                Sleep(1);
            }
        }
    }
    for (int c = 90; c <= 170; c++)
    {
        for (int d = 0; d <= 15; d++)
        {
            if (c == 170 || d == 0)
            {
                set_cursor_position (c,d); printf ("%c",14);
                Sleep(1);
            }
            if (d == 0)
            {
                set_cursor_position (c,40); printf ("%c",14);
                Sleep(1);
            }
        }
    }
    for (int e = 0; e <= 170; e++)
    {
        for (int f = 25; f <= 40; f++)
        {
            if (e == 0 || e == 170)
            {
                set_cursor_position (e,f); printf ("%c",14);
                Sleep(1);
            }
        }
    }

    for (int g = 1; g <= 20; g++)
    {
        for (int h = 1; h <= 5; h++)
        {
            if (g == 1 || h == 1 || g == 20 || h == 5)
            {
                set_cursor_position (38+g,12+h); printf ("%c",219);
            }
        }
    }
    for (int g = 1; g <= 20; g++)
    {
        for (int h = 1; h <= 5; h++)
        {
            if (g == 1 || h == 1 || g == 20 || h == 5)
            {
                set_cursor_position (38+g,22+h); printf ("%c",219);
            }
        }
    }
    for (int g = 1; g <= 20; g++)
    {
        for (int h = 1; h <= 5; h++)
        {
            if (g == 1 || h == 1 || g == 20 || h == 5)
            {
                set_cursor_position (114+g,12+h); printf ("%c",219);
            }
        }
    }
    for (int g = 1; g <= 20; g++)
    {
        for (int h = 1; h <= 5; h++)
        {
            if (g == 1 || h == 1 || g == 20 || h == 5)
            {
                set_cursor_position (114+g,22+h); printf ("%c",219);
            }
        }
    }
    for (int g = 1; g <= 20; g++)
    {
        for (int h = 1; h <= 5; h++)
        {
            if (g == 1 || h == 1 || g == 20 || h == 5)
            {
                set_cursor_position (76+g,30+h); printf ("%c",219);
            }
         }
    }
    for (int g = 1; g <= 20; g++)
    {
        for (int h = 1; h <= 5; h++)
        {
            if (g == 1 || h == 1 || g == 20 || h == 5)
            {
                set_cursor_position (76+g,17+h); printf ("%c",219);
            }
         }
    }

    for (int a = 0; a <= 40; a++)
    {
        Sleep(7);
        set_cursor_position (1+a,2); printf (" #       #   # # # #        #     #   #       #   #       #   # # # #    #         # # # #");
        set_cursor_position (1+a,3); printf (" # #   # #   #      #       #     #   #       #   # #   # #   #      #   #         #");
        set_cursor_position (1+a,4); printf (" #   #   #   # # # #        # # # #   #       #   #   #   #   # # # #    #         # # # #");
        set_cursor_position (1+a,5); printf (" #       #   #   #          #     #   #       #   #       #   #      #   #         #");
        set_cursor_position (1+a,6); printf (" #       #   #     #    #   #     #    # # # #    #       #   # # # #    # # # #   # # # #");
    }
    set_cursor_position (42,15);  printf ("1. DAFTAR AKUN");
    set_cursor_position (118,15); printf ("2. LOGIN AKUN");
    set_cursor_position (43,25);  printf ("3. CEK DATA");
    set_cursor_position (119,25); printf ("4. UBAH AKUN");
    set_cursor_position (82,20);  printf ("5. HISTORY");
    set_cursor_position (82,33);  printf ("6. KELUAR");
    do
    {
        set_cursor_position (82,37);  printf ("Pilih : "); pilih1 = getche();
        if(pilih1 == '1')
        {
            system("cls");
            daftar_akun();
        }
        else if (pilih1 == '2')
        {
            system("cls");
            login_akun();
        }
        else if (pilih1 == '3')
        {
            system("cls");
            cek_data();
        }
        else if (pilih1 == '4')
        {
            system("cls");
            ubah_akun();
        }
        else if (pilih1 == '5')
        {
            system("cls");
            history();
        }
        else if (pilih1 == '6')
        {
            printf ("\a");
            break;
        }
        else
        {
            set_cursor_position (90,37); printf (":(");
            Sleep(500);
            set_cursor_position (90,37); printf ("  ");
        }
    }
    while(pilih1 > '6');
}

void daftar_akun()
{
    set_text_color(10);
    for (int a = 2; a <= 168; a++)
    {
        for (int b = 2; b <= 38; b++)
        {
            if (a == 2 || a == 168 || b == 2 || b == 38)
            {
                set_cursor_position (a,b); printf ("%c",219);
                Sleep(1);
            }
            else if (b == 7)
            {
                set_cursor_position (a,b); printf ("%c",219);
                Sleep(1);
            }
        }
    }
    for (int a = 40; a <= 130; a++)
    {
        for (int b = 13; b <= 30; b++)
        {
            if (a == 40 || a == 130 || b == 13 || b == 30)
            {
                set_cursor_position (a,b); printf ("%c",219);
                Sleep(1);
            }
        }
    }
    set_cursor_position (70,4); printf (">>>>> Daftar Akun Anda <<<<<");
    set_cursor_position (4,40); printf ("Tekan y Untuk Kembali Dan Tekan Apa Saja Untuk Lanjut : "); huruf = getche();
    if (huruf == 'y')
    {
        system("cls");
        pilihan();
    }
    FILE *daftar = fopen ("D:/Project T.R.S/Notepad.txt","a"); 
    do
    {
        fflush (stdin);
        set_cursor_position (42,14); printf ("Masukkan Username : "); 
        // gets(nama[i]);
        if (val_nama(nama[i]) == true && strlen(nama[i]) >= 3 && strlen(nama[i]) <= 20)
        {
            cek = false;
        }
        else
        {
            set_cursor_position(62,14); printf ("Nama Harus Terdiri Dari Huruf Saja");
            Sleep(1000);
            set_cursor_position(62,14); printf ("                                   ");
        }
    }
    while(cek);
    do
    {
        set_cursor_position (42,16); printf ("Masukkan Password : ");
        // gets(password1[j]);
        if (val_password1(password1[j]) == true && strlen(password1[j]) >= 3 && strlen(password1[j]) <= 20)
        {
            cek1 = false;
        }
        else
        {
            set_cursor_position(62,16); printf ("Password Harus Terdiri Dari Huruf Saja");
            Sleep(1000);
            set_cursor_position(62,16); printf ("                                       ");
        }
    }
    while(cek1);
    do
    {
        set_cursor_position (42,18); printf ("Masukkan Alamat   : ");
        // gets(alamat[k]);
        if (val_alamat(alamat[k]) == true && strlen(alamat[k]) >= 3 && strlen(alamat[k]) <= 50)
        {
            cek2 = false;
        }
        else
        {
            set_cursor_position(62,18); printf ("Alamat Harus Terdiri Dari Huruf Saja");
            Sleep(1000);
            set_cursor_position(62,18); printf ("                                     ");
        }
    } 
    while(cek2);
    do
    {
        set_cursor_position (42,20); printf ("Masukkan No HP    : "); 
        // gets(no_hp[l]);
        if(val_no_hp(no_hp[l]) == true)
        {
            cek3 = false;
        }
        else
        {
            set_cursor_position(62,20); printf ("Nomor HP Harus Terdiri Dari Angka Saja");
            Sleep(1000);
            set_cursor_position(62,20); printf ("                                       ");
        }
        
    }
    while(cek3);

    set_cursor_position (42,22);  printf ("Masukkan Tanggal : "); scanf ("%d",&tanggal);
    set_cursor_position (70,22);  printf ("Masukkan Bulan   : "); scanf ("%d",&bulan);
    do
    {
        set_cursor_position (100,22); printf ("Masukkan Tahun   : "); scanf ("%d",&tahun);
        if (bulan == 2)
        {
            tanggal++;
            if (tahun % 400 == 0)
            {
                if (tanggal > 29)
                {
                    bulan++;
                    tanggal = 1;
                }        
            }
            else if (tahun % 100 == 0)
            {
                if (tanggal > 28)
                {
                    bulan++;
                    tanggal = 1;
                }
            }
            else if (tahun % 4)
            {
                bulan++;
                tanggal = 1;
            }
            else
            {
                bulan++;
                tanggal = 1;
            }
        }
        else if (bulan % 2 == 1 && bulan <= 7 || bulan % 2 == 0 && bulan >= 8)
        {
            if (tanggal > 31)
            {
                bulan++;
                tanggal = 1;
            }
        }
        else
        {
            if (tanggal > 30)
            {
                bulan++;
                tanggal = 1;
            }
        }
        if (bulan > 12)
        {
            tahun++;
            bulan = 1;
        }
        if (tahun > 2022)
        {
            set_cursor_position (119,22); printf ("Invalid");
            Sleep(500);
            set_cursor_position (119,22); printf ("       ");
        }
    }
    while (tahun > 2022);

    set_cursor_position (60,24); printf ("Apakah Anda Ingin Menyimpan Data Ini [y/t] ??? : "); simpan = getche();
    if (simpan == 'y')
    {
        set_cursor_position (70,26); printf ("Please Wait ");
        for (int a = 72; a <= 77; a++)
        {
            Sleep (2000);
            printf (". ");
        }
        set_cursor_position (75,28); printf ("Data Tersimpan :)");
        
        fprintf (daftar,"\n%s\n",nama[i]);
        fprintf (daftar,"%s\n",password1[j]);
        fprintf (daftar,"%s\n",alamat[k]);
        fprintf (daftar,"%s\n",no_hp[l]);
        fprintf (daftar,"%d-%d-%d",tanggal,bulan,tahun);
        fclose(daftar);

        Sleep (2000);
        system("cls");
        pilihan();

    }
    else if (simpan == 't')
    {
        system("cls");
        pilihan();
    }
}

void login_akun()
{
    set_text_color(10);
    for (int x = 0; x <= 170; x++)
    {
        for (int y = 0; y <= 40; y++)
        {
            set_cursor_position(x, y);
            if (x == 0 || x == 170 || y == 0 || y == 40)
            {
                printf("%c",14);
                Sleep(1);
            }
        }
    }
    for (int i = 0; i <= 50; i++)
    {
        for (int x = 0; x <= 8; x++)
        {
            Sleep(1);
            set_cursor_position(60, 15 + x);
            printf("%c",14);
            set_cursor_position(60 + i, 15);
            printf("%c",14);
            set_cursor_position(60 + i, 19);
            printf("%c",14);
            set_cursor_position(60 + i, 23);
            printf("%c",14);
            set_cursor_position(110, 15 + x);
            printf("%c",14);
        }
    }

    set_cursor_position(65,4); printf ("#           ######     ######    #   ##    #");
    set_cursor_position(65,5); printf ("#          #      #   #          #   # #   #");
    set_cursor_position(65,6); printf ("#          #      #   #  #####   #   #  #  #");
    set_cursor_position(65,7); printf ("#          #      #   #      #   #   #   # #");
    set_cursor_position(65,8); printf ("#########   ######     ######    #   #    ##");
    set_cursor_position(4,38); printf ("Tekan y Untuk Kembali Dan Tekan Apa Saja Untuk Lanjut : "); huruf1 = getche();
    if (huruf1 == 'y')
    {
        system("cls");
        pilihan();
    }
    
    FILE *login = fopen ("D:/Project T.R.S/Notepad.txt","r");
    do
    {
        int ngecek = 0;
        set_cursor_position(62,17); printf ("Masukkan Username : "); fflush (stdin); gets(username);
        set_cursor_position(62,21); printf ("Masukkan Password : "); 
        // gets(password); //gets dihapus untuk menggunakan pass *
   
        set_cursor_position(82,21); password[a] = getch();
        while(password[a] != 13)
        {
   	        if(password[a] == 8)
            {
      	        a--;
                if(a < 0)
                {
                    a = 0;
                }
                set_cursor_position(82+a,21); printf(" ");
            }
            else
            {
                set_cursor_position(82+a,21); printf("*",password[a]);
                a++;
            }
            if(a > batasan)
            {
      	        a = batasan;
                set_cursor_position(82+batasan,21); printf(" ");
            }
            set_cursor_position(82+a,21); password[a] = getch();
        }
        password[a] = '\0';

        char nama3[100][100],pass3[100][100],alamat3[100][100],no_hp3[100][100],tbt[100][100];
        int x = 0;    
        while(!feof(login))
        {
            fscanf(login,"%s",nama3[x]);
            fscanf(login,"%s",pass3[x]);
            fscanf(login,"%s",alamat3[x]);
            fscanf(login,"%s",no_hp3[x]);
            fscanf(login,"%s",tbt[x]);
            x++;
        }

        for (int a = 0; a < x; a++)
        {
            if(strcmp(nama3[a],username)==0)
            {
                if(strcmp(pass3[a],password)==0)
                {
                    ngecek = 0;
                    break;
                }
                else
                {
                    ngecek = 2;
                }
            }
            else
            {
                ngecek = 1;
            }
        }
        if(ngecek == 0)
        {
            set_cursor_position(75,25); printf("Login Sukses :)");
            Sleep(2000);
            system("cls");
            pil_reklat();
            cek5 = false;
        }
        else if(ngecek == 1)
        {
            set_cursor_position(82,17); printf ("Username Salah Coba Lagi :P");
            Sleep(500);
            set_cursor_position(82,17); printf ("                            ");
            set_cursor_position(82,21); printf ("                            ");
        }
        else if(ngecek == 2)
        {
            set_cursor_position(82,21); printf ("Password Salah Coba Lagi :P");
            Sleep(500);
            set_cursor_position(82,21); printf ("                            ");
            set_cursor_position(82,17); printf ("                            ");
        }
    }
    while(cek5);
    fclose(login);
}

void cek_data()
{
    set_text_color(10);
    for (int a = 1; a <= 170; a++)
    {
        for (int b = 1; b <= 39; b++)
        {
            if (a == 1 || a == 170 || b == 1 || b == 39)
            {
                set_cursor_position (a,b); printf ("%c",219);
                Sleep(1);
            }
            else if (b == 7 || b == 11 || b == 15 || b == 19 || b == 23 || b == 27 || b == 31 || b == 35)
            {
                set_cursor_position (a,b); printf ("%c",219);
                Sleep(1);
            }
        }
    }
   for (int a = 1; a <= 170; a++)
    {
        for (int b = 1; b <= 33; b++)
        {
            if(a == 40 || a == 85 || a == 130)
            {
                
                set_cursor_position(a,6+b); printf ("%c",219);
                Sleep(1);
            }
        }
    }
    set_cursor_position (75,4);   printf (">>>>> Cek Data <<<<<");
    set_cursor_position (15,9);   printf ("Username");
    set_cursor_position (60,9);   printf ("Alamat");
    set_cursor_position (105,9);  printf ("No HP");
    set_cursor_position (145,9);  printf ("T B T DiBuat");

    char nama3[100][100];
    char pass3[100][100];
    char alamat3[100][100];
    char no_hp3[100][100];
    char ttl[100][100];
    FILE *tampil = fopen ("D:/Project T.R.S/Notepad.txt","r");
    int x = 0;    
    while(!feof(tampil))
    {
        fscanf(tampil,"%s",nama3[x]);
        fscanf(tampil,"%s",pass3[x]);
        fscanf(tampil,"%s",alamat3[x]);
        fscanf(tampil,"%s",no_hp3[x]);
        fscanf(tampil,"%s",ttl[x]);
        x++;
    }

    int pos = 4,pos1 = 43,pos2 = 88,pos3 = 133;
    int posi = 13,posi1 = 13,posi2 = 13,posi3 = 13;

    for (int a = 0; a < x; a++)
    {
        set_cursor_position(pos,posi); printf("%s",nama3[a]);
        posi+=4;
    }
    for (int a = 0; a < x; a++)
    {
        set_cursor_position(pos1,posi1); printf("%s",alamat3[a]);
        posi1+=4;
    }
    for (int a = 0; a < x; a++)
    {
        set_cursor_position(pos2,posi2); printf("%s",no_hp3[a]);
        posi2+=4;
    }
    for (int a = 0; a < x; a++)
    {
        set_cursor_position(pos3,posi3); printf("%s",ttl[a]);
        posi3+=4;
    }

    set_cursor_position (4,40); printf ("Tekan y Untuk Kembali : "); huruf2 = getche();
    if (huruf2 == 'y')
    {
        system("cls");
        pilihan();
    }
    fclose(tampil);
}

void ubah_akun()
{
    set_text_color(10);
    for (int a = 2; a <= 168; a++)
    {
        for (int b = 2; b <= 38; b++)
        {
            if (a == 2 || a == 168 || b == 2 || b == 38)
            {
                set_cursor_position (a,b); printf ("%c",219);
                Sleep(3);
            }
            else if (b == 7)
            {
                set_cursor_position (a,b); printf ("%c",219);
                Sleep(3);
            }
        }
    }
    for (int a = 40; a <= 130; a++)
    {
        for (int b = 13; b <= 30; b++)
        {
            if (a == 40 || a == 130 || b == 13 || b == 30)
            {
                set_cursor_position (a,b); printf ("%c",219);
                Sleep(3);
            }
        }
    }

    set_cursor_position (70,4); printf (">>>>> Ubah Akun Anda <<<<<");
    set_cursor_position (4,40); printf ("Tekan y Untuk Kembali Dan Tekan Apa Saja Untuk Lanjut : "); huruf3 = getche();
    if (huruf3 == 'y')
    {
        system("cls");
        pilihan();
    }

    FILE *login1 = fopen ("Notepad.txt","r");
    do
    {
        int ngecek1 = 0;
        set_cursor_position(62,17); printf ("Masukkan Username : "); fflush(stdin); gets(username);
        set_cursor_position(62,21); printf ("Masukkan Password : "); 
        // gets(password); //gets dihapus untuk menggunakan pass *
   
        set_cursor_position(82,21); password[a] = getch();
        while(password[a] != 13)
        {
   	        if(password[a] == 8)
            {
      	        a--;
                if(a < 0)
                {
                    a = 0;
                }
                set_cursor_position(82+a,21); printf(" ");
            }
            else
            {
                set_cursor_position(82+a,21); printf("*",password[a]);
                a++;
            }
            if(a > batasan)
            {
      	        a = batasan;
                set_cursor_position(82+batasan,21); printf(" ");
            }
            set_cursor_position(82+a,21); password[a] = getch();
        }
        password[a] = '\0';
        
        char nama4[100][100],pass4[100][100],alamat4[100][100],no_hp4[100][100],tbt1[100][100];
        int x = 0;    
        while(!feof(login1))
        {
            fscanf(login1,"%s",nama4[x]);
            fscanf(login1,"%s",pass4[x]);
            fscanf(login1,"%s",alamat4[x]);
            fscanf(login1,"%s",no_hp4[x]);
            fscanf(login1,"%s",tbt1[x]);
            x++;
        }

        for (int a = 0; a < x; a++)
        {
            if(strcmp(nama4[a],username)==0)
            {
                if(strcmp(pass4[a],password)==0)
                {
                    ngecek1 = 0;
                    break;
                }
                else
                {
                    ngecek1 = 2;
                }
            }
            else
            {
                ngecek1 = 1;
            }
            
        }
        if(ngecek1 == 0)
        {
            set_cursor_position(75,25); printf("Login Sukses :)");
            Sleep(2000);
            fclose(login1);
            system("cls");
            damn();
            cek6 = false;
        }
        else if(ngecek1 == 1)
        {
            set_cursor_position(82,17); printf ("Username Salah Coba Lagi :P");
            Sleep(500);
            set_cursor_position(82,17); printf ("                            ");
            set_cursor_position(82,21); printf ("                            ");
        }
        else if(ngecek1 == 2)
        {
            set_cursor_position(82,21); printf ("Password Salah Coba Lagi :P");
            Sleep(500);
            set_cursor_position(82,21); printf ("                            ");
            set_cursor_position(82,17); printf ("                            ");
        }
    }
    while(cek6);
}

void history()
{
    set_text_color (10);
    set_cursor_position (65,5);   printf (">>>>> Studio Rekaman Mr. Humble <<<<<");
    set_cursor_position (20,10);  printf ("       Studio Rekaman Mr.Humble yang didirikan oleh Tigana Reymansyah dan berdiri pada tanggal 2 Mei 2002 yang berlokasi");
    set_cursor_position (20,12);  printf ("di Jln. Kolonel Bangun Siregar AMD Kalangan BTN Sito-tio Hilir. Secara umum, musik sangat dibutuhkan oleh manusia. Dikarenakan");
    set_cursor_position (20,14);  printf ("bisa membuat santai, tenang disaat banyak masalah dan juga bisa menghilangkan stres di fikiran. Pemilik studio ini menginginkan");
    set_cursor_position (20,16);  printf ("agar studio ini bisa di kenal lebih luas tetapi dengan biaya yang rendah. Pemilik studio ini terkadang mengalami kesulitan");
    set_cursor_position (20,18);  printf ("mendapatkan pelanggan di karenakan lokasi studionya tidak berada di tengah-tengah kota. Sehingga perlu adanya strategi untuk");
    set_cursor_position (20,20);  printf ("meningkatkan penghasilan studio. Salah satunya adalah melalui internet dikarenakan mempunyai keuntungan diantaranya hemat waktu,");
    set_cursor_position (20,22);  printf ("hemat tenaga, dan hemat biaya. Dan dengan adanya aplikasi yang dibuat oleh si pemilik studio ini bisa mempermudah pelanggan");
    set_cursor_position (20,24);  printf ("agar bisa membooking langsung kapanpun dia ingin dan tidak menghabisi energi untuk datang ke studio ini. Tujuan di didirikannya");
    set_cursor_position (20,26);  printf ("studio ini adalah untuk mengasah kemampuan vokalnya seseorang dan terkhususnya orang sumatra utara yang terkenal mempunyai suara");
    set_cursor_position (20,28);  printf ("khas yang rata-rata tinggi dan juga bertujuan untuk mencari bakat seseorang dalam bidang musik %c.",14);
    set_cursor_position (140,36); printf ("Tigana Reymansyah");
    set_cursor_position (4,38);   printf ("Tekan y Untuk Kembali : "); huruf4 = getche();
    if (huruf4 == 'y')
    {
        system("cls");
        pilihan();
    }
}

void pil_reklat()
{
    set_cursor_position (4,37);   printf ("Tekan y Untuk Kembali Dan Tekan Apa Saja Untuk Lanjut : "); huruf5 = getche();
    if (huruf5 == 'y')
    {
        system("cls");
        login_akun();
    }
    set_text_color (10);
    for (int a = 40; a <= 130; a++)
    {
        for (int b = 13; b <= 30; b++)
        {
            if (a == 40 || a == 130 || b == 13 || b == 30)
            {
                set_cursor_position (a,b); printf ("%c",219);
                Sleep(1);
            }
        }
    }
    for (int g = 1; g <= 20; g++)
    {
        for (int h = 1; h <= 5; h++)
        {
            if (g == 1 || h == 1 || g == 20 || h == 5)
            {
                set_cursor_position (50+g,15+h); printf ("%c",219);
                Sleep(1);
            }
        }
    }
    for (int g = 1; g <= 20; g++)
    {
        for (int h = 1; h <= 5; h++)
        {
            if (g == 1 || h == 1 || g == 20 || h == 5)
            {
                set_cursor_position (99+g,15+h); printf ("%c",219);
                Sleep(1);
            }
        }
    }
    for (int g = 1; g <= 20; g++)
    {
        for (int h = 1; h <= 5; h++)
        {
            if (g == 1 || h == 1 || g == 20 || h == 5)
            {
                set_cursor_position (74+g,23+h); printf ("%c",219);
                Sleep(1);
            }
        }
    }
    set_cursor_position (55,18);  printf ("1. Rekaman");
    set_cursor_position (104,18); printf ("2. Latihan");
    do
    {
        set_cursor_position (81,26);  printf ("Pilih : "); pilih2 = getche();
        if(pilih2 == '1')
        {
            system("cls");
            pil_rek();
        }
        else if (pilih2 == '2')
        {
            system("cls");
            pil_lat();
        }
        else
        {
            set_cursor_position (89,26); printf (":(");
            Sleep(1000);
            set_cursor_position (89,26); printf ("  ");
        }
    }
    while(pilih2 > '2');
}

void pil_rek()
{
    set_text_color(10);
    for (int a = 0; a <= 170; a++)
    {
        for (int b = 0; b <= 40; b++)
        {
            if(a == 0 || a == 30 || b == 0 || b == 40)
            {
                set_cursor_position(a,b); printf ("%c",219);
                Sleep(1);
            }
            else if (a == 170)
            {
                set_cursor_position(a,b); printf ("%c",219);
                Sleep(1);
            }
        }
    }
    set_cursor_position (4,10); printf ("1. Rekaman Suara Saja");
    set_cursor_position (4,15); printf ("2. Rekaman + Alat Musik");
    set_cursor_position (4,20); printf ("3. Rekaman + Sound");
    do
    {
        set_cursor_position (4,25); printf ("Pilih : "); pilih3 = getche();
        while (pilih4 == 'y')
        {
            set_cursor_position (49,1); printf ("     ");
            set_cursor_position (32,1); printf ("Mau Berapa Jam : "); scanf ("%d",&jam);
            if (pilih3 == '1')
            {
                total = jam * har_rek[0];
            }
            else if(pilih3 == '2')
            {
                total = jam * har_rek[1];
            }
            else if (pilih3 == '3')
            {
                total = jam * har_rek[2];
            }
            else
            {
                set_cursor_position (12,25); printf (":(");
                Sleep(500);
                set_cursor_position (12,25); printf ("  ");
            }
            total_bayar = total_bayar + total;
            set_cursor_position (64,2); printf (" ");
            set_cursor_position (32,2); printf ("Mau Tambah Jam Lagi [y/t] ??? : "); pilih4 = getche();
        }
    }
    while(pilih3 > '3');

    set_cursor_position (32,38); printf ("Total Bayar Anda : %d",total_bayar);
    do
    {
        set_cursor_position (32,4); printf ("Apakah Anda Ingin Membayar Dari Aplikasi Ini Atau Secara Langsung [y/t] ??? : "); pilih5 = getche();
        if (pilih5 == 'y')
        {
            do
            {
                set_cursor_position (53,5); printf ("                     ");
                set_cursor_position (32,5); printf ("Masukkan Uang Anda : "); scanf ("%d",&uang);
                if (uang > total_bayar)
                {
                    uang -= total_bayar;
                    set_cursor_position (32,6); printf ("Kembalian Uang Anda : %d",uang);
                    break;
                }
                else if (uang < total_bayar)
                {
                    total_bayar -= uang;
                    set_cursor_position (51,6); printf ("                    ");
                    set_cursor_position (32,6); printf ("Uang Anda Kurang : %d\n",total_bayar);
                }
                else if (uang == total_bayar)
                {
                    uang = 0;
                    set_cursor_position (32,7); printf ("Uang Anda Pas : %d\n",uang);
                    break;
                }
            }
            while (total_bayar >= 0);

            Sleep(500);
            system("cls");
            akhir();
        }
        else if (pilih5 == 't')
        {
            set_cursor_position(32,20); printf("Kami Akan Menunggu Kedatangan Anda :)");
            break;
        }
        else 
        {
            set_cursor_position (109,4); printf (":(");
            Sleep(500);
            set_cursor_position (109,4); printf ("  ");
        }
    }
    while (pilih5 == 't');
    
    Sleep(500);
    system("cls");
    akhir();
}

void pil_lat()
{
    set_text_color(10);
    for (int a = 0; a <= 170; a++)
    {
        for (int b = 0; b <= 40; b++)
        {
            if(a == 0 || a == 30 || b == 0 || b == 40)
            {
                set_cursor_position(a,b); printf ("%c",219);
                Sleep(1);
            }
            else if (a == 170)
            {
                set_cursor_position(a,b); printf ("%c",219);
                Sleep(1);
            }
        }
    }
    set_cursor_position (4,10); printf ("1. Latihan Suara Saja");
    set_cursor_position (4,15); printf ("2. Latihan + Alat Musik");
    set_cursor_position (4,20); printf ("3. Latihan + Sound");
    do
    {
        set_cursor_position (4,25); printf ("Pilih : "); pilih3 = getche();
        while (pilih4 == 'y')
        {
            set_cursor_position (49,1); printf ("     ");
            set_cursor_position (32,1); printf ("Mau Berapa Jam : "); scanf ("%d",&jam);
            if (pilih3 == '1')
            {
                total = jam * har_lat[0];
            }
            else if(pilih3 == '2')
            {
                total = jam * har_lat[1];
            }
            else if (pilih3 == '3')
            {
                total = jam * har_lat[2];
            }
            else
            {
                set_cursor_position (12,25); printf (":(");
                Sleep(500);
                set_cursor_position (12,25); printf ("  ");
            }
            total_bayar = total_bayar + total;
            set_cursor_position (64,2); printf (" ");
            set_cursor_position (32,2); printf ("Mau Tambah Jam Lagi [y/t] ??? : "); pilih4 = getche();
        }
    }
    while(pilih3 > '3');
    set_cursor_position (32,38); printf ("Total Bayar Anda : %d",total_bayar);
    
    do
    {
        set_cursor_position (32,4); printf ("Apakah Anda Ingin Membayar Dari Aplikasi Ini Atau Secara Langsung [y/t] ??? : "); pilih5 = getche();
        if (pilih5 == 'y')
        {
            do
            {
                set_cursor_position (53,5); printf ("                     ");
                set_cursor_position (32,5); printf ("Masukkan Uang Anda : "); scanf ("%d",&uang);
                if (uang > total_bayar)
                {
                    uang -= total_bayar;
                    set_cursor_position (32,6); printf ("Kembalian Uang Anda : %d",uang);
                    break;
                }
                else if (uang < total_bayar)
                {
                    total_bayar -= uang;
                    set_cursor_position (51,6); printf ("                    ");
                    set_cursor_position (32,6); printf ("Uang Anda Kurang : %d\n",total_bayar);
                }
                else if (uang == total_bayar)
                {
                    uang = 0;
                    set_cursor_position (32,7); printf ("Uang Anda Pas : %d\n",uang);
                    break;
                }
            }
            while (total_bayar >= 0);

            Sleep(500);
            system("cls");
            akhir();
        }
        else if (pilih5 == 't')
        {
            set_cursor_position(32,20); printf("Kami Akan Menunggu Kedatangan Anda :)"); 
            break;
        }
        else 
        {
            set_cursor_position (109,4); printf (":(");
            Sleep(500);
            set_cursor_position (109,4); printf ("  ");
        }
    }
    while (pilih5 == 't');

    Sleep(500);
    system("cls");
    akhir();

}

void damn()
{
    set_text_color(10);
    for (int a = 1; a <= 170; a++)
    {
        for (int b = 1; b <= 39; b++)
        {
            if (a == 1 || a == 170 || b == 1 || b == 39)
            {
                set_cursor_position (a,b); printf ("%c",219);
            }
        }
    }
    for (int a = 2; a <= 7; a++)
    {
        Sleep(7);
        set_cursor_position (3+a,3); printf (" #       #   # # # #        ###       #     #          # # # #        ###        # # # #     # # # #    #           #    # # # #    # # # #    # # # #");
        set_cursor_position (3+a,4); printf (" #       #   #      #      #   #      #     #          #      #      #   #      #           #            #         #    #       #   #      #   #      #");
        set_cursor_position (3+a,5); printf (" #       #   # # # #      # # # #     # # # #          # # # #      # # # #      # # # #     # # # #      #   #   #     #       #   # # # #    #       #");
        set_cursor_position (3+a,6); printf (" #       #   #      #    #       #    #     #          #           #       #            #           #      # # # #      #       #   #   #      #      #");
        set_cursor_position (3+a,7); printf ("  # # # #    # # # #    #         #   #     #          #          #         #    # # # #     # # # #        #   #        # # # #    #     #    # # # #");
    }

    char new_password[32];
    char username1[32], password2[32], address[32], phone[32], tbt[32];

    set_cursor_position (70,20); printf ("New Password : "); fgets(new_password,32,stdin);

    FILE *lama, *baru;
    lama = fopen("Notepad.txt", "r");
    baru = fopen("temporar", "w");
    while (fscanf(lama, "%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n", username1, password2, address, phone, tbt) != EOF)
    {
        if (strcmp(username1,username) == 0)
        {
            fprintf(baru, "%s\n%s%s\n%s\n%s", username1, new_password, address, phone, tbt);
            set_cursor_position (70,25); printf ("Password Berhasil Di Ubah :)");
            Sleep(1000);
        }
        else
        {
            fprintf(baru, "%s\n%s\n%s\n%s\n%s\n", username1, password2, address, phone, tbt);
        }
    }
    fclose(baru);
    fclose(lama);
    unlink("Notepad.txt");
    rename("temporar", "Notepad.txt"); 
    system("cls");
    pilihan();

}

void akhir()
{
    set_text_color (10);
    for (int a = 1; a <= 45; a++)
    {
        set_cursor_position (2+a,7);  printf (" # # # # #   # # # # #   # # # # #     # # #   #           #         #");
        set_cursor_position (2+a,8);  printf ("     #       #           #         #     #     # #       # #        # #");
        set_cursor_position (2+a,9);  printf ("     #       #           #         #     #     #   #   #   #       #   #");
        set_cursor_position (2+a,10); printf ("     #       # # # # #   # # # # #       #     #     #     #      # # # #");
        set_cursor_position (2+a,11); printf ("     #       #           #    #          #     #           #     #       #");
        set_cursor_position (2+a,12); printf ("     #       #           #      #        #     #           #    #         #");
        set_cursor_position (2+a,13); printf ("     #       # # # # #   #        #    # # #   #           #   #           #");
    }

    for (int a = 1; a <= 50; a++)
    {
        set_cursor_position (2+a,17); printf (" #       #         #         # # # # #    # # #   #       #         #");
        set_cursor_position (2+a,18); printf (" #     #          # #       #               #     #       #          #");
        set_cursor_position (2+a,19); printf (" #   #           #   #      #               #     #       #      #    #");
        set_cursor_position (2+a,20); printf (" # #            # # # #      # # # # #      #     # # # # #           #");
        set_cursor_position (2+a,21); printf (" #   #         #       #              #     #     #       #      #   #");
        set_cursor_position (2+a,22); printf (" #     #      #         #             #     #     #       #         #");
        set_cursor_position (2+a,23); printf (" #       #   #           #   # # # # #    # # #   #       #        #");

        set_cursor_position (2+a,26); printf (" # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #");
    }

}

bool val_nama(char nama[])
{
    set_cursor_position(62,14); nama[b] = getch();
    while(nama[b] != 13)
    {
        if(nama[b] == 8)
        {
            b--;
            if(b < 0)
            {
                b = 0;
            }
            set_cursor_position(62+b,14); printf(" ");
        }
        else
        {
            set_cursor_position(62+b,14); printf("%c",nama[b]);
            b++;
        }
        if(b > batasan1)
        {
            b = batasan1;
            set_cursor_position(62+batasan1,14); printf(" ");
        }
        set_cursor_position(62+b,14); nama[b] = getch();
    }
    nama[b] = '\0';
    
    for(int j = 0; j < strlen(nama); j++)
    {
        if(!(nama[j] >= 'a' && nama[j] <= 'z') && !(nama[j] >= 'A' && nama[j] <= 'Z'))
        {
            strcpy(nama," ");
        }
    }
    if(strcmp(nama," ")==0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool val_password1(char password1[])
{
    set_cursor_position(62,16); password1[c] = getch();
    while(password1[c] != 13)
    {
        if(password1[c] == 8)
        {
            c--;
            if(c < 0)
            {
                c = 0;
            }
            set_cursor_position(62+c,16); printf(" ");
        }
        else
        {
            set_cursor_position(62+c,16); printf("%c",password1[c]);
            c++;
        }
        if(c > batasan2)
        {
            c = batasan2;
            set_cursor_position(62+batasan2,16); printf(" ");
        }
        set_cursor_position(62+c,16); password1[c] = getch();
    }
    password1[c] = '\0';

    for(int j = 0; j < strlen(password1); j++)
    {
        if(!(password1[j] >= 'a' && password1[j] <= 'z') && !(password1[j] >= 'A' && password1[j] <= 'Z'))
        {
            strcpy(password1," ");
        }
    }
    if(strcmp(password1," ")==0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool val_no_hp(char no_hp[])
{
    set_cursor_position(62,20); no_hp[e] = getch();
    while(no_hp[e] != 13)
    {
        if(no_hp[e] == 8)
        {
            e--;
            if(e < 0)
            {
                e = 0;
            }
            set_cursor_position(62+e,20); printf(" ");
        }
        else
        {
            set_cursor_position(62+e,20); printf("%c",no_hp[e]);
            e++;
        }
        if(e > batasan4)
        {
            e = batasan4;
            set_cursor_position(62+batasan4,20); printf(" ");
        }
        set_cursor_position(62+e,20); no_hp[e] = getch();
    }
    no_hp[e] = '\0';

    int cek7 = 0;

    if(strlen(no_hp) == '\0' || !(no_hp[0] >= '0' && no_hp[0] <= '9') || !(no_hp[strlen(no_hp)-1] >= '0' && no_hp[strlen(no_hp)-1] <= '9') || !(strlen(no_hp) >= 11 && strlen(no_hp) <= 13))
    {
   	    cek7++;
    }
   for(int m = 0; m < strlen(no_hp); m++)
   {
   	    if(!(no_hp[m] >= '0' && no_hp[m] <= '9') || no_hp[1] != '8' || no_hp[0] != '0')
        {
      	    cek7++;
        }
   }
   if(cek7 > 0)
   {
   	    return false;
   }
   else
   {
   	    return true;
   }
}

bool val_alamat(char alamat[])
{
    set_cursor_position(62,18); alamat[d] = getch();
    while(alamat[d] != 13)
    {
        if(alamat[d] == 8)
        {
            d--;
            if(d < 0)
            {
                d = 0;
            }
            set_cursor_position(62+d,18); printf(" ");
        }
        else
        {
            set_cursor_position(62+d,18); printf("%c",alamat[d]);
            d++;
        }
        if(d > batasan3)
        {
            d = batasan3;
            set_cursor_position(62+batasan3,18); printf(" ");
        }
        set_cursor_position(62+d,18); alamat[d] = getch();
    }
    alamat[d] = '\0';

    for(int j = 0; j < strlen(alamat); j++)
    {
        if(!(alamat[j] >= 'a' && alamat[j] <= 'z') && !(alamat[j] >= 'A' && alamat[j] <= 'Z'))
        {
            strcpy(alamat," ");
        }
    }
    if(strcmp(alamat," ")==0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void main()
{
    project_trs();
    getch();
}



// width 172 dan heigth 41
// screen background 12 12 12
// di daftar ubah \n jadi sebelum nama
// ubah akun dan login tambah fflush
//fscanf adalah membaca sebuah value yang ada di file
//\n di hapus di ubah password
//harus di run dulu sekali baru close