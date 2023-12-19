/* Create by Oksa Bayu
    23343080 Padang Negeri University */
#include <stdio.h>

void main()
{
    int a = 6;
    int b = 3;

    printf("a = 6 \nb = 3\n");

    //Bitwise AND(&)
    printf("a & b  = %d\n", a & b);

    //Bitwise OR(|)
    printf("a | b  = %d\n", a | b);

    //Bitwise XOR(^)
    printf("a & b  = %d\n", a ^ b);

    //Bitwise NOT(~)
    printf("~a     = %d\n", ~a);

    //Bitwise Left Shift(<<)
    printf("a << 1 = %d\n", a << b);

    //Bitwise Right Shift(>>)
    printf("a >> 1 = %d\n\n", a >> b);

    // Increment a
    a++;
    printf("a++ = %d\n", a);

    // Increment a
    ++a;
    printf("++a = %d\n", a);

    // decrement a
    a--;
    printf("a-- = %d\n", a);

    // decrement a
    --a;
    printf("--a = %d\n", a);

    return 0;
}
