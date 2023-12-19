/* Create by Oksa Bayu Widrian
   23343080 Padang State University */
#include <stdio.h>

// Fungsi rekursif untuk menghitung besar potongan
float potong(float totalPembelian) {
    if (totalPembelian < 1000000) {
        return 0; // Tidak mendapatkan diskon
    } else if (totalPembelian >= 1000000 && totalPembelian < 3000000) {
        return 0.2 * totalPembelian; // Diskon 20%
    } else {
        return 0.35 * totalPembelian; // Diskon 35%
    }
}

int main() {
    float totalPembelian, diskon, totalBayar;

    // Memasukkan total pembelian dari pengguna
    printf("Program Hitung Potongan\n");
    printf("Total Pembelian (Rp.): ");
    scanf("%f", &totalPembelian);

    // Menghitung besarnya diskon menggunakan fungsi potong
    diskon = potong(totalPembelian);

    // Menghitung besaran yang harus dibayarkan setelah diskon
    totalBayar = totalPembelian - diskon;

    // Menampilkan hasil perhitungan
    printf("\nBesar Diskon               : Rp. %.2f\n", diskon);
    printf("Besar Yang Harus Dibayarkan: Rp. %.2f\n", totalBayar);

    return 0;
}

