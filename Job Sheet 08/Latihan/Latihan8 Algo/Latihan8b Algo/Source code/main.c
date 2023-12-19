/* Create by Oksa Bayu Widrian
   23343080 Padang State University*/

#include <stdio.h>

void say_hello(char name[])
{
    printf("Hello %s!\n", name);
}

void add(int a, int b)
{
    printf("%d + %d = %d\n", a, b, a+b);
}

float bagi(int a, int b)
{
    float hasil = (float)a / (float)b;
    return hasil;
}

void main()
{
    //memanggil fungsi say_hello
    printf("Panggil Fungsi say_hello\n");
    say_hello("Dian");
    say_hello("Petani");
    say_hello("Kode");

    //memangil fungsi add
    printf("\n\nPanggil Fungsi add\n");
    add(1, 4);
    add(8, 2);
    add(3, 2);

    //memanggil fungsi bagi
    printf("\n\nPanggil Fungsi bagi\n");
    printf("Hasil 5/2: %.2f\n", bagi(5, 2));
}
