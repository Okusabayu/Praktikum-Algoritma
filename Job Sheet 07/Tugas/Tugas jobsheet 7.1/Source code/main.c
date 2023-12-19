/* Create by Oksa Bayu Widrian
   23343080 Padang State University */
#include <stdio.h>

int main() {
    // Deklarasi variabel
    int i;
    int nilai[20];
    float rata_rata = 0;

    // Input nilai dari 20 mahasiswa
    for(i = 0; i < 20; i++) {
        printf("Masukkan nilai mahasiswa ke-%d  : ", i+1);
        scanf("%d", &nilai[i]);

        // Menghitung rata-rata
        rata_rata += nilai[i];
    }

    // Menghitung rata-rata
    rata_rata /= 20;

    // Menampilkan rata-rata
    printf("Rata-rata nilai mahasiswa adalah %.2f\n", rata_rata);

    return 0;
}


