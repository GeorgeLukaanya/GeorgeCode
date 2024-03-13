#include<stdio.h>
//This program displays takes values for m and n as input and displays the values of the Pythagorean triple
int main()
{
    float m, n, side1, side2, hypotenuse;

    printf("This program displays takes values for m and n as input and displays the values of the Pythagorean triple\n\n");

    //This segment prompts a user to enter the greater value, m
    printf("\nEnter the value of the greater number, m:\n");
    scanf("%f", &m);
    printf("\nThe greater value,m is: %0.1f\n", m);

    //This segment prompts a user to enter the lesser value, n
    printf("\nEnter the value of the lesser number, n:\n");
    scanf("%f", &n);
    printf("\nThe greater value,n is: %0.1f\n", n);

    //this segment calculates and displays the value of side 1
    side1=pow(m,2)-pow(n,2);
    printf("\nThe value of side1 is:%0.1f\n", side1);

    //this segment calculates and displays the value of side 2
    side2=2*m*n;
    printf("\nThe value of side2 is:%0.1f\n", side2);

    //this segment calculates and displays the vlue of the hypotenuse
    hypotenuse=pow(m,2)+pow(n,2);
    printf("\nThe value of hypotenuse is:%0.1f\n", hypotenuse);

    return 0;
}
