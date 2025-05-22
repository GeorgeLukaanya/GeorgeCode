#include <stdio.h>
#include <stdbool.h>

#define MAX_PROCESSES 10
#define MAX_RESOURCES 10

// Function to print the Need matrix
void printNeedMatrix(int numProcesses, int numResources, int need[][MAX_RESOURCES]) {
    printf("\nNeed Matrix:\n");
    for (int i = 0; i < numProcesses; i++) {
        for (int j = 0; j < numResources; j++) {
            printf("%d ", need[i][j]);
        }
        printf("\n");
    }
}

// Function to check if the system is in a safe state
bool isSafeState(int available[], int max[][MAX_RESOURCES], int allocation[][MAX_RESOURCES], int need[][MAX_RESOURCES], int numProcesses, int numResources) {
    int work[MAX_RESOURCES];
    bool finish[MAX_PROCESSES] = {false};
    int safeSequence[MAX_PROCESSES];
    int count = 0;

    // Initialize work array as a copy of available resources
    for (int i = 0; i < numResources; i++) {
        work[i] = available[i];
    }

    while (count < numProcesses) {
        bool found = false;

        for (int p = 0; p < numProcesses; p++) {
            if (!finish[p]) {
                bool canAllocate = true;

                for (int r = 0; r < numResources; r++) {
                    if (need[p][r] > work[r]) {
                        canAllocate = false;
                        break;
                    }
                }

                if (canAllocate) {
                    for (int r = 0; r < numResources; r++) {
                        work[r] += allocation[p][r];
                    }
                    safeSequence[count++] = p;
                    finish[p] = true;
                    found = true;
                }
            }
        }

        if (!found) {
            printf("System is NOT in a safe state. Deadlock detected!\n");
            return false;
        }
    }

    printf("\nSystem is in a SAFE state.\nSafe sequence: ");
    for (int i = 0; i < numProcesses; i++) {
        printf("P%d ", safeSequence[i]);
    }
    printf("\n");
    return true;
}

int main() {
    int numProcesses, numResources;
    int available[MAX_RESOURCES];
    int max[MAX_PROCESSES][MAX_RESOURCES];
    int allocation[MAX_PROCESSES][MAX_RESOURCES];
    int need[MAX_PROCESSES][MAX_RESOURCES];

    // User Input
    printf("Enter the number of processes: ");
    scanf("%d", &numProcesses);

    printf("Enter the number of resources: ");
    scanf("%d", &numResources);

    // Input Available Resources
    printf("Enter the available resources: ");
    for (int i = 0; i < numResources; i++) {
        scanf("%d", &available[i]);
    }

    // Input Max Matrix
    printf("Enter the Maximum Resource Matrix:\n");
    for (int i = 0; i < numProcesses; i++) {
        for (int j = 0; j < numResources; j++) {
            scanf("%d", &max[i][j]);
        }
    }

    // Input Allocation Matrix
    printf("Enter the Allocation Matrix:\n");
    for (int i = 0; i < numProcesses; i++) {
        for (int j = 0; j < numResources; j++) {
            scanf("%d", &allocation[i][j]);
            need[i][j] = max[i][j] - allocation[i][j];

            if (need[i][j] < 0) {
                printf("Error: Need matrix contains negative values! Check input.\n");
                return 1;
            }
        }
    }

    // Print Need Matrix
    printNeedMatrix(numProcesses, numResources, need);

    // Check for safe state
    isSafeState(available, max, allocation, need, numProcesses, numResources);

    return 0;
}
