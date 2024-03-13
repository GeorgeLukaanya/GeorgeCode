#include<stdio.h>
// This function compares two numbers to determine the greater from the lesser
/*
This function compares two numbers to determine the greater from the lesser
*/
int max(int num1, int num2);
int main(){
  int num1, num2;
    printf("Enter two numbers to compare in the form: num1, num2\n");
    scanf("%d, %d", &num1, &num2);
    printf("%d", max(num1, num2));
   return 0;
}
int max(int num1, int num2){
    int result;
    if(num1 > num2){
       result=num1;
    }else if(num2>num1){
       result=num2;
    }else{
       printf("The numbers are equal!");
    }
    return result;
}
