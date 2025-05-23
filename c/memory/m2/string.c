//
// Created by ltgwgeorge on 5/22/25.
//
#include <stdio.h>
#include <string.h>

int main()
{
    char s[4] = "HI!";
    // s stores the first byte
    //  \0 is the delimiter of the string
    printf("%s\n ", s);
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[4]);
}
