/*Create by Oksa Bayu Widrian
 23343080 Padang State University*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fungsi untuk menginput biodata
void inputBiodata(FILE *file, int *counter) {
    char nama[50], jurusan[50], prodi[50], nim[20];

    // Membersihkan stdin
    fflush(stdin);

    // Input nama
    printf("Masukkan Nama           : ");
    fgets(nama, sizeof(nama), stdin);

    // Input NIM
    printf("Masukkan NIM            : ");
    fgets(nim, sizeof(nim), stdin);

    // Input jurusan
    printf("Masukkan Jurusan        : ");
    fgets(jurusan, sizeof(jurusan), stdin);

    // Input Program studi
    printf("Masukkan Program Studi  : ");
    fgets(prodi, sizeof(prodi), stdin);

    // Menulis biodata ke dalam file
    fprintf(file, "Data Mahasiswa ke-%d\n", (*counter) + 1);
    fprintf(file, "Nama: %sNIM: %sJurusan: %sProgram Studi: %s\n\n", nama, nim, jurusan, prodi);
    printf("Biodata berhasil ditambahkan!\n");

    // Increment counter setelah menambahkan biodata
    (*counter)++;
}

// Fungsi untuk membuka dan menampilkan isi file
void tampilkanBiodata(FILE *file) {
    char line[1000];  // Menggunakan buffer yang cukup besar untuk membaca satu baris

    // Mengatur posisi file ke awal
    rewind(file);

    // Membaca dan menampilkan isi file
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    printf("\n");
}

int main() {
    FILE *file;
    char pilihan;
    int counter = 0;

    // Membuka file untuk ditulis dan membaca (mode "a+")
    file = fopen("datamahasiswa.txt", "a+");
    if (file == NULL) {
        printf("Gagal membuka file datamahasiswa.txt\n");
        return 1;
    }

    do {
        printf("\nMenu:\n");
        printf("1. Input Biodata\n");
        printf("2. Tampilkan Biodata\n");
        printf("3. Keluar\n");
        printf("Pilihan Anda: ");
        scanf(" %c", &pilihan);

        switch (pilihan) {
            case '1':
                // Memanggil fungsi inputBiodata
                inputBiodata(file, &counter);
                break;
            case '2':
                // Memanggil fungsi tampilkanBiodata
                tampilkanBiodata(file);
                break;
            case '3':
                printf("Program selesai.\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan pilih lagi.\n");
        }

    } while (pilihan != '3');

    // Menutup file setelah selesai digunakan
    fclose(file);

    return 0;
}
