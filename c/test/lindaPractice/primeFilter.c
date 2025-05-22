#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define SIZE 1000

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to compute the variance of an array of numbers
double computeVariance(int arr[], int n) {
    double mean = 0.0, variance = 0.0;

    // Calculate the mean
    for (int i = 0; i < n; i++) {
        mean += arr[i];
    }
    mean /= n;

    // Calculate the variance
    for (int i = 0; i < n; i++) {
        variance += (arr[i] - mean) * (arr[i] - mean);
    }
    variance /= n;

    return variance;
}

int main() {
    int numbers[SIZE];
    int primeNumbers[SIZE];
    int primeCount = 0;

    // Initialize the array with 1000 numbers
    for (int i = 0; i < SIZE; i++) {
        numbers[i] = i + 1;
    }

    // Filter out prime numbers
    for (int i = 0; i < SIZE; i++) {
        if (isPrime(numbers[i])) {
            primeNumbers[primeCount++] = numbers[i];
        }
    }

    // Compute the variance of the prime numbers
    double variance = computeVariance(primeNumbers, primeCount);

    // Print the prime numbers and their variance
    printf("Prime numbers found:\n");
    for (int i = 0; i < primeCount; i++) {
        printf("%d ", primeNumbers[i]);
    }
    printf("\n\nVariance of the prime numbers: %.2f\n", variance);

    return 0;
}