/* Create by Oksa Bayu Widrian
    23343080 Padang State University */

#include <stdio.h>

void main()
{
    printf("## Program Antrian CS ##\n");

    char no_antrian[15] = {'A','B','C','D','E'};

    //menggunakan pointer
    char *ptr_current = &no_antrian;

    for(int i = 0; i < 5; i++)
    {
        printf("Pelanggan dengan no antrian %c silahkan ke loket!\n", *ptr_current);
        printf("Saat ini CS sedang melayani : %c\n", *ptr_current);
        printf("-------- Tekan Enter Untuk Next --------");
        getchar();
        ptr_current++;
    }
    printf("SELESAI");
}
