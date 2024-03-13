#include<stdio.h>
int main(){
int count_emp=0;
int hours;
double rate,pay;
while(count_emp<7){
    printf("Hours> ");
    scanf("%d", &hours);
    printf("Rate> ");
    scanf("%lf", &rate);
    pay = hours * rate;
    printf("Pay is $%6.2f\n", pay);
    count_emp = count_emp + 1;
}
printf("\nAll Employees have been processed. ");
}
