#include <stdio.h>

#define MAX_SIZE 10

// Define the Stack structure
typedef struct {
    int arr[MAX_SIZE];
    int top;
} Stack;

// Function to initialize the stack
void initialize(Stack *stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(Stack *stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
int isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Error: Stack overflow\n");
        return;
    }
    stack->arr[++stack->top] = value;
}

// Function to pop an element from the stack
int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Error: Stack underflow\n");
        return -1; // indicating an error condition
    }
    return stack->arr[stack->top--];
}

// Function to get the top element of the stack without removing it
int peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Error: Stack is empty\n");
        return -1; // indicating an error condition
    }
    return stack->arr[stack->top];
}

// Function to display the elements of the stack
void display(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements: ");
    for (int i = 0; i <= stack->top; ++i) {
        printf("%d ", stack->arr[i]);
    }
    printf("\n");
}

int main() {
    Stack myStack;
    initialize(&myStack);

    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);

    display(&myStack);

    printf("Top element: %d\n", peek(&myStack));

    printf("Popped element: %d\n", pop(&myStack));

    display(&myStack);

    return 0;
}
