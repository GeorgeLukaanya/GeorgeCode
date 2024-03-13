#include<stdio.h>
//This program accepts two numbers a and b and checks whwthwe or not a is divisible by b.
int main(){
    int a,b;
    printf("\nThis program takes two numbers and checks whether or not the first number is divisible by second number.\n");
    printf("\nEnter two integer numbers in the form: a,b:\n");
    scanf("%d,%d", &a, &b);
    printf("\nThe two numbers are %d and %d\n", a, b);
    if(a%b==0){
        printf("\nThe first number is divisble by the second number\n");
    }else{
        printf("\nThe first number is not divisible by the second one.\n");
    }
    return 0;
}