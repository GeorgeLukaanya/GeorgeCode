#include<stdio.h>
int main()
{
    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];

    printf("Enter a color:\n");
    scanf("%s", &color);
    printf("Enter a plural noun:\n");
    scanf("%s", &pluralNoun);
    printf("Enter a celebrity:\n");
    scanf("%s %s", &celebrityF, &celebrityL);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityF, celebrityL);

    return 0;
}
