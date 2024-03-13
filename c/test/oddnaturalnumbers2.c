#include<stdio.h>
int main(){
    int a, sum;
    a=1;
    sum=0;
    for(a=1;a<100;a++){
        if(!(a%2==0))
        sum+=a;
    }
    printf("%d", sum);
}

