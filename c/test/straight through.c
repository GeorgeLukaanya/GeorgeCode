#include<stdio.h>
int main(){
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", x);
    printf("\nEnter the value of y: ");
    scanf("%d", y);
    if(x>100){
        x=0;
        printf("The charge is %d", x);
    }if(y<250){
        y=0;
        printf("The charge is %d", y);
    }
    return 0;
}