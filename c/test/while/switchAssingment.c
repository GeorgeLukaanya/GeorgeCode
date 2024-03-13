//
// Created by LTGW GEORGE on 11/10/2023.
//The program allows a user to enter the standard wattage of the bulb and displays the brightness of the chosen bulb in lumens.
#include<stdio.h>
int main(){
    int lumens;
    printf("The program allows a user to enter the standard wattage of \nthe bulb and displays the brightness of the chosen bulb in Lumens.\nThe standard wattages are 15, 25, 40, 60, 75 and 100.");

    printf("\nEnter the wattage of the bulb >>");
    scanf("%d", &lumens);

    switch (lumens) {
        case 15:
            printf("The brightness of the bulb is 125 Lumens.");
            break;
        case 25:
            printf("The brightness of the bulb is 215 Lumens.");
            break;
        case 40:
            printf("The brightness of the bulb is 500 Lumens.");
            break;
        case 60:
            printf("The brightness of the bulb is 880 Lumens.");
            break;
        case 75:
            printf("The brightness of the bulb is 1000 Lumens.");
            break;
        case 100:
            printf("The brightness of the bulb is 1675 Lumens.");
            break;
            break;
        default:
            printf("The brightness of the bulb is -1 Lumens.");
    }
}