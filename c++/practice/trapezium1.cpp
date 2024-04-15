//Program to calculate the area of a trapezium given base, a = 3cm, base, b = 5cm and height, h = 4cm without using a function.
#include<iostream>
using namespace std;

int main() {
    //Defining the values of side a, side b and height h
    double a = 3;
    double b = 5;
    double h = 4;

    //Introducing a new variable of Area, A to calculate the area of the trapezium
    double A = 0.5 * (a + b) * h;

    //Output of the area
    cout <<"The area of the trapezium is: " << A << "square centimetres." << endl;

    return 0;
}