//To push an element into a Stack
#include <stdio.h>
#define MAX 4

int stack_arr[MAX];
int top = -1;

void push(int data);
int main(){
    push(1);
    push(2); 
    push(3);
    push(4);
    push(5);

    for(int i = 0; i <= top; i++){
        printf("%d\t", stack_arr[i]);
    }
}

void push(int data){
    //Cecking if there's stick memory
    if(top == MAX - 1){
        printf("\nStack Overflow\n");
        return;
    }

    //increase top by 1 so indexing can start
    top += 1;
    stack_arr[top] = data;

}