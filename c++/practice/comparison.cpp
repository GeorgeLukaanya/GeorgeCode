#include <iostream>

using namespace std;

int main() {
    int numbers[5];  // Array to store 5 numbers
    int largest;     // Variable to store the largest number

    // Ask the user to enter 5 numbers
    cout << "Enter 5 numbers:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i];  // Read the number into the array
    }

    // Initialize 'largest' with the first number
    largest = numbers[0];

    // Compare and find the largest using 'if' statements
    if (numbers[1] > largest) {
        largest = numbers[1];
    }

    if (numbers[2] > largest) {
        largest = numbers[2];
    }

    if (numbers[3] > largest) {
        largest = numbers[3];
    }

    if (numbers[4] > largest) {
        largest = numbers[4];
    }

    // Output the largest number
    cout << "The largest number is: " << largest << endl;

    return 0;
}
