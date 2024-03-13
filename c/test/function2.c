#include<stdio.h>
// whenever you intend to return a value put it above the function that calls it

double cube(double num)
{
    double result=num*num*num;
    printf("\nThere is a place where mercy reigns\n");
    return result;
}

int main()
{
    double num;
    printf("Enter a number to be cubed: \n");
    scanf("%lf", &num);
    printf("Answer: %0.1f", cube(num));
    return 0;
}
