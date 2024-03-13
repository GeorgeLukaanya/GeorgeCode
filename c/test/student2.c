#include <stdio.h>

#define NUM_STUDENTS 10
#define NUM_SUBJECTS 5
#define NAME_LENGTH 50
#define REG_NUMBER_LENGTH 15

// Function to collect marks for each subject from the user
void calculateResults(char names[][NAME_LENGTH], char reg_numbers[][REG_NUMBER_LENGTH], int marks[][NUM_SUBJECTS], int studentIndex) {
    printf("Enter marks for student %d:\n", studentIndex + 1);
    for (int i = 0; i < NUM_SUBJECTS; ++i) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[studentIndex][i]);
    }
}

// Function to calculate letter grade based on marks
char calculateGrade(int marks) {
    if (marks >= 80) return 'A';
    else if (marks >= 70) return 'B';
    else if (marks >= 60) return 'C';
    else if (marks >= 50) return 'D';
    else return 'E';
}

// Function to calculate the average weighted grade for a student
float calculateWeightedAverage(int marks[]) {
    float totalWeight = 0;
    for (int i = 0; i < NUM_SUBJECTS; ++i) {
        char grade = calculateGrade(marks[i]);
        // Assign weight based on letter grade
        switch (grade) {
            case 'A': totalWeight += 5; break;
            case 'B': totalWeight += 4; break;
            case 'C': totalWeight += 3; break;
            case 'D': totalWeight += 2; break;
            case 'E': totalWeight += 1; break;
        }
    }
    // Calculate average weighted grade
    return totalWeight / NUM_SUBJECTS;
}

int main() {
    // Arrays to store information about each student
    char names[NUM_STUDENTS][NAME_LENGTH];
    char reg_numbers[NUM_STUDENTS][REG_NUMBER_LENGTH];
    int marks[NUM_STUDENTS][NUM_SUBJECTS];

    // Collect information for each student
    for (int i = 0; i < NUM_STUDENTS; ++i) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter registration number for %s: ", names[i]);
        scanf("%s", reg_numbers[i]);
        calculateResults(names, reg_numbers, marks, i);
    }

    // Calculate and display results for each student
    for (int i = 0; i < NUM_STUDENTS; ++i) {
        printf("\nResults for %s (%s):\n", names[i], reg_numbers[i]);
        for (int j = 0; j < NUM_SUBJECTS; ++j) {
            printf("Subject %d: %d\n", j + 1, marks[i][j]);
        }

        // Calculate and display average weighted grade
        float averageWeight = calculateWeightedAverage(marks[i]);
        printf("Average Weight: %.2f\n", averageWeight);
    }

    // Find students with highest, medium, and lowest average weighted grades
    int topIndex = 0, mediumIndex = NUM_STUDENTS / 2, bottomIndex = NUM_STUDENTS - 1;

    // Display top-performing student
    printf("\nTop performing students:\n");
    printf("%s - Average Weight: %.2f\n", names[topIndex], calculateWeightedAverage(marks[topIndex]));

    // Display medium-performing student
    printf("\nMedium performing students:\n");
    printf("%s - Average Weight: %.2f\n", names[mediumIndex], calculateWeightedAverage(marks[mediumIndex]));

    // Display bottom-performing student
    printf("\nLowest performing students:\n");
    printf("%s - Average Weight: %.2f\n", names[bottomIndex], calculateWeightedAverage(marks[bottomIndex]));

    return 0;
}
```

In this version, the information for each student (name, registration number, and marks) is stored in separate arrays. The functions take these arrays as parameters to perform the necessary calculations and operations.
