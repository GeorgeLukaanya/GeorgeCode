2#include <stdio.h>

#define NUM_STUDENTS 10
#define NUM_SUBJECTS 5

// Structure to represent a student
typedef struct {
    char name[50];
    char reg_number[15];
    int marks[NUM_SUBJECTS];
} Student;

// Function to collect marks for each subject from the user
void calculateResults(Student *student) {
    printf("Enter marks for %s (%s):\n", student->name, student->reg_number);
    for (int i = 0; i < NUM_SUBJECTS; ++i) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &student->marks[i]);
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
float calculateWeightedAverage(Student *student) {
    float totalWeight = 0;
    for (int i = 0; i < NUM_SUBJECTS; ++i) {
        char grade = calculateGrade(student->marks[i]);
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
    // Array to store information about each student
    Student students[NUM_STUDENTS];

    // Collect information for each student
    for (int i = 0; i < NUM_STUDENTS; ++i) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter registration number for %s: ", students[i].name);
        scanf("%s", students[i].reg_number);
        calculateResults(&students[i]);
    }

    // Calculate and display results for each student
    for (int i = 0; i < NUM_STUDENTS; ++i) {
        printf("\nResults for %s (%s):\n", students[i].name, students[i].reg_number);
        for (int j = 0; j < NUM_SUBJECTS; ++j) {
            printf("Subject %d: %d\n", j + 1, students[i].marks[j]);
        }

        // Calculate and display average weighted grade
        float averageWeight = calculateWeightedAverage(&students[i]);
        printf("Average Weight: %.2f\n", averageWeight);
    }

    // Find students with highest, medium, and lowest average weighted grades
    int topIndex = 0, mediumIndex = NUM_STUDENTS / 2, bottomIndex = NUM_STUDENTS - 1;

    // Display top-performing student
    printf("\nTop performing students:\n");
    printf("%s - Average Weight: %.2f\n", students[topIndex].name, calculateWeightedAverage(&students[topIndex]));

    // Display medium-performing student
    printf("\nMedium performing students:\n");
    printf("%s - Average Weight: %.2f\n", students[mediumIndex].name, calculateWeightedAverage(&students[mediumIndex]));

    // Display bottom-performing student
    printf("\nLowest performing students:\n");
    printf("%s - Average Weight: %.2f\n", students[bottomIndex].name, calculateWeightedAverage(&students[bottomIndex]));

    return 0;
}
