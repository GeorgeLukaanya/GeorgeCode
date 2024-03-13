#include<stdio.h>
int main(){
    int x,count,product;
    printf("Enter an integer> ");
    scanf("%d", &x);
    product=x;
    count=0;
    while(count<4){
        product*=x;
        count+=1;
        printf("%d\n", product);
    }
}
