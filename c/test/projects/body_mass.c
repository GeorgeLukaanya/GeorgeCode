//
// Created by LTGW GEORGE on 11/7/2023.
//
#include<stdio.h>
#include<stdlib.h>
int main(){
    double BMI, ht_in, wt_lb;
    printf("Enter the height: ");
    scanf("%lf", &ht_in);
    printf("\nThe height is %.2f \n ", ht_in);
    printf("Enter the weight: ");
    scanf("%lf", &wt_lb);
    printf("\nThe weight is %.2f \n", wt_lb);
    BMI=(703*wt_lb)/(ht_in*ht_in);
    printf("The BMI is %f", BMI);
    if(BMI<18.5){
        printf("You are Underwight.");
    }else if(BMI>=18.5 && BMI<=24.9){
        printf("\nYou are Normal.");
    }else if(BMI>=25.0 && BMI<=29.9){
        printf("You are Overweight.");
    }else if(BMI>=30){
        printf("You are Obese.");
    }else if(BMI<=0){
        printf("This is an invalid BMI");
    }
}
//
// Created by LTGW GEORGE on 11/16/2023.
//
