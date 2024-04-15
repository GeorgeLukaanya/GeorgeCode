//Program to calculate the area of a trapezium given base, a = 3cm, base, b = 5cm and height, h = 4cm using a function.
#include<iostream>

using namespace std;

//Function to calculate the Area, A of the trapezium
double calculateArea(double sideA, double sideB, double height){
    return 0.5 * (sideA + sideB) * height; 
}

int main() {
    //Declaring the values of the sides, a and b and height, h
    double a = 3;
    double b = 5;
    double h = 4;

    //Calling the function to calculate the area and store it in a variable of Area, A
    double A = calculateArea(a , b, h);

    //Outputing the area onto the screen.
    cout << "The area of the trapezium is :" << A << "square centimetres." << endl;
    return 0;
}