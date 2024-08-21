#include <stdio.h>

typedef enum {
    false,
    true
} boolean;

// Function to demonstrate boolean ADT
void checkCondition(boolean condition) {
    if (condition == true) {
        printf("Condition is true.\n");
    } else {
        printf("Condition is false.\n");
    }
}

int main() {
    boolean flag = true;
    checkCondition(flag); // Outputs: Condition is true.
    flag = false;
    checkCondition(flag); // Outputs: Condition is false.
    return 0;
}
