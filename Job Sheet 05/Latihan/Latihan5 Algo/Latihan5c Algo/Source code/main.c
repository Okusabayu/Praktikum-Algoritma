/* Create by Oksa Bayu Widrian
   23343080 Padang State University*/

#include <stdio.h>

void main()
{
    char grade;

    printf("Inputkan Grade: ");
    scanf("%c", &grade);

    switch (toupper(grade))
    {
        case 'A':
            printf("Luar Biasa!\n");
        break;
        case 'B':
        case 'C':
            printf("Bagus!\n");
            break;
        case 'D':
            printf("Anda Lulus\n");
            break;
        case 'E':
        case 'F':
            printf("Anda Remedi\n");
            break;
        default:
            printf("Grade Salah!\n");
    }
}
