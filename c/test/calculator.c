#include<stdio.h>
int main(){
    double num1;
    double num2;
    char op;
    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter opertaor: ");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%lf", &num2);
    if(op == '+'){
        printf("%.2f", num1+num2);
    }else if(op == '-'){
        printf("%.2f", num1-num2);
    }else if(op == '/'){
        printf("%.2f", num1/num2);
    }else if(op == '*'){
        printf("%.2f", num1*num2);
    }else if(op == '%'){
        printf("%.2f", num1%num2);
    }else if(op == '^'){
    printf("%.2f", pow(num1,num2));
    }else{
    printf("Invalid operator.");
    }
return 0;
}
