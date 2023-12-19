/*Create by Oksa Bayu Widrian
 23343080 Padang State University*/
#include <stdio.h>

int main() {
    int pilihan;
    double bil1, bil2;

    while (1) {  // perulangan tak terbatas, bisa diakhiri dengan break, 1 itu artinya true
        printf("\n\t\tProgram Kalkulator Sederhana\n\n");
        printf("Opsi Operasi: \n");
        printf(" 1. Pertambahan\n 2. Perkalian\n 3. Pengurangan\n 4. Pembagian\n");
        printf(" 5. Keluar dari Program\n");
        printf("Pilih Opsi Operasi (1/2/3/4/5): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("\n\tPertambahan\n");
                printf("Masukkan bilangan pertama: ");
                scanf("%lf", &bil1);
                printf("Masukkan bilangan kedua  : ");
                scanf("%lf", &bil2);
                printf("Hasil dari Pertambahan bilangan: %.2lf\n", bil1 + bil2);
                break;

            case 2:
                printf("\n\tPerkalian\n");
                printf("Masukkan bilangan pertama: ");
                scanf("%lf", &bil1);
                printf("Masukkan bilangan kedua  : ");
                scanf("%lf", &bil2);
                printf("Hasil dari Perkalian bilangan: %.2lf\n", bil1 * bil2);
                break;

            case 3:
                printf("\n\tPengurangan\n");
                printf("Masukkan bilangan pertama: ");
                scanf("%lf", &bil1);
                printf("Masukkan bilangan kedua  : ");
                scanf("%lf", &bil2);
                printf("Hasil dari Pengurangan bilangan: %.2lf\n", bil1 - bil2);
                break;

            case 4:
                printf("\n\tPembagian\n");
                printf("Masukkan bilangan pertama: ");
                scanf("%lf", &bil1);
                printf("Masukkan bilangan kedua  : ");
                scanf("%lf", &bil2);
                if (bil2 != 0) {
                    printf("Hasil dari Pembagian bilangan: %.2lf\n", bil1 / bil2);
                } else {
                    printf("Pembagian oleh nol tidak valid!\n");
                }
                break;

            case 5:
                printf("Anda Keluar dari Program\n");
                return 0;

            default:
                printf("Pilihan Tidak Valid!\n");
        }
    }

    return 0;
}
