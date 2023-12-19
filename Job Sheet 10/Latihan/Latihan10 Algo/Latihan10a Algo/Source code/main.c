/* Create by Oksa bayu Widrian
   23343080 Padang State University */
#include <stdio.h>

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

void main()
{
    enum hari sekarang;
    sekarang = RABU;
    printf("Sekarang hari ke-%d\n", sekarang + 1);

}
