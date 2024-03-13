#include<stdio.h>
int main(){
    int n, ev=0;
    printf("Enter a number above 10: ");
    scanf("%d", &n);
    while(ev<n){
        printf("%3d", ev);
        ev=ev+2;
    }
    printf("\n");
}

