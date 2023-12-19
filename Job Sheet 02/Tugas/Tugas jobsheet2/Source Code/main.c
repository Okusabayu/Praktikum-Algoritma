/*Create by Oksa Bayu Widrian
 23343080 Padang State University*/
#include <stdio.h>

int main()
{
    float UAS, IPK, UTS, Praktikum, Nilai_Akhir;
    int usia, NIM;
    char nama [30], Prodi [30], Fakultas [30], Nama [30];
// luas segitiga
    int a = 8, t = 5, lu;
// luas persegi panjang
    int le = 5, p = 10, l;

//Latihan No.1
    printf("Belajar Bahasa C\n");
    printf("Latihan 1 Algoritma\n\n");
    //Membuat Variabel
    printf("Hello, siapa nama lengkapmu       : ");
    scanf("%[^\n]", nama);

    printf("\nSelamat Datang %s", nama);
    printf("\nDalam Bahasa Pemrograman C\n\n");

//Latihan No.2
    printf("Masukkan nama anda          : ");
    scanf("%s", Nama);
    fflush(stdin);
    printf("Berapa Usia Anda            : ");
    scanf("%i", &usia);
    printf("Berapa nilai IPK Anda       : ");
    scanf("%f", &IPK);
    printf("Berapa NIM Anda             : ");
    scanf("%i", &NIM);
    printf("Masukkan Prodi Anda         : ");
    scanf("%s", Prodi);
    while(getchar() != '\n');
    printf("Nama Fakultas Anda          : ");
    scanf("%[^\n]", Fakultas);
    printf("Berapa Nilai Praktikum Anda : ");
    scanf("%f", &Praktikum);
    printf("Berapa Nilai UTS Anda       : ");
    scanf("%f", &UTS);
    printf("Berapa Nilai UAS Anda       : ");
    scanf("%f", &UAS);
    Nilai_Akhir = 0.3 * Praktikum + 0.3 * UTS + 0.4 * UAS;

    //menampilkan hasil
    printf("\nNama             : %s", Nama);
    printf("\nIPK              : %.1f", IPK);
    printf("\nNIM              : %i", NIM);
    printf("\nProdi            : %s", Prodi);
    printf("\nFakultas         : %s", Fakultas);
    printf("\nNilai Praktikum  : %.2f", Praktikum);
    printf("\nNilai UTS        : %.2f", UTS);
    printf("\nNilai UAS        : %.2f", UAS);
    printf("\nNilai Akhir      : %.2f\n", Nilai_Akhir);

// Latihan No.3
    printf("\n\n");
    printf("Menghitung luas segitiga dengan\n");
    printf("Panjang Alas segitiga : %i cm\n", a);
    printf("Tinggi segitiga       : %i cm\n", t);
    lu = a*t/2;
    printf("\n-----------------------\n");
    printf("Luas segitiga         : %i cm\n", lu);

// Latihan No.4
    printf("\n----------------------------------------\n");
    printf("Menghitung luas persegi panjang dengan\n");
    printf("Panjang Persegi Panjang  : %i cm\n", p);
    printf("Lebar Persegi Panjang    : %i cm\n", le);
    l = p*le;
    printf("\n--------------------------\n");
    printf("Luas Persegi Panjang     : %i cm\n", l);

    return 0;
}
