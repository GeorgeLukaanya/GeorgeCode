#include<stdio.h>

int main(){
    double sales, commission;
    printf("Enter the sales amount : ");
    scanf("%lf", &sales);

    if(sales<=2000){
        commission=sales*0.02;
        printf("The commission is >> %.2f", commission);
    }else if(sales>2000 && sales<=4000){
        commission=sales*0.04;
        printf("The commission is >> %.2f", commission);
    }else if(sales>4000 && sales<=6000){
        commission=sales*0.07;
        printf("The commission is >> %.2f", commission);
    }else{
        commission=sales*0.10;
        printf("The commission is >> %.2f", commission);
    }
   return 0;
}