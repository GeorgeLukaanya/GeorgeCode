#include <stdio.h>

void segregateOddEven(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left < right) {
        // Move left index to the right while arr[left] is odd
        while (arr[left] % 2 == 1 && left < right) {
            left++;
        }
        
        // Move right index to the left while arr[right] is even
        while (arr[right] % 2 == 0 && left < right) {
            right--;
        }

        // If left is still less than right, swap the values
        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}

int main() {
    int arr[] = {12, 34, 45, 9, 8, 90, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    segregateOddEven(arr, n);

    printf("Array after segregation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
