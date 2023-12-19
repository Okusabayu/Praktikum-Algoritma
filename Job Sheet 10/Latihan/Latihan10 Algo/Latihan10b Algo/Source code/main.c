/* Create by Oksa bayu Widrian
   23343080 Padang State University */
#include <stdio.h>

enum boolean {false, true};
enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};


void main()
{
    int a = 4;
    int b = 5;

    if(a < b == true)
    {
        printf("Variabel a lebih kecil dari b\n");
    }

    enum hari sekarang;
    sekarang = RABU;

    printf("Ukuran variabel enum: %d bytes\n", sizeof(sekarang));
}
