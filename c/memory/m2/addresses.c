#include <stdio.h>

int main()
{
    int a = 5;
    int *b = &a;

    printf("%i\n", a);
    // print the address
    printf("%p\n", b);
    //Dereferencing: accessing value in a memory location using "*" symbol
    printf("%i\n", *b);
}