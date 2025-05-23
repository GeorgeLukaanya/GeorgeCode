#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    char b[100];

    printf("a: ");
    scanf("%s", a); // No '&' needed; 'a' already is a pointer to the array

    printf("b: ");
    scanf("%s", b);

    if (strcmp(a, b) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    return 0;
}
