#include<stdio.h>

//This program outputs the equation of the perpendicular bisector of the line segment between two points
int main()
{
    double x1, y1, x2, y2, x_mid, y_mid, s, m, b;
    /*
    (x1,y1) and (x2,y2) are the two points
    x_mid and y_mid are the mid point coordinates
    s is the slope of the the line between the two points
    m is the slope of the perpendicular bisector
    b is the y-intercept
     */
     printf("This program outputs the equation of the perpendicular bisector of the line segment between two points\n\n");
    //this segment prompts a user to the the first coordinates x1, y1
    printf("Enter the first x and y coordinates coordinate:\n");
    scanf("%lf,%lf", &x1, &y1);
    printf("The first point is:(%0.1f,%0.1f)\n", x1, y1);

    //this segment prompts a user to the the second coordinates x2, y2
    printf("\nEnter the second x and y coordinates coordinate:\n");
    scanf("%lf,%lf", &x2, &y2);
    printf("The second point is:(%0.1f,%0.1f)\n", x2, y2);

    //This segment calculates the slope of the line between the two points
    s=((y2-y1)/(x2-x1));
    printf("\nThe slope is: %0.1f\n", s);

    //This segments displays the midpoint of the line segment between the two points by averaging the two x coordinates and the two y coordinates
    x_mid=(x1+x2)/2;
    y_mid=(y1+y2)/2;
    printf("\nThe midpoint of the line segment is: (%0.1f,%0.1f)\n", x_mid, y_mid);

    //This segment displays the slope, m of the perpendicular bisector by taking the negative reciprocal of the slope off the line segment
    m=-(1/s);
    printf("\nThe slope of the perpendicular bisector is:%0.1f\n", m);

    //This segment computes the y-intercept of the perpendicular bisector
    b=y_mid-(m*x_mid);
    printf("\nThe y-intercept of the perpendicular bisector is:%0.1f\n", b);

    //output for original 2 points
    printf("\nThe original points are (%0.1f,%0.1f) and (%0.1f,%0.1f)\n", x1, y1, x2, y2);

    //output for the equation of the perpendicular bisector
    printf("\nThe equation for the perpendicular bisector is: y=%0.1fx + %0.1f\n", m, b);
    return 0;
}
