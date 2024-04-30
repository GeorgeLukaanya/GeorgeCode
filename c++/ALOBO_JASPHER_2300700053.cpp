//ALOBO JASPHER
//2300700053
//23/U/053
//This program checks for an even or a prime number.
#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number is even
bool isEven(int num) {
    return num % 2 == 0;
}

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isEven(num))
        cout << num << " is even." << endl;
    else
        cout << num << " is not even." << endl;

    if (isPrime(num))
        cout << num << " is prime." << endl;
    else
        cout << num << " is not prime." << endl;

    return 0;
}
