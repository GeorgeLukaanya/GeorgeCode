#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack_arr[MAX];
int first = -1;

void push(int data) {
    // Check for stack overflow
    if (first == MAX - 1) {
        printf("Stack overflow\n");
        exit(1);
    }

    // Shift elements to the right to make space at index 0
    for (int i = first; i >= 0; i--) {
        stack_arr[i + 1] = stack_arr[i];
    }

    // Insert the new data at index 0 and increment `first`
    stack_arr[0] = data;
    first++;
}

void print() {
    // Check for stack underflow (empty stack)
    if (first == -1) {
        printf("Stack underflow\n");
        exit(1);
    }

    // Print the elements in the stack
    for (int i = 0; i <= first; i++) {
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
}

int main() {
    push(30);
    push(90);
    push(40);
    print();

    return 0;
}
