#include <stdio.h>
#include <stdlib.h>
/* Create by Oksa Bayu
    23343080 Padang Negeri University */

void main()
{
    int a,b;

    //pengisian nilai dengan operator =
    a=5;
    b= 10;

    // pengisian sekaligus penambahan
    b +=a; //ini sama seperti b = b + a
    printf("Hasil b += a adalah %d\n", b);

    // pengisian sekaligus pengurangan
    b -=a; //ini sama seperti b = b - a
    printf("Hasil b -= a adalah %d\n", b);

    // pengisian sekaligus pengalian
    b *=a; //ini sama seperti b = b * a
    printf("Hasil b *= a adalah %d\n", b);

    // pengisian sekaligus pembagian
    b /=a; //ini sama seperti b = b / a
    printf("Hasil b /= a adalah %d\n", b);

    // pengisian sekaligus sisa bagi
    b %=a; //ini sama seperti b = b % a
    printf("Hasil b %= a adalah %d\n", b);

}
