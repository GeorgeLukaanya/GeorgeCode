#include<stdio.h>

int main(void){
    char *s = "Hi";
    printf("%s", s);

    char *words[2];
    words[0] = "Hi";
    words[1] = "Bye";
    printf("%s %s", words[0], words[1]);
}