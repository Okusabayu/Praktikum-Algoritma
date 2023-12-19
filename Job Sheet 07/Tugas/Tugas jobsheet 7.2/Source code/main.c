/* Create by Oksa Bayu Widrian
   23343080 Padang State University */
#include <stdio.h>

void input_mahasiswa() {
    int i, n;
    char mahasiswa[100][100];

    // Meminta banyak mahasiswa yang akan diinputkan
    printf("Masukkan banyak mahasiswa yang akan diinputkan: ");
    scanf("%d", &n);

    // Meminta input nama mahasiswa ke-n (n=jumlah mahasiswa yang diinput)
    for (i = 0; i < n; i++) {
        printf("Masukkan nama mahasiswa ke-%d: ", i+1);
        scanf("%s", mahasiswa[i]);
    }

    // Menampilkan keseluruhan elemen dari mahasiswa tersebut
    printf("\nNama mahasiswa:\n");
    for (i = 0; i < n; i++) {
        printf("%d. %s\n", i+1, mahasiswa[i]);
    }
}

int main() {
    input_mahasiswa();
    return 0;
}
