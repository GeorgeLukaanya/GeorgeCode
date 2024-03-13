//
// Created by LTGW GEORGE on 11/8/2023.
//pointer stores memory address
#include<stdio.h>
int main() {
    int age = 30;
    int * pAge = &age;
    double gpa=3.4;
    double * pGpa=&gpa;
    char grade='A';
    char *pGrade=&grade;


    printf("Age's memory address: %p", &age);
    return 0;
}