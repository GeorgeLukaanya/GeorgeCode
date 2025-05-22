#include <stdio.h>

int main(){
    float num1, num2, result;
    int choice;

    //Input two numbers
    printf("Enter number 1: ");
    scanf("%f", &num1);
    printf("Enter number 2: ");
    scanf("%f", &num2);

    //Display menu
    printf("\n Mathematical operation \n");
    printf("-----------------------------\n");
    printf("1 - Add\n");
    printf("2 - Subtract\n");
    printf("3 - Multiply\n");
    printf("4 - Divide\n");
    printf("-----------------------------\n");

    //Get User's Choice
    printf("Enter your preference: ");
    scanf("%d", &choice);

    //Perform the selected operation
    switch(choice){
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            if(num2!=0){
                result = num1 / num2;
            }else{
                printf("Error: Division by zero\n");
                return 1;//exit with error code
            }
            break;
        default:
            printf("Invalid choise; Please choose between 1 - 4. \n");
            return 1;
    }

    //Display the result with 2 decimal places
    printf("\n Answer : %.2f\n", result);

    return 0;
}