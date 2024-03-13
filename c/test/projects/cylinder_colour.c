//
// Created by LTGW GEORGE on 11/16/2023.
//
#include<stdio.h>
/*This program allows the user to enter the first letter of the colour
 of the gas cylinder and gives the contents*/
int main(){
    char colour;
    printf("This program allows a user to enter the first letter of \nthe colour of a gas cylinder and outputs the contents of the cylinder\n the colours are 'o' for orange, 'b' for brown, 'y' for yellow and 'g' for green.");
    printf("\nEnter the colour of the cylinder>> ");
    scanf(" %c", &colour);
    switch(colour){
        case 'O':
        case 'o':
            printf("\nThe cylinder contains AMMONIA.");
            break;

        case 'B':
        case 'b':
            printf("\nThe cylinder contains CARBON DIOXIDE.");
            break;

        case 'Y':
        case 'y':
            printf("\nThe cylinder contains HYDROGEN.");
            break;

        case 'G':
        case 'g':
            printf("\nThe cylinder contains OXYGEN.");
            break;

        default:
            printf("Contents unknown.");
    }
}
