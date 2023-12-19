/* Create by Oksa Bayu Widrian
   23343080 Padang State University */
#include <stdio.h>
#include <string.h>

void printPattern(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        for (int j = i; j < strlen(str); j++) {
            printf("%c", *(str + j));
        }
        printf("\n");
    }
}

int main() {
    char input[] = "BORLAND";

    // Menggunakan pointer untuk mencetak pola
    printPattern(input);

    return 0;
}

