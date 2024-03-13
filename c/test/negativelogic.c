#include<stdio.h>
int main(){
     int age, charge;
     printf("Enter the charge : ");
     scanf("%d", &age);
    if(age>=16){
        if(age>=65){
            charge=5;
            printf("The charge is %d", charge);
        }else{
            charge=10;
            printf("The charge is %d", charge);
        }
    }else{
        charge=7;
        printf("The charge is %d", charge);
        }
    return 0;
}
/*#include<stdio.h>
int main(){
    double sales, commission;
     printf("Enter the sales amount : ");
     scanf("%lf", &sales);

     if(sales>2000){
        if(sales>4000){
            if(sales>6000){
                commission=0.1*sales;
                printf("The commission is >> %.2f", commission);
            }else{
                commission=0.07*sales;
                printf("The commission is >> %.2f", commission);
            }
        }else{
            commission=0.04*sales;
            printf("The commission is >> %.2f", commission);
        }
     }else{
        commission=0.02*sales;
        printf("The commission is >> %.2f", commission);
     }
}*/