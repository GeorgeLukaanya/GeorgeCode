#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);

    while(n!=0){
        printf("Enter a number: \n");
        scanf("%d", &n);
        if(n<0)
            break;
    }
}
