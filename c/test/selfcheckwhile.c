#include<stdio.h>
int main(){
    int count, next_num, sum;
    count=0;
    sum=0;
    while(count<5){
        printf("Next number> ");
        scanf("%d", &next_num);
        sum+=next_num;
        count+=1;
    }
    printf("%d numbers were added; \n", count);
    printf("Their sum is %d", sum);
}
