#include <stdio.h>
#include <string.h>

int main()
{
    char *a;
    char *b;

    printf("a: ");
    scanf("%c ", a);

    printf("b: ");
    scanf("%c ", b);

    if (strcmp(a, b) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    printf("%p\n", a);
    printf("%p\n", b);
    return 0;
}