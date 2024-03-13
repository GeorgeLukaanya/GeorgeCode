#include<stdio.h>
/*This program accepts two numbers, calculates their difference and displays given messages in case the differnece is either equal or not equal to the values entered.*/
int main(){
    int a, b, difference;
    printf("This program accepts two numbers, calculates their difference and displays given\n messages in case the differnece is either equal or not equal to the values entered.\n\n ");
    printf("\nEnter two numbers:\n");
    scanf("%d, %d", &a, &b);
    difference=a-b;
    printf("\nThe difference between %d and %d is %d\n", a, b, difference);
    if(difference==a){
        printf("\nDifference is equal to %d\n", a);
    }else if(difference==b){
        printf("\nDifference is equal to %d\n", b);
    }else{
        printf("\nDifference is not equal to any of the values entered.\n");
    }
return 0;
}