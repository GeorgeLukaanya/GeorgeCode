#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int sum;

    printf("Enter the first value:");
    scanf("%d",&a);
    printf("The first value has been entered.\n");

    printf("Enter the second value:");
    scanf("%d",&b);
    printf("The second value has been entered.\n");

    printf("Enter the third value:");
    scanf("%d",&c);
    printf("The third value has been entered.\n");

    sum=a+b+c;

    printf("The sum of the values is:%d",sum);

    return 0;
}
