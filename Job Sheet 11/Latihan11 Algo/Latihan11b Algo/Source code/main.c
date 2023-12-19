/* Create by Oksa Bayu Widrian
    23343080 Padang State University*/

#include <stdio.h>

void main()
{
    char buff[255];
    char text[255];
    FILE *fptr;

    //membuka file
    fptr = fopen("puisi.txt","w");

    //mengambil input dari user
    printf("Inputkan isi file: ");
    fgets(text, sizeof(text), stdin);

    //menulis dari text ke file
    fputs(text, fptr);

    printf("File berhasil ditulis\n\n");

    //tutup file
    fclose(fptr);

    //buka kembali file untuk dibaca
    fptr = fopen("puisi.txt","r");

    //baca isi file dengan gets lalu simpan ke buff
    while(fgets(buff, sizeof(buff), fptr))
    {
        printf("Isi filenya sekarang: %s", buff);
    }

    //tutup file
    fclose(fptr);
}
