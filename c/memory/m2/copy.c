#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{

    char *a;

    printf("a: ");
    scanf("%s ", a);

    char *b = malloc(strlen(a) + 1);

    for (int i = 0, n = strlen(a); i < n; i++)
    {
        b[i] = a[i];
    }
    // printf("b: ");
    // scanf("%c ", b);

    b[0] = toupper(b[0]);

    printf("a : %s\n", a);
    printf("b : %s\n", b);
}