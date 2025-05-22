#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    double distance = 3.0; // Distance from the building (in meters)
    double x;              // Observer's height (in meters)
    double theta;          // Angle of elevation (in radians)
    double h;              // Height of the building (in meters)

    // Input: Observer's height and angle of elevation
    printf("Enter your height (x in meters): ");
    scanf("%lf", &x);
    printf("Enter the angle of elevation (theta in degrees): ");
    scanf("%lf", &theta);

    // Convert angle to radians
    theta = theta * (M_PI / 180.0);

    // Calculate the height of the building
    h = x + distance * tan(theta);

    // Output the result
    printf("The height of the building is: %.2f meters\n", h);

    return 0;
}