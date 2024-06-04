//Linear search for numbers
#include<stdio.h>

int main(void){
    int numbers[] = {4, 6, 8, 2, 7, 5, 0};
    int num = sizeof(numbers)/sizeof(numbers[0]);

    for(int i = 0; i < num; i++){
        if(numbers[i] == 0){
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}