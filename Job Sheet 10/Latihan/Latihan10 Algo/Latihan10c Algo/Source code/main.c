/* Create by Oksa bayu Widrian
   23343080 Padang State University */
#include <stdio.h>

//membuat struct
struct Mahasiswa
{
    char *name;
    char *address;
    int age;
};

void main()
{
    //menggunakan struct
    struct Mahasiswa mhs1, mhs2;

    //mengisis nilai ke struct
    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;

    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 23;

    //mencetak isi struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama   : %s\n", mhs1.name);
    printf("Alamat : %s\n", mhs1.address);
    printf("Umur   : %d\n\n", mhs1.age);

    printf("## Mahasiswa 2 ##\n");
    printf("Nama   : %s\n", mhs2.name);
    printf("Alamat : %s\n", mhs2.address);
    printf("Umur   : %d\n", mhs2.age);
    return 0;
}
