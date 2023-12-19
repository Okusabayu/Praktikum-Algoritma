/* Create by Oksa Bayu Widrian
   23343080 Padang State University */
#include <stdio.h>

int main() {
    // Pertanyaan A
    int Lesley = 57082;
    int Layla = Lesley;
    int Balmond = Layla + 1;

    // Jawaban A
    printf("Pertanyaan A:\n");
    printf("a) Nilai Layla: %d\n", Layla);
    printf("b) Nilai Balmond: %d\n\n", Balmond);

    // Pertanyaan B
    Lesley = 57082;
    int *pLayla = &Lesley;
    Balmond = *pLayla + 1;

    // Jawaban B
    printf("Pertanyaan B:\n");
    printf("a) Nilai Layla: %p\n", pLayla); // Menampilkan alamat Lesley karena Layla adalah pointer ke Lesley
    printf("b) Nilai Balmond: %d\n", Balmond);

    return 0;
}
