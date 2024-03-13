#include <stdio.h>

int main() {
    double perimeterInMeters;
    double pricePerDecimal;

    // Input the perimeter in meters and price per decimal
    printf("Enter the perimeter of the plot in meters: ");
    scanf("%lf", &perimeterInMeters);
    printf("Enter the price per decimal: ");
    scanf("%lf", &pricePerDecimal);

    // Convert the perimeter to decimals (1 decimal = 10 meters)
    double perimeterInDecimals = perimeterInMeters / 10.0;

    // Calculate the approximate price of the plot of land
    double totalPrice = perimeterInDecimals * pricePerDecimal;

    // Output the result
    printf("Approximate price of the plot of land: $%.2lf\n", totalPrice);

    return 0;
}
