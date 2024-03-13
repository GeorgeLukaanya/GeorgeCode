#include<stdio.h>
int main(){
    //This program takes two numbers and tells whether the product of the two numbers is equal or greater than 1000
    int a,b,product;
    printf("This program takes two numbers and tells whether the product of the two numbers is equal or greater than 1000");
    printf("Enter two numbers: \n");
    scanf("%d, %d", &a, &b);
    printf("\nThe two numbers are %d and %d\n", a, b);
    product=a*b;
    printf("The product of %d and %d is %d\n",a, b, product);
    if(product>=1000){
        printf("\nThe product is greater than or equal to 1000\n");
    }else{
         printf("\nThe product is not greater than or equal to 1000");
    }
    return 0;
}