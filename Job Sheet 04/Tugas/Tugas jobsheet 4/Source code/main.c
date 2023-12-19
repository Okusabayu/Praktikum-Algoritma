/*Create by Oksa Bayu Widrian
 23343080 Padang State University*/
#include <stdio.h>

int main() {
    int detik, jam, menit;

    printf("\n Jobsheet 4 Oksa Bayu Widrian\n");
    printf("------------------------------\n");

    // No.1 Konversi detik ke bentuk jam,menit,detik
    printf("A. Konversi Detik ke jam, menit, detik\n");
    printf("\n Masukkan jumlah waktu dalam detik: ");
    scanf("%d", &detik);

    jam = detik / 3600;
    menit = (detik % 3600) / 60;
    detik = detik % 60;

    printf("\n Hasil konversi: %d Jam, %d Menit, %d Detik\n", jam, menit, detik);
    printf("\n===============================================\n\n");

    // No.2 Program Kasir barang meminta inputan
    char nama[20], barang [50];
    float harga, total;
    int jumlah;

    printf("B. Program Inputan Kasir Barang\n");
    printf(" Masukkan nama pembeli     : ");
    scanf("%s", nama);
    printf(" Masukkan nama barang      : ");
    scanf("%s", barang);
    printf(" Harga barang per satuan   : ");
    scanf("%f", &harga);
    printf(" Jumlah barang yang dibeli : ");
    scanf("%i", &jumlah);

    total = harga * jumlah;

    if(total >= 1000000.0){
            printf("Total harga: %.3f Juta\n", total / 1000000.0);
    }
    else if(total >= 1000.0){
            printf("Total harga:Rp %.3f Ribu\n", total / 1000.0);
    }
    else if(total >=0.0){
            printf("Total harga:Rp %.1f \n", total );
    }
    else {
            printf(" Harga yang dimasukkan Tidak Valid\n", total);
    }

    printf("\n================================================\n\n");

    // No.3 Nilai Akhir Praktikum

    float nilaiAkhir, presensi, praktek, uts, uas;

    printf("C. Nilai Akhir Praktikum\n\n");
    printf(" Masukkan Nilai Presensi : ");
    scanf ("%f", &presensi);
    printf(" Masukkan nilai Praktek  : ");
    scanf ("%f", &praktek);
    printf(" Masukkan Nilai UTS      : ");
    scanf ("%f", &uts);
    printf(" Masukkan Nilai UAS      : ");
    scanf ("%f", &uas);

    nilaiAkhir = (presensi * 0.1)+(praktek * 0.2)+(uts * 0.3)+(uas * 0.4);

    printf("Nilai Akhir Anda Adalah: %.2f", nilaiAkhir);
    printf("\n================================================\n\n");

    // No.4 Program Rental Film


    int durasiFilm;
    int tarifPertama = 15000;  // Tarif untuk jam pertama
    float tarifBerikutnya = 0.5 * tarifPertama;  // Tarif untuk jam berikutnya (50% dari tarif pertama)
    int totalBiaya = 0;

    printf("Masukkan durasi film dalam jam: ");
    scanf("%d", &durasiFilm);

    if (durasiFilm >= 1) {
        totalBiaya += tarifPertama;  // Menambahkan tarif pertama ke total biaya
        durasiFilm--;  // Mengurangi satu jam dari durasi film
    }

    if (durasiFilm > 0) {
        totalBiaya += durasiFilm * tarifBerikutnya;  // Menambahkan tarif jam berikutnya ke total biaya
    }

    printf("Total biaya sewa film selama %d jam adalah Rp %d\n", durasiFilm + 1, totalBiaya);


    return 0;
}
