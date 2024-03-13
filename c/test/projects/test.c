//
// Created by LTGW GEORGE on 11/13/2023.
//
#include<stdio.h>
#include<stdlib.h>

#define TEACHER_DISCOUNT_RATE_LOW 0.1
#define TEACHER_DISCOUNT_RATE_HIGH 0.12

int main() {
    double purchaseTotal;
    char teacher;
    double teacherDiscount;
    double discountedTotal;
    double salesTax;
    double totalPurchase;

    printf("This program implements the Music Teacher's discount policy\n\n");

    // Prompt user to enter the purchase total
    printf("Enter the purchase total:\n ");
    scanf("%lf", &purchaseTotal);
    printf("\nThe purchase total value entered is $%.2f.\n", purchaseTotal);

    // Prompt user to specify if they are a music teacher
    printf("\nVerify whether you are a teacher or not by entering 'Y' for YES or 'N' for NO:\n ");
    scanf(" %c", &teacher);

    if (teacher == 'Y' || teacher == 'y') {
        printf("The user is a teacher\n");
    } else if (teacher == 'N' || teacher == 'n') {
        printf("The user is not a teacher\n");
    } else {
        printf("Invalid input!\n");
        return 1;  // Exit program on invalid input
    }

    // Calculate discounts and display discounted total
    if (teacher == 'Y' || teacher == 'y') {
        if (purchaseTotal > 0 && purchaseTotal < 100) {
            teacherDiscount = purchaseTotal * TEACHER_DISCOUNT_RATE_LOW;
        } else if (purchaseTotal >= 100) {
            teacherDiscount = purchaseTotal * TEACHER_DISCOUNT_RATE_HIGH;
        } else {
            printf("This is an invalid purchase total.\n");
            return 1;  // Exit program on invalid purchase total
        }

        discountedTotal = purchaseTotal - teacherDiscount;
        printf("Your discount is $%.2f and the amount payable is $%.2f\n", teacherDiscount, discountedTotal);
    } else if (teacher == 'N' || teacher == 'n') {
        teacherDiscount = 0;
        discountedTotal = purchaseTotal - teacherDiscount;
        printf("Your discount is $%.2f and the amount payable is $%.2f\n", teacherDiscount, discountedTotal);
    } else {
        printf("\nYou have entered wrong values! Please try again!\n");
        return 1;  // Exit program on invalid input
    }

    // Calculate sales tax and total purchase amount
    salesTax = 0.05 * discountedTotal;
    printf("The sales tax is $%.2f\n", salesTax);
    totalPurchase = discountedTotal + salesTax;
    printf("\nThe total to be paid is $%.2f\n", totalPurchase);

    // Create and format the receipt in a file called receipt.txt
    FILE *file = fopen("receipt.txt", "w");
    if (file == NULL) {
        printf("Error creating receipt file.\n");
        return 1;  // Exit program on file creation error
    }

    fprintf(file, "Keith's Sheet Music Receipt\n");
    fprintf(file, "Purchase Total: $%.2f\n", purchaseTotal);
    fprintf(file, "Discount: $%.2f\n", teacherDiscount);
    fprintf(file, "Discounted total: $%.2f\n", discountedTotal);
    fprintf(file, "Sales Tax (5%%): $%.2f\n", salesTax);
    fprintf(file, "Total Amount: $%.2f\n", totalPurchase);
    fprintf(file, "Thank you for your purchase!");
    fclose(file);

    printf("Receipt generated and saved as 'receipt.txt'.\n");

// Open the receipt file (cross-platform solution)
#ifdef _WIN32
    system("notepad receipt.txt");
#else
    printf("Please open 'receipt.txt' in your preferred text editor.\n");
#endif // _WIN32

    return 0;
}

