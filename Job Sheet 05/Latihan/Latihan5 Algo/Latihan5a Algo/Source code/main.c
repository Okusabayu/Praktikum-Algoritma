/* Create by Oksa Bayu Widrian
   23343080 Padang State University*/

#include <stdio.h>

void main()
{
    char password[30];

    printf("==== Program Login ==== \n");
    printf("Masukkan password: ");
    scanf("%s", &password);

    //percabangan if/else
    if(strcmp(password, "kopi") == 0 )
    {
        printf("Selamat datang Boss!\n");
    }

    printf("Terimakasih sudah menggunakan aplikasi ini\n");
}
