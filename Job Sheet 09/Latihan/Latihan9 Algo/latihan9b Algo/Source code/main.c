/* Create by Oksa Bayu Widrian
    23343080 Padang State University */

#include <stdio.h>

int main()
{
    //membuat variabel score
    int score = 0;

    /*membuat pointer dan referensikan dengan alamat
      dari variabel score*/
    int *p_score = &score;

    // mengakses data variabel score dari pointer
    printf("isi *p_score   = %d\n", *p_score);
    printf("isi score awal = %d\n\n", score);

    //mengubah data variabel score dari pointer
    *p_score = 5;

    //melihat isi variabel score
    printf("isis score setelah diubah = %d\n", score);
}
