r#include <stdio.h>



int min(int arr[], int low, int high)

{

    int length = high - low;

    if (length == 0)

        return arr[low];



    if (length == 1)

        return arr[low] < arr[high] ? arr[low] : arr[high];



    int mid = (low + high) / 2;

    int leftMin = min(arr, low, mid);

    int rightMin = min(arr, mid + 1, high);



    return leftMin > rightMin ? rightMin : leftMin;

}



int max(int arr[], int low, int high)

{

    int length = high - low;

    if (length == 0)

        return arr[low];



    if (length == 1)

        return arr[low] > arr[high] ? arr[low] : arr[high];



    int mid = (low + high) / 2;

    int leftMax = max(arr, low, mid);

    int rightMax = max(arr, mid + 1, high);



    return leftMax < rightMax ? rightMax : leftMax;

}



void main()

{

    int n = 0;

    printf("Enter no of element in array: ");

    scanf("%d", &n);

    int array[n];

    int i = 0;

    printf("Enter elements of array : \n");

    for (i = 0; i < n; i++)

        scanf("%d", &array[i]);

    int mininmum = min(array, 0, n);



    int maximum = max(array, 0, n - 1);

    printf("Them minimum element in array is: %d\n", mininmum);



    printf("Them maximum element in array is: %d", maximum);

}