#include<stdio.h>
#include<stdlib.h>

/*This program implements its music teacher’s discount policy */
int main(){
    double purchaseTotal;
    char teacher;
    double teacherDiscount;
    double discountedTotal;
    double salesTax;
    double totalPurchase;
printf("This program implements the Music Teacher's discount policy\n\n");

//The user is prompted to enter the purchase total
printf("Enter the purchase total:\n ");
scanf("%lf", &purchaseTotal);
printf("\nThe purchase total value entered is $%.2f.\n", purchaseTotal);

//The user is prompted to tell whether they are a music teacher or not
printf("\nVerify whether you are a teacher or not by entering 'Y' for YES or 'N' for NO:\n ");
scanf(" %c", &teacher);
if(teacher=='Y' || teacher == 'y'){
    printf("The user is a teacher\n");
}else if(teacher=='N' || teacher == 'n'){
    printf("The user is not a teacher\n");
}else{
    printf("Invalid input!\n");
}

//Here the actual discounts are calculated and the discounted total is displayed.
if(teacher == 'Y' || teacher == 'y') {
    if (purchaseTotal>0 && purchaseTotal < 100) {
        teacherDiscount = purchaseTotal * 0.1;
        discountedTotal = purchaseTotal - teacherDiscount;
        printf("Your discount is $%.2f and the amount payable is $%.2f\n", teacherDiscount, discountedTotal);
    } else if (purchaseTotal >= 100) {
        teacherDiscount=purchaseTotal*0.12;
        discountedTotal=purchaseTotal-teacherDiscount;
        printf("Your discount is $%.2f and the amount payable is $%.2f\n", teacherDiscount, discountedTotal);
}else{
        printf("This is an invalid purchase total.");
}
}else if(teacher == 'N' || teacher == 'n'){
    teacherDiscount=purchaseTotal*0;
    discountedTotal=purchaseTotal-teacherDiscount;
    printf("Your discount is $%.2f and the amount payable is $%.2f\n", teacherDiscount, discountedTotal);
}else{
    printf("\nYou have entered wrong values! Please try again!\n");
}

//This segments calculates the sales tax and the total purchase amount.
salesTax=0.05*discountedTotal;
printf("The sales tax is $%.2f\n", salesTax);
totalPurchase=discountedTotal+salesTax;
printf("\nThe total to be paid is $%.2f\n", totalPurchase);

 // Creating and formatting the receipt in a file called receipt.txt
    FILE *file = fopen("receipt.txt", "w");
    if (file != NULL) {
        fprintf(file, "Keith's Sheet Music Receipt\n");
        fprintf(file, "Purchase Total: $%.2f\n", purchaseTotal);
        fprintf(file, "Discount: $%.2f\n", purchaseTotal * teacherDiscount);
        fprintf(file, "Discouned total: $%.2f\n", discountedTotal);
        fprintf(file, "Sales Tax (5%%): $%.2f\n", salesTax);
        fprintf(file, "Total Amount: $%.2f\n", totalPurchase);
        fprintf(file, "Thank you for your purchase!");
        fclose(file);
        printf("Receipt generated and saved as 'receipt.txt'.\n");

        /*Open the receipt file*/
        #ifdef _WIN32
        system("notepad receipt.txt");
        #endif // _WIN32
    } else {
        printf("Error creating receipt file.\n");
    }
return 0;
}
