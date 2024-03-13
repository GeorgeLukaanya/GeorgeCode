#include<stdio.h>
int main(){
int a,b;
printf("Enter the first integer number:\n");
scanf("%d",&a);

printf("Enter the second integer number:\n");
scanf("%d",&b);

printf("The sum of %d and %d is:%d\n", a, b, a+b);
printf("The difference of %d and %d is:%d\n", a, b, a-b);
printf("The product of %d and %d is:%d\n", a, b, a*b);
printf("The division of %d and %d is:%f\n", a, b, a/b);
printf("The modulus of %d and %d is:%d\n", a, b, a%b);
printf("The sum of %d and %d is:%d\n", a, b, pow(a,b));

return 0;
}
