/* Create by Oksa Bayu Widrian
   23343080 Padang State University */
#include <stdio.h>

// Fungsi rekursif untuk menghitung hasil perkalian
int perkalian(int a, int b) {
    // Kasus dasar
    if (b == 1) {
        return a;
    }
    // Langkah rekursif
    else {
        return a + perkalian(a, b - 1);
    }
}

int main() {
    int bilangan1, bilangan2;

    // Memasukkan bilangan pertama
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bilangan1);

    // Memasukkan bilangan kedua
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &bilangan2);

    // Memanggil fungsi rekursif untuk menghitung perkalian
    int hasil = perkalian(bilangan1, bilangan2);

    // Menampilkan hasil
    printf("Hasil perkalian: %d\n", hasil);

    return 0;
}
