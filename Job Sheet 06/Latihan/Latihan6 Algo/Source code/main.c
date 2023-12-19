/* Create by Oksa Bayu Widrian
   23343080 Padang State University*/
#include <stdio.h>

void main()
{
    char ulangi = 'y';
    int counter = 0;

    //perulangan while
    while(ulangi == 'y')
    {
        printf("Apakah kamu mau mengulangi?\n");
        printf("Jawab (y/t): ");
        scanf(" %c", &ulangi);

        //increment counter
        counter++;
    }
    printf("\n\n--------------\n");
    printf("Perulangan Selesai!\n");
    printf("Kamu mengulangi sebanyak %i kali.\n", counter);


    //Perulangan Bersarang(Nested Loop)
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("Perulangan ke (%d, %d)\n", i, j);
        }
    }
}
