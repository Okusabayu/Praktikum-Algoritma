/* Create by Oksa Bayu Widrian
   23343080 Padang State University */
#include <stdio.h>

// Deklarasi prototipe fungsi
int penjumlahan(int a, int b);
int pengurangan(int a, int b);
int perkalian(int a, int b);
float pembagian(float a, float b);

int main() {
    printf("\tPerhitungan Aritmatik\n\n");
    int bil1, bil2;
    float hasilBagi;

    // Memasukkan dua bilangan bulat
    printf(" Masukkan bilangan pertama: ");
    scanf("%d", &bil1);
    printf(" Masukkan bilangan kedua  : ");
    scanf("%d", &bil2);

    // Memanggil fungsi rekursif untuk penjumlahan, pengurangan, dan perkalian
    int hasilJumlah = penjumlahan(bil1, bil2);
    int hasilKurang = pengurangan(bil1, bil2);
    int hasilKali = perkalian(bil1, bil2);

    // Menampilkan hasil penjumlahan, pengurangan, dan perkalian
    printf("\n Hasil Penjumlahan: %d\n", hasilJumlah);
    printf(" Hasil Pengurangan: %d\n", hasilKurang);
    printf(" Hasil Perkalian  : %d\n", hasilKali);

    // Memanggil fungsi rekursif untuk pembagian
    if (bil2 != 0) {
        hasilBagi = pembagian((float)bil1, (float)bil2);
        printf(" Hasil Pembagian  : %.2f\n", hasilBagi);
    } else {
        printf("Pembagian oleh nol tidak valid.\n");
    }

    return 0;
}

// Definisi fungsi rekursif untuk penjumlahan
int penjumlahan(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return penjumlahan(a + 1, b - 1);
    }
}

// Definisi fungsi rekursif untuk pengurangan
int pengurangan(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return pengurangan(a - 1, b - 1);
    }
}

// Definisi fungsi rekursif untuk perkalian
int perkalian(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return a + perkalian(a, b - 1);
    }
}

// Definisi fungsi rekursif untuk pembagian
float pembagian(float a, float b) {
    if (a < b) {
        return 0;
    } else {
        return 1 + pembagian(a - b, b);
    }
}
