#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int stack_arr[MAX];
int first = -1;

void push(int data) {
    // Check for stack overflow
    if (first == MAX - 1) {
        printf("Stack overflow\n");
        exit(1);
    }

    first += 1;  // Increment the top of the stack

    // Shift elements to the right to make space at index 0
    for (int i = first; i > 0; i--) {
        stack_arr[i] = stack_arr[i - 1]; // Fixed the typo here
    }

    stack_arr[0] = data;  // Insert the new data at index 0
}

int pop() {
    // Check for stack underflow (empty stack)
    if (first == -1) {
        printf("Stack underflow\n");
        exit(1);
    }

    int value = stack_arr[0];  // Get the value to be popped

    // Shift elements to the left
    for (int i = 0; i < first; i++) {
        stack_arr[i] = stack_arr[i + 1];
    }

    first -= 1;  // Decrement the top of the stack
    return value;
}

void print() {
    // Check for stack underflow (empty stack)
    if (first == -1) {
        printf("Stack is empty\n");
        return;
    }

    // Print the elements in the stack
    for (int i = 0; i <= first; i++) {
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
}

int main() {
    int data;

    push(30);
    push(90);
    push(40);

    data = pop();  // Pop the top element (40)
    printf("Popped element: %d\n", data);

    print();  // Print the remaining stack

    return 0;
}
