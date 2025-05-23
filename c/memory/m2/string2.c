#include <stdio.h>

int main()
{
    char *s = "HI!";
    printf("%s\n", s);
    printf("%s\n", s + 1);
    printf("%s\n", s + 2);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[4]);

    for (int i = 0; i < 3; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {

        printf("%c", *(s + i));
    }
    printf("\n");
}

/*
    typedef char * string;
*/