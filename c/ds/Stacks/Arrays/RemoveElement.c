#include <stdio.h>

#define MAX 5

int arr[MAX] = {10, 20, 30, 40, 50};  // Initial array
int size = 5;  // Current size of the array

void removeElement(int index) {
    // Check if the index is within bounds
    if (index < 0 || index >= size) {
        printf("Invalid index\n");
        return;
    }

    // Shift elements to the left to fill the gap
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Reduce the size of the array
    size--;
}

void printArray() {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    printf("Original array:\n");
    printArray();

    // Remove the element at index 2 (30)
    removeElement(2);

    printf("Array after removal:\n");
    printArray();

    return 0;
}
