#include<stdio.h>
//This program takes an integral number and determines whether it is even or odd
int main(){
    int a;
    printf("Enter a number: \n");
    scanf("%d", &a);
    if(a%2==0){
        printf("%d is an even number",a);
    }else{
        printf("%d is an odd number",a);
    }
    return 0;
}
