/* Create by Oksa Bayu Widrian
   23343080 Padang State University */
#include <stdio.h>

// Fungsi untuk menghitung luas lingkaran
float luas(float jarijari) {
    return 3.14 * jarijari * jarijari;
}

// Fungsi untuk menghitung keliling lingkaran
float keliling(float jarijari) {
    return 2 * 3.14 * jarijari;
}

int main() {
    float jarijari;

    printf(" Program menghitung Luas dan Keliling Lingkaran\n");
    // Memasukkan nilai radius dari pengguna
    printf("\n Masukkan nilai radius lingkaran: ");
    scanf("%f", &jarijari);

    // Menghitung dan menampilkan luas lingkaran
    printf("\n\n Luas lingkaran    : %.2f\n", luas(jarijari));

    // Menghitung dan menampilkan keliling lingkaran
    printf(" Keliling lingkaran: %.2f\n", keliling(jarijari));

    return 0;
}
