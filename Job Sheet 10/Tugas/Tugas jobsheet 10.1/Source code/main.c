/* Create by Oksa Bayu Widrian
   23343080 Padang State University */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char opsi;
    srand(time(NULL));

    while (1) {
        int jumlahTebakan = 0;  // Menyimpan jumlah tebakan
        printf("Apakah anda ingin bermain? Ya(y) atau Tidak(n)\n");
        printf("Masukkan pilihan anda (y/n): ");
        scanf("%c", &opsi);

        if (opsi == 'Y' || opsi == 'y') {
            int tebakan;
            int Norandom;
            do {
                int Norandom = rand() % 20 + 1;  // Pemindahan inisialisasi ke dalam loop
                printf("\nMasukkan angka tebakan anda: ");
                scanf("%d", &tebakan);
                jumlahTebakan++;

                printf("\nAngka tebakan anda adalah: %d\n", tebakan);
                printf("Nomor acak               : %d\n", Norandom);

                if (tebakan == Norandom) {
                    printf("Selamat, anda benar!\n");
                    break;
                } else if (tebakan < Norandom) {
                    printf("Nomor saya lebih besar!\n\n");
                } else {
                    printf ("Nomor saya lebih kecil!\n\n");
                }

            } while (tebakan != Norandom);

            printf("Jumlah tebakan yang dibutuhkan: %d\n\n", jumlahTebakan);

        } else if (opsi == 'N' || opsi == 'n') {
            printf("Anda Telah Keluar dari Program.\n\n");
            break;
        } else {
            printf("Pilihan tidak valid\n\n");
        }
    }

    return 0;
}
