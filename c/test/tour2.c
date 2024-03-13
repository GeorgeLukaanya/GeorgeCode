#include <stdio.h>
#include <string.h>

#define MAX_GAME_PARKS 5
#define MAX_TOURISTS 5

int main() {
    // Arrays to store information about tourists and game parks
    char touristNames[MAX_TOURISTS][50] = {"SSENYIMBA CYPRIAN", "ARINDA PROSPER AUSTINE", "AMONGIN TRACY MERCY", "ANKWATSA VICTOR", "ABBO BRENDA"};
    char GameparkNames[MAX_GAME_PARKS][50] = {"Murchison Falls", "Kidepo Valley", "Queen Elizabeth", "Semuliki Valley", "Rwenzori National Park"};
    char destinations[MAX_TOURISTS][50];
    double charges[MAX_GAME_PARKS] = {180.0, 100.0, 240.0, 180.0, 145.0};  // Charges for each game park
    double payments[MAX_TOURISTS];
    int numTourists[MAX_GAME_PARKS] = {0};
    double totalEarnings[MAX_GAME_PARKS] = {0.0};

    // Assign specified data to tourists and destinations
    for (int i = 0; i < MAX_TOURISTS; ++i) {
        strcpy(destinations[i], GameparkNames[i]);
        payments[i] = charges[i];

        // Update statistics for the chosen game park
        for (int j = 0; j < MAX_GAME_PARKS; ++j) {
            if (strcmp(destinations[i], GameparkNames[j]) == 0) {
                numTourists[j]++;
                totalEarnings[j] += payments[i];
            }
        }
    }

    // Print the details
    printf("%-25s %-25s %-10s %-10s\n", "Tourist", "Destination", "Charge", "Payment");
    for (int i = 0; i < MAX_TOURISTS; ++i) {
        printf("%-25s %-25s %-10.2f %-10.2f\n", touristNames[i], destinations[i], charges[i], payments[i]);
    }

    // Print the total earnings for each game park
    printf("\nTotal Earnings for Each Game Park:\n");
    for (int i = 0; i < MAX_GAME_PARKS; ++i) {
        printf("%-25s: %.2f\n", GameparkNames[i], totalEarnings[i]);
    }

    // Find the game park with the highest and lowest number of tourists
    int maxTouristsGameParkIndex = 0, minTouristsGameParkIndex = 0;
    for (int i = 1; i < MAX_GAME_PARKS; ++i) {
        if (numTourists[i] > numTourists[maxTouristsGameParkIndex]) {
            maxTouristsGameParkIndex = i;
        }
        if (numTourists[i] < numTourists[minTouristsGameParkIndex]) {
            minTouristsGameParkIndex = i;
        }
    }

    // Find the game park with the highest and lowest earnings
    int maxEarningsGameParkIndex = 0, minEarningsGameParkIndex = 0;
    for (int i = 1; i < MAX_GAME_PARKS; ++i) {
        if (totalEarnings[i] > totalEarnings[maxEarningsGameParkIndex]) {
            maxEarningsGameParkIndex = i;
        }
        if (totalEarnings[i] < totalEarnings[minEarningsGameParkIndex]) {
            minEarningsGameParkIndex = i;
        }
    }

    // Print the results
    printf("\nGame Park with the highest number of tourists: %s\n", GameparkNames[maxTouristsGameParkIndex]);
    printf("Game Park with the lowest number of tourists: %s\n", GameparkNames[minTouristsGameParkIndex]);
    printf("Game Park with the highest earnings: %s (Total Earnings: %.2f)\n", GameparkNames[maxEarningsGameParkIndex], totalEarnings[maxEarningsGameParkIndex]);
    printf("Game Park with the lowest earnings: %s (Total Earnings: %.2f)\n", GameparkNames[minEarningsGameParkIndex], totalEarnings[minEarningsGameParkIndex]);

    return 0;
}
