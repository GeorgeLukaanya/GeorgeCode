#include<stdio.h>

int fibonacci(int n) {
    if(n <= 1) {
        return n;
    } else {
        // Recursive calls with n-1 and n-2
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int a, i;

    printf("Enter the number of terms: ");
    scanf("%d", &a);

    // Print Fibonacci series up to the given number of terms
    for(i = 0; i < a; i++) {
        printf("%d, ", fibonacci(i));
    }

    return 0;
}
