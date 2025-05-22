#include <stdio.h>
#include <ctype.h>  // For toupper() and tolower()

void toUpperCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

void toLowerCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char name[100];

    // Convert lowercase to uppercase
    printf("Enter a name in lowercase: ");
    scanf("%s", name);
    toUpperCase(name);
    printf("Uppercase: %s\n", name);

    // Convert uppercase to lowercase
    printf("Enter a name in uppercase: ");
    scanf("%s", name);
    toLowerCase(name);
    printf("Lowercase: %s\n", name);

    return 0;
}
