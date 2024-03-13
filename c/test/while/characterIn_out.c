//
// Created by LTGW GEORGE on 11/11/2023.
//
#include<stdio.h>
#include<conio.h>
int main(){
    int c;
     c=getchar();
     //EOF:end of file
     while(c!=EOF){
         putchar(c);
         c=getchar();
     }
}