/* Create by Oksa Bayu Widrian
   23343080 Padang State University*/

#include <stdio.h>

void say_hello()
{
    printf("Hello Selamat Datang!\n");
}

void main()
{
    //memanggil fungsi say_hello()
    printf("Panggil Sekali\n");
    say_hello();

    //memanggil fungsi say_hello()
    printf("\nPanggil Tiga kali\n");
    say_hello();
    say_hello();
    say_hello();
}
