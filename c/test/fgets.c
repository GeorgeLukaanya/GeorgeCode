//
// Created by LTGW GEORGE on 11/18/2023.
//
#include<stdio.h>
#include<string.h>
int main(){
    char name[20];
    printf("Enter your name: \n");
    fgets(name, 20, stdin);
    printf("\nYour name is %s.", name);
    return 0;
}
