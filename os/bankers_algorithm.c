#include <stdio.h>
#include <stdbool.h>

#define MAX_PROCESSES 10
#define MAX_RESOURCES 10

// Function to print matrices
void printMatrix(int rows, int cols, int matrix[MAX_PROCESSES][MAX_RESOURCES], const char* title) {
    printf("\n%s:\n", title);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to check if the system is in a safe state
bool isSafeState(int processes, int resources, int available[], int max[][MAX_RESOURCES], int allocation[][MAX_RESOURCES], int need[][MAX_RESOURCES]) {
    bool finish[MAX_PROCESSES] = {false}; // Tracks finished processes
    int work[MAX_RESOURCES]; // Work array to simulate available resources
    for (int i = 0; i < resources; i++) {
        work[i] = available[i];
    }

    int safeSequence[MAX_PROCESSES]; // Stores safe sequence
    int count = 0;

    while (count < processes) {
        bool found = false;
        for (int p = 0; p < processes; p++) {
            if (!finish[p]) {
                bool canAllocate = true;
                for (int r = 0; r < resources; r++) {
                    if (need[p][r] > work[r]) {
                        canAllocate = false;
                        break;
                    }
                }

                if (canAllocate) {
                    for (int r = 0; r < resources; r++) {
                        work[r] += allocation[p][r]; // Release resources
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
    for (int i = 0; i < processes; i++) {
        printf("P%d ", safeSequence[i]);
    }
    printf("\n");
    return true;
}

int main() {
    int processes, resources;
    int available[MAX_RESOURCES];
    int max[MAX_PROCESSES][MAX_RESOURCES];
    int allocation[MAX_PROCESSES][MAX_RESOURCES];
    int need[MAX_PROCESSES][MAX_RESOURCES];

    printf("Enter the number of processes: ");
    scanf("%d", &processes);
    printf("Enter the number of resources: ");
    scanf("%d", &resources);

    // Input Available Resources
    printf("Enter the available resources\n(In the format A B C): ");
    for (int i = 0; i < resources; i++) {
        scanf("%d", &available[i]);
    }

    // Input Max Matrix
    printf("Enter the Maximum resource matrix\n(In the format A B C for 5 processes):\n");
    for (int i = 0; i < processes; i++)
        for (int j = 0; j < resources; j++)
            scanf("%d", &max[i][j]);

    // Input Allocation Matrix
    printf("Enter the Allocation matrix\n(In the format A B C for 5 processes):\n");
    for (int i = 0; i < processes; i++)
        for (int j = 0; j < resources; j++)
            scanf("%d", &allocation[i][j]);

    // Calculate Need Matrix
    for (int i = 0; i < processes; i++)
        for (int j = 0; j < resources; j++) {
            need[i][j] = max[i][j] - allocation[i][j];
            if (need[i][j] < 0) {
                printf("Error: Need matrix has negative values! Check input.\n");
                return 1;
            }
        }

    // Print Input Matrices
    printMatrix(processes, resources, max, "Maximum Resource Matrix");
    printMatrix(processes, resources, allocation, "Allocation Matrix");
    printMatrix(processes, resources, need, "Need Matrix");

    // Check if the system is in a safe state
    isSafeState(processes, resources, available, max, allocation, need);

    return 0;
}
