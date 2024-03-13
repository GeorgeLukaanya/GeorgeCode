//
// Created by LTGW GEORGE on 11/8/2023.
//
#include<stdio.h>
int main(){
    int a,b,n,i,result;
    printf("Enter the number of terms: ");
    scanf("%d",&n);

    a=0;
    b=1;

    for(i=1;i<=n;i++){
        printf("%d ",a);
        result=a+b;
        a=b;
        b=result;
    }
}
