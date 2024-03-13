#include<stdio.h>
int factorialNew(int a);

int main(){
    int num;
    printf("Enter a number whose factorial is to be calculated: ");
    scanf("%d", &num);
    printf("%d",factorialNew(num));
}

int factorialNew(int a){
    int answer;

    if(a<=1){
        answer=1;
    }else{
        answer=a*factorialNew(a-1);
    }
    return answer;
    }

