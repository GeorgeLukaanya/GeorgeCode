#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function: places the pivot in its correct position
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Pivot element is the last element
    int i = low - 1;  // Index of the smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);  // Swap if the current element is smaller than the pivot
        }
    }

    // Place the pivot in its correct position
    swap(&arr[i + 1], &arr[high]);
    return i + 1;  // Return the partition index
}

// Quick Sort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array and get the partition index
        int pi = partition(arr, low, high);

        // Recursively apply quicksort to the left and right partitions
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 2, 7, 4, 1, 6, 3, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}
