//
// Created by LTGW GEORGE on 11/8/2023.
//Deferncing causes the actual value to be printed out
#include<stdio.h>
int main() {
    int age = 30;
    int * pAge = &age;


    printf("Age's memory address: %d", *pAge);
    printf("\nAge's memory address: %d", *&*&age);
    return 0;
}
