#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a String ADT
typedef struct {
    char* str;
    int length;
} String;

// Function to create a new String
String* createString(const char* input) {
    String* newString = (String*)malloc(sizeof(String));
    newString->length = strlen(input);
    newString->str = (char*)malloc((newString->length + 1) * sizeof(char));
    strcpy(newString->str, input);
    return newString;
}

// Function to concatenate two Strings
void concatenate(String* dest, const String* src) {
    dest->length += src->length;
    dest->str = (char*)realloc(dest->str, (dest->length + 1) * sizeof(char));
    strcat(dest->str, src->str);
}

// Function to free a String
void freeString(String* string) {
    free(string->str);
    free(string);
}

// Demonstrate the usage of the String ADT
int main() {
    String* str1 = createString("Hello, ");
    String* str2 = createString("World!");

    printf("Before concatenation: %s\n", str1->str);
    concatenate(str1, str2);
    printf("After concatenation: %s\n", str1->str);

    freeString(str1);
    freeString(str2);

    return 0;
}
