
#include <stdio.h>
#include <string.h>

// Function to classify customers based on deposits
void classifyCustomers(char names[][20], int deposits[], int n) {
    printf("Class\t\tNames\n");

    for (int i = 0; i < n; i++) {
        if (deposits[i] >= 0 && deposits[i] <= 15000) {
            printf("Low income\t%s\n", names[i]);
        } else if (deposits[i] <= 30000) {
            printf("Middle income\t%s\n", names[i]);
        } else if (deposits[i] <= 45000) {
            printf("High income\t%s\n", names[i]);
        }
    }
}

// Function to calculate and display statistics
void displayStatistics(int deposits[], int n) {
    int sum = 0;
    int max = deposits[0];
    int min = deposits[0];

    for (int i = 0; i < n; i++) {
        sum += deposits[i];

        if (deposits[i] > max) {
            max = deposits[i];
        }

        if (deposits[i] < min) {
            min = deposits[i];
        }
    }

    float mean = (float)sum / n;

    printf("\nStatistics:\n");
    printf("Maximum deposit: %d\n", max);
    printf("Minimum deposit: %d\n", min);
    printf("Mean deposit: %.2f\n", mean);
}

// Function to arrange deposits in ascending order
void sortDeposits(char names[][20], int deposits[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (deposits[j] > deposits[j + 1]) {
                // Swap deposits
                int tempDeposit = deposits[j];
                deposits[j] = deposits[j + 1];
                deposits[j + 1] = tempDeposit;

                // Swap names accordingly
                char tempName[20];
                strcpy(tempName, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], tempName);
            }
        }
    }

    printf("\nDeposits in ascending order:\n");
    printf("Names\t\tDeposits\n");

    for (int i = 0; i < n; i++) {
        printf("%s\t\t%d\n", names[i], deposits[i]);
    }
}

// Function to find and display clients with deposits > 15000 and odd
void findOddDeposits(char names[][20], int deposits[], int n) {
    printf("\nClients with deposits > 15000 and odd:\n");
    printf("Names\t\tDeposits\n");

    for (int i = 0; i < n; i++) {
        if (deposits[i] > 15000 && deposits[i] % 2 != 0) {
            printf("%s\t\t%d\n", names[i], deposits[i]);
        }
    }
}

int main() {
    char names[][20] = {"Edrine", "Ivan", "Leticia", "Kings", "Joshua", "Mosh"};
    int deposits[] = {5500, 17000, 35000, 42000, 26500, 29000};
    int n = sizeof(deposits) / sizeof(deposits[0]);

    classifyCustomers(names, deposits, n);
    displayStatistics(deposits, n);
    sortDeposits(names, deposits, n);
    findOddDeposits(names, deposits, n);

    return 0;
}
