/*
   Nama File: kredit2.c
   Menghitung besar cicilan kredit barang dan
   sisa hutang
*/
#include <stdio.h>
#include <stdlib.h>
// kontanta bunga kredit pertahun dalam persen
#define BUNGA 0.09

int main() {
    double harga, hutang, bunga, cicilan, uangMuka, sisa, pokok;
    int bulan, kaliKe;
    char input[100]; // BUFFER untuk menyimpan input
    char output [100]; //BUFFER umtuk menyimpan output

// Proses Input tanpa format menggunakan fgets()
    printf(" Ketikkan harga barang: Rp. ");
    fgets(input, sizeof(input), stdin);
    harga = atof(input); // Mengubah teks menjadi double

    printf(" Ketikkan besar uang muka: Rp. ");
    fgets(input, sizeof(input), stdin);
    uangMuka = atof(input); //

    printf(" Ketikkan jumlah bulan kredit: ");
    fgets(input, sizeof(input), stdin);
    bulan = atoi(input);

    printf(" Ketikkan Cicilan kali ke berapa: ");
    fgets(input, sizeof(input), stdin);
    kaliKe = atoi(input);

// Menghitung pokok hutang
    hutang = harga - uangMuka;

// Menghitung bunga perbulan
    bunga = (BUNGA * hutang) / 12;

// Menghitung pokok perbulan
    pokok = hutang / bulan;

// Menghitung besr cicilan
    cicilan = pokok + bunga;

// Menghitung sisa hutang
    sisa = hutang - pokok * kaliKe;

// Menampilkan informasi tanpa pemformatan menggunakan puts()
    printf("\n");
    printf(" Harga Barang            : Rp. %10.1lf\n", harga);
    printf(" Uang Muka               : Rp. %10.1lf\n", uangMuka);
    printf(" Banyaknya bulan cicilan : %d kali cicilan\n", bulan);
    printf(" Pokok Hutang            : Rp. %10.1lf\n", pokok);
    printf(" Besar bunga bulanan     : Rp. %10.1lf\n", bunga);
    printf(" Besar Cicilan per bulan : Rp. %10.1lf\n", cicilan);
    printf(" Cicilan ke-             : %d\n", kaliKe);
    printf(" Sisa Pokok Hutang       : Rp. %10.1lf\n", sisa);

    return 0;
}
