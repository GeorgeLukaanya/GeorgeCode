#include<cs50.h>
#include<stdio.h>

void print_column(int height);

int main(void){
    int h;
    printf("Enter the height: ");
    scanf("%d", &h);
    print_column(h);
}

void print_column(int height){
    for(int i = 0; i <= height; i ++){
        printf("i is %d\n", i);
        printf("#\n");
    }
}