/* Create by Oksa Bayu Widrian
    23343080 Padang State University */

#include <stdio.h>

void main()
{
    //membuat variabel
    int a;
    char b[10];
    int umur = 19;
    float tinggi = 175.6;

    // membuat pointer
    int *pointer_umur = &umur;
    int *pointer2 = &umur;
    float *p_tinggi = &tinggi;

    //mencetak alamat memori variabel
    printf("Alamat memori variabel a: %d\n", &a);
    printf("Alamat memori variabel b: %x\n\n", &b);
    printf("Alamat memori variabel 'umur' = %d\n", &umur);
    printf("Alamat memori variabel 'tinggi' = %d\n\n", &tinggi);

    // mencetak referensi alamat memori variabel
    printf("Referensi memori *pointer_umur = %d\n", pointer_umur);
    printf("Referensi memori *pointer2     = %d\n", pointer2);
    printf("Referensi memori *p_tinggi     = %d\n\n", p_tinggi);

    //mencetak alamat memori pointer
    printf("Alamat memori *pointer_umur = %d\n", &pointer_umur);
    printf("Alamat memori *pointer2     = %d\n", &pointer2);
    printf("Alamat memori *p_tinggi     = %d\n", &p_tinggi);
}
