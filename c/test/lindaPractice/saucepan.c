#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    int N;          // Number of students
    double M;       // Height factor of the saucepan
    double V;       // Total volume of liquid
    double h;       // Height of the saucepan
    double r_squared; // r^2 (radius squared)

    // Constants
    double pi = 3.14159;

    // Input: Number of students and height factor
    printf("Enter the number of students (N): ");
    scanf("%d", &N);
    printf("Enter the height factor (M): ");
    scanf("%lf", &M);

    // Calculate total volume and height
    V = N * 0.5;          // Total volume in litres
    h = M * 0.5;          // Height of the saucepan

    // Calculate r^2
    r_squared = V / (pi * h);

    // Output the result
    printf("The square of the radius (r^2) is: %.2f\n", r_squared);

    return 0;
}