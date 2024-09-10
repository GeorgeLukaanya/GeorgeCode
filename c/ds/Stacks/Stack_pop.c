#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack_arr[MAX];
int top = -1;
void push(int data);
int pop();

int main(){
    int data;
    push(1);
    push(2);
    push(3);
    push(4);

    //before pop
    for(int i = 0; i <= top; i++){
        printf("%d\t", stack_arr[i]);
    }

    data = pop();

    //after pop
    printf("%d", data);
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

int pop(){
    if(top == -1){
        printf("\nStack underflow\n");
        exit(1);//termination with failure
    }
    int value;
    value = stack_arr[top];
    top -= 1;
    return value;
}