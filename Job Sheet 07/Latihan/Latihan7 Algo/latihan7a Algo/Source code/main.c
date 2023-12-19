/* Create by Oksa Bayu Widrian
   23343080 Padang State University*/

#include <stdlib.h>

void main()
{
    char huruf[5] = {'a','b','c','d','e'};

    printf("Huruf: %c\n", huruf[2]);

    //mengubah isi array
    huruf[2] = 'z';

    //mencetak isi array
    printf("Huruf: %c\n", huruf[2]);
}
