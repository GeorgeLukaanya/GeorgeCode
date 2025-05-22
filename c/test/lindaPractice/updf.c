#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    double x;       // Speed of the plane (in m/s)
    double v;       // Speed of the bullet (in m/s)
    double theta;   // Angle to fire the bullet (in radians)

    // Input: Speed of the plane and bullet
    printf("Enter the speed of the plane (x in m/s): ");
    scanf("%lf", &x);
    printf("Enter the speed of the bullet (v in m/s): ");
    scanf("%lf", &v);

    // Calculate the angle
    theta = acos(x / v);

    // Convert angle to degrees
    theta = theta * (180.0 / M_PI);

    // Output the result
    printf("The angle to fire the bullet is: %.2f degrees\n", theta);

    return 0;
}