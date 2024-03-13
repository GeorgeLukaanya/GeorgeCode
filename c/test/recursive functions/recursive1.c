//
// Created by LTGW GEORGE on 11/8/2023.
//
#include<stdio.h>

int fun1(int x, int y) {
    int result;
    if (x == 0) {
        return y;
    } else {
        return fun1(x-1, x+y);
    }
}
int main(){
   int  x, y;
   /*printf("Enter the first number number: ");
   scanf("%d", &n);
   printf("\nEnter the second number number: ");
   scanf("%d", &n);*/
   printf("The answer is >> %d", fun1(0,5)*fun1(5,0));
}
/*#include<stdio.h>

int fact(int n) {
    int result;
    if (n == 0) {
        result = 1;
    } else {
        result = n * fact(n - 1);
    }
    return result;
}
int main(){
   int  n;
   printf("Enter the number: ");
   scanf("%d", &n);
   printf("The factorial of %d is %d", n, fact(n));
}*/
