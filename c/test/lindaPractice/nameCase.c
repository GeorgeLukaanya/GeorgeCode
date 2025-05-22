#include <stdio.h>
#include <ctype.h> // For toupper() and tolower() functions

#define MAX_LENGTH 100

int main() {
    char name[MAX_LENGTH];

    // Receive a name in lowercase and convert it to uppercase
    printf("Enter your name in lowercase: ");
    fgets(name, MAX_LENGTH, stdin);

    printf("Uppercase name: ");
    for (int i = 0; name[i] != '\0'; i++) {
        putchar(toupper(name[i]));
    }

    // Receive a name in uppercase and convert it to lowercase
    printf("\nEnter your name in uppercase: ");
    fgets(name, MAX_LENGTH, stdin);

    printf("Lowercase name: ");
    for (int i = 0; name[i] != '\0'; i++) {
        putchar(tolower(name[i]));
    }

    return 0;
}