#include<stdio.h>

int main()
{
    //Function is a collection of code that performs a specific task
    printf("Top\n");
    sayHi("George",20);
    sayHi("John",17);
    sayHi("Tom",23);
    printf("\nBottom");
    return 0;
}

void sayHi(char name[], int age)
{
    printf("Hello %s, you are %d years old\n", name, age);
    printf("Hello %s, you are %d years old\n", name, age);
    printf("Hello %s, you are %d years old\n", name, age);
}
