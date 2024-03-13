#include<stdio.h>

// this program outputs the equation of the perpendicular bisector of the line segment between two points//

int main()
{
    double x1;
    double y1;
    double x2;
    double y2;
    double slope;
// this is the prompt for the first coordinate //

    printf("This program outputs the equation of the perpendicular bisector of a line segment.\n");

    printf("Enter the first x and y coordinates:");
    scanf("%lf %lf", &x1,&y1);


    printf("\nThe first point is (%0.1f,%0.1f)", x1, y1);


    // this is the prompt for the second coordinate //

    printf("\nEnter the second x coordinate:");
    scanf("%lf", &x2);

    printf("\nEnter the second y coordinate:");
    scanf("%lf", &y2);

    printf("\nThe second point is (%0.1f,%0.1f)", x2, y2);

    // this segment calculates the slope of the line //
    slope=((y2-y1)/(x2-x1));
    printf("%f", slope);

    return 0;

}
