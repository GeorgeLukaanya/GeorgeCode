#include<stdio.h>

int main()
{
//scanf() prompts a user to give input
    int age;
    double gpa;
    char grade;
    char name[20];

    printf("Enter your age:");
    scanf("%d", &age);
    printf("You are %d years old\n", age);

    printf("Enter your gpa:");
    scanf("%lf", &gpa);
    printf("Your gpa is %f\n", gpa);

    printf("Enter your name:");
    scanf("%s", name);
    printf("Your name is %c\n", name);

    printf("Enter your name:");
    fgets(name, 20, stdin);
    printf("Your name is %c", name);



    return 0;
}
