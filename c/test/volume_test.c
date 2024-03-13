#include<stdio.h>
int main()
{
    //program to calculate the volume of a cuboid
    float l, h, w, v;

    printf("Enter the length:\n");
    scanf("%lf",&l);

    printf("Enter the width:\n");
    scanf("%lf",&w);

    printf("Enter the height:\n");
    scanf("%lf",&h);

    v=l*w*h;

    printf("The volume of the cuboid is:%f", v);

    return 0;
}
