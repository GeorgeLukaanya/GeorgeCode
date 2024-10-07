#include<stdio.h>

void deleteElement(int array[], int *size, int position);
int main(void){
    int capacity = 4;
    int arr[capacity];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    int n = 3;
    int pos = 2; 

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    deleteElement(arr, &n, pos);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

}

void deleteElement(int array[], int*size, int position){
    if((position >= *size) || (position < 0)){
        printf("Invalid position");
    }else{
        for(int i = position; i <= (*size - 2); i++){
            array[i] = array[i+1];
        }
        *size-=1;
    }
}