#include<stdio.h>

void insertInto(int array[], int *size, int capacity, int key, int position);

int main(void) {
    const int capacity = 5;
    int arr[capacity];  // Declare array without initialization

    // Initialize array manually
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 5;

    int n = 4;  // number of initialized elements
    int key = 4;
    int position = 3;

    // Print the array before insertion
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Call the function to insert the element
    insertInto(arr, &n, capacity, key, position);

    // Print the array after insertion
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void insertInto(int array[], int *size, int capacity, int key, int position) {
    if (*size == capacity) {
        printf("Array is full!\n");
        return;
    }

    // Shift elements to the right to make space for the new element
    for (int i = *size - 1; i >= position; i--) {
        array[i + 1] = array[i];
    }

    // Insert the key at the specified position
    array[position] = key;

    // Increment the size of the array
    (*size)++;
}
