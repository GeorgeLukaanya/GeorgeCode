#include <stdio.h>

// Function to display activity details
void displayActivityDetails(char name[], char supervisor[], int cost) {
    printf("\nActivity Details:\n");
    printf("Name: %s\n", name);
    printf("Supervisor: %s\n", supervisor);
    printf("Cost: %d\n", cost);
}

int main() {
    char name[100], supervisor[100], continueInput;

    do {
        // Capture activity details
        printf("Enter activity name: ");
        scanf("%s", name);

        printf("Enter supervisor name: ");
        scanf("%s", supervisor);

        int cost;
        printf("Enter cost: ");
        scanf("%d", &cost);

        // Call function to display details
        displayActivityDetails(name, supervisor, cost);

        // Ask user to continue or stop
        printf("\nEnter 'Y' to continue, any other letter to stop: ");
        scanf(" %c", &continueInput);  // Notice the space before %c to consume the newline character

    } while (continueInput == 'Y' || continueInput == 'y');

    printf("Program stopped.\n");

    return 0;
}
