/* Create by Oksa Bayu Widrian
   23343080 Padang State University */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_password(char *password) {
    char correct_password[] = "123456";
    return strcmp(password, correct_password) == 0;
}

void login_page() {
    char username[50];
    char password[50];
    printf("Masukkan nama pengguna: ");
    scanf("%s", username);
    fflush(stdin);
    printf("Masukkan kata sandi: ");
    scanf("%s", password);
    if (check_password(password)) {
        printf("Berhasil login\n");
    } else {
        printf("Kata sandi salah\n");
    }
}

int main() {
    login_page();
    return 0;
}
