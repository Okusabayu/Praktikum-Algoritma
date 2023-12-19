/* Create by Oksa Bayu Widrian
   23343080 Padang State University */
#include <stdio.h>

// Definisikan struktur untuk data mahasiswa
struct Mahasiswa {
    char npm[20];
    char nama[50];
    char tgl_lahir[20];
    char alamat[50];
    char hp[20];
};

int main() {
    // Deklarasi array untuk menyimpan data mahasiswa
    struct Mahasiswa mahasiswaArray[100]; // Misalnya, batasi jumlah mahasiswa maksimal ke 100

    int jumlahMahasiswa = 0; // Untuk melacak jumlah mahasiswa yang sudah diinput

    char lagi;
    printf ("\tMasukkan data Mahasiswa\n\n");

    do {
        // Meminta input dari pengguna
        printf("NPM                     : ");
        scanf("%s", mahasiswaArray[jumlahMahasiswa].npm);

        printf("NAMA                    : ");
        scanf("%s", mahasiswaArray[jumlahMahasiswa].nama);
        fflush (stdin);

        printf("TGL LAHIR (dd-mm-yy)    : ");
        scanf("%s", mahasiswaArray[jumlahMahasiswa].tgl_lahir);

        printf("ALAMAT (misal Padang)   : ");
        scanf("%s", mahasiswaArray[jumlahMahasiswa].alamat);

        printf("HP                      : ");
        scanf("%s", mahasiswaArray[jumlahMahasiswa].hp);

        // Menampilkan output data mahasiswa yang baru
        printf("\n\n |%s \t|%s \t|%s \t|%s  \t|%s\n", mahasiswaArray[jumlahMahasiswa].npm, mahasiswaArray[jumlahMahasiswa].nama, mahasiswaArray[jumlahMahasiswa].tgl_lahir, mahasiswaArray[jumlahMahasiswa].alamat, mahasiswaArray[jumlahMahasiswa].hp);

        jumlahMahasiswa++; // Menambah jumlah mahasiswa yang sudah diinput

        // Meminta pengguna apakah ingin memasukkan data lagi
        printf("\nMau memasukkan data lagi [y/t]? ");
        scanf(" %c", &lagi);

    } while (lagi == 'y' || lagi == 'Y');

    // Menampilkan semua data mahasiswa yang telah diinput
    printf("\n\nData Mahasiswa:\n\n");
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf(" |%s \t|%s   \t|%s \t|%s  \t|%s\n", mahasiswaArray[i].npm, mahasiswaArray[i].nama, mahasiswaArray[i].tgl_lahir, mahasiswaArray[i].alamat, mahasiswaArray[i].hp);
    }

    return 0;
}
