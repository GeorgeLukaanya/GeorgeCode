
#include <stdio.h>

//this is a program that requests a user to choose between two options
char printDetails(char name[]);

int main(){
    int choice;
    int size = 100;
    char name[size];
    int age;
    char gender[100];
    int i;

    printf("this is the menu:\n");
    printf("1: enter your details\n");
    printf("2: exit the program\n");
    scanf("%d", &choice);

    if (choice == 1){
        printf("enter your name\n");
        scanf("%s", &name);
        printf("enter the age\n");
        scanf("%d", &age);
        printf("enter the gender\n");
        scanf("%s", &gender);
        printf("Your name is %s", name);
    } else{
        printf("Thankyou for joining.");
    }
    return 0;
}

char printDetails(char name[]){
    int i;
    int size;
    for(i = 0; i < size; i++){
        printf("%c", name[i]);
    }
}
