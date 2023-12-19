/*Create by Oksa Bayu Widrian
 23343080 Padang State University*/
#include <stdio.h>
#include <math.h>

int main()
{
    float rupiah, dollar, k, f, R, c;
    const float phi = 3.14;
    float d = 12;
    float r, v, l;

    printf("Konversi Rupiah ke Dollar");
    printf("\nMasukkan nilai rupiah:Rp. " );
    scanf("%f", &rupiah);
    // Menampilkan hasil
    dollar = rupiah / 14250.0;
    printf("\nHasil konversi     : $%.2f\n", dollar);

    printf("\n------------------------------------------");
    printf("\nKonversi Suhu");
    printf("\n\nMasukkan Suhu Celcius: ");
    scanf("%f", &c);
    k = c + 273.15;
    f = (c * 1.8) + 32;
    R = c * 0.8;
    printf("\nSuhu celcius yang dimasukkan : %.1f", c);
    printf(" C");
    printf("\nSuhu dalam kelvin            : %.1f", k);
    printf(" K");
    printf("\nSuhu dalam fahrenheit        : %.1f", f);
    printf(" F");
    printf("\nSuhu dalam reamur            : %.1f", R);
    printf(" R");

    printf("\n\n----------------------------------------");
    printf("\nVolume dan Luas Permukaan Bola");
    printf("\nVolume dan Luas permukaan bola");
    printf(" jika diameternya adalah 12cm adalah: ");
    r = d / 2;
    v = (4.0 / 3) * phi * pow(r, 3);
    l = 4 * phi * pow(r, 2);

    printf("\nVolume bola adalah         : %.1f", v);
    printf("\nLuas permukaan bola adalah : %.1f\n\n", l);


    return 0;
}
