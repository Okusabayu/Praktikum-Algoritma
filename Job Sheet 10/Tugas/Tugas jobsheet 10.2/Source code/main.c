/* Create by Oksa Bayu Widrian
   23343080 Padang State University */
#include <stdio.h>

// Struct untuk menyimpan informasi zodiak
struct Zodiak
{
    char nama[20];
    int bulan1;
    int tanggal1;
    int bulan2;
    int tanggal2;
};

// Fungsi untuk menentukan zodiak berdasarkan tanggal lahir
const char* zodiaknya(int tanggal, int bulan, struct Zodiak zodiak1[], int numzodiak1)
{
    for (int i = 0; i < numzodiak1; ++i)
    {
        int bulan1 = zodiak1[i].bulan1;
        int tanggal1 = zodiak1[i].tanggal1;
        int bulan2 = zodiak1[i].bulan2;
        int tanggal2 = zodiak1[i].tanggal2;

        if (
            (bulan == bulan1 && tanggal >= tanggal1) ||
            (bulan > bulan1 && bulan < bulan2) ||
            (bulan == bulan2 && tanggal <= tanggal2)
        )
        {
            return zodiak1[i].nama;
        }
    }
    return "Tidak diketahui";
}

int main()
{
    const int numzodiak1 = 12;

    // Array of struct untuk menyimpan informasi zodiak
    struct Zodiak zodiak1[12] =
    {
        {"Aries", 3, 21, 4, 19},
        {"Taurus", 4, 20, 5, 20},
        {"Gemini", 5, 21, 6, 20},
        {"Cancer", 6, 21, 7, 22},
        {"Leo", 7, 23, 8, 22},
        {"Virgo", 8, 23, 9, 22},
        {"Libra", 9, 23, 10, 22},
        {"Scorpio", 10, 23, 11, 21},
        {"Sagittarius", 11, 22, 12, 21},
        {"Capricorn", 12, 22, 1, 19},
        {"Aquarius", 1, 20, 2, 18},
        {"Pisces", 2, 19, 3, 20}
    };

    int tanggal, bulan, tahun;

    printf("Masukkan tanggal lahir (tanggal-bulan-tahun)");
    printf("\nContoh (04-10-2004) : ");
    scanf("%d-%d-%d", &tanggal, &bulan, &tahun);

    const char* zodiak1hasil = zodiaknya(tanggal, bulan, zodiak1, numzodiak1);


    printf("Tanggal lahir anda (tgl-bln-tahun) : %d-%d-%d", tanggal, bulan, tahun);
    printf("\nZodiak Anda adalah: %s\n", zodiak1hasil);

    return 0;
}
