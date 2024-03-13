//
// Created by LTGW GEORGE on 11/11/2023.
//
#include<stdio.h>
int main(){
    /*print Fahrenheit-Celcius scale*/
    int fahr;

    for (fahr = 0;  fahr<=300 ; fahr+=20) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}
