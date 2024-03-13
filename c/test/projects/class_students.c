//
// Created by LTGW GEORGE on 11/14/2023.
//
#include<stdio.h>
//This program uses the logic of divisbility by 2,5 and 7 to display output
int main(){
    int n, i;
    n=120;
    for(i=1; i<=120; i++){
        //printf("%d ,", i);
       if(i%7==0) {
            printf("%d ,", i);
        }/*else if(i%5==0) {
            printf("\n\n%d , ", i);
        }else if(i%7==0){
            printf("%d ,", i);
        }else{
            printf("%d ,", i);
        }*/
    }
    return 0;
}