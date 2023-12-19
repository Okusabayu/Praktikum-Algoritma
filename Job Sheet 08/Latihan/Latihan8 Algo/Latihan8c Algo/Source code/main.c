/* Create by Oksa Bayu Widrian
   23343080 Padang State University*/

#include <stdio.h>

int sum(int n);


void main()
{
    int number, result;
    int angka = 9;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number);

    printf("sum = %d", result);

    //memanggil fungsi
    kali_dua(&angka);

    //Mencetak isi variabel
    //Setelah fungsi dipanggil
    printf("\nisi variabel angka = %d\n", angka);
}

int sum (int num)
{
    if (num!=0)
        return num + sum(num-1); //fungsi sum() memanggil dirinya sendiri
    else
        return num;
}

void kali_dua(int *num)
{
    *num = *num * 2;
}
