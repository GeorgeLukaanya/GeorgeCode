#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PARKS 5
#define MAX_TOURISTS 10

int main() {
    // Arrays to store information about tourists and game parks
    char touristNames[MAX_TOURISTS][50];
    char parkNames[MAX_PARKS][50] = {"Park1", "Park2", "Park3", "Park4", "Park5"};
    char destinations[MAX_TOURISTS][50];
    double charges[MAX_PARKS] = {50.0, 30.0, 40.0, 60.0, 45.0};  // Charges for each park
    double payments[MAX_TOURISTS];
    int numTourists[MAX_PARKS] = {0};
    double totalEarnings[MAX_PARKS] = {0.0};

    // Generate random test data (for simplicity, you can replace this with your own data)
    for (int i = 0; i < MAX_TOURISTS; ++i) {
        sprintf(touristNames[i], "Tourist%d", i + 1);
        strcpy(destinations[i], parkNames[rand() % MAX_PARKS]);
        payments[i] = charges[rand() % MAX_PARKS]; // Charges for the chosen park

        // Update the statistics for the chosen park
        for (int j = 0; j < MAX_PARKS; ++j) {
            if (strcmp(destinations[i], parkNames[j]) == 0) {
                numTourists[j]++;
                totalEarnings[j] += payments[i];
            }
        }
    }

    // Print the details
    printf("%-10s %-20s %-10s %-10s\n", "Tourist", "Destination", "Charge", "Payment");
    for (int i = 0; i < MAX_TOURISTS; ++i) {
        printf("%-10s %-20s %-10.2f %-10.2f\n", touristNames[i], destinations[i], charges[i], payments[i]);
    }

    // Find the park with the highest and lowest number of tourists
    int maxTouristsParkIndex = 0, minTouristsParkIndex = 0;
    for (int i = 1; i < MAX_PARKS; ++i) {
        if (numTourists[i] > numTourists[maxTouristsParkIndex]) {
            maxTouristsParkIndex = i;
        }
        if (numTourists[i] < numTourists[minTouristsParkIndex]) {
            minTouristsParkIndex = i;
        }
    }

    // Find the park with the highest and lowest earnings
    int maxEarningsParkIndex = 0, minEarningsParkIndex = 0;
    for (int i = 1; i < MAX_PARKS; ++i) {
        if (totalEarnings[i] > totalEarnings[maxEarningsParkIndex]) {
            maxEarningsParkIndex = i;
        }
        if (totalEarnings[i] < totalEarnings[minEarningsParkIndex]) {
            minEarningsParkIndex = i;
        }
    }

    // Print the results
    printf("\nPark with the highest number of tourists: %s\n", parkNames[maxTouristsParkIndex]);
    printf("Park with the lowest number of tourists: %s\n", parkNames[minTouristsParkIndex]);
    printf("Park with the highest earnings: %s\n", parkNames[maxEarningsParkIndex]);
    printf("Park with the lowest earnings: %s\n", parkNames[minEarningsParkIndex]);

    return 0;
}
