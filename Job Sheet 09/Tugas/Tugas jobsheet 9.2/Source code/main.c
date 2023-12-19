/* Create by Oksa Bayu Widrian
   23343080 Padang State University */
#include <stdio.h>
#include <string.h>

void Kebalikan(char *kalimat) {
    int panjang = strlen(kalimat);

    // Menukar karakter pertama dengan karakter terakhir, dan seterusnya
    for (int i = 0; i < panjang / 2; i++) {
        char temp = kalimat[i];
        kalimat[i] = kalimat[panjang - i - 1];
        kalimat[panjang - i - 1] = temp;
    }
}

int main() {
    char Kalimat[100];

    // Memasukkan kalimat dari pengguna
    printf("Masukkan kalimat: ");
    fgets(Kalimat, sizeof(Kalimat), stdin);

    // Menghapus karakter newline (\n) dari input fgets
    Kalimat[strcspn(Kalimat, "\n")] = '\0';

    // Memanggil fungsi untuk membalikkan kalimat
    Kebalikan(Kalimat);

    // Menampilkan kalimat terbalik
    printf("Kalimat Terbalik: %s\n", Kalimat);

    return 0;
}

