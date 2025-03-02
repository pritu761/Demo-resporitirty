#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2;
    int choice;

    // Taking input for two numbers
    printf("Enter Two Numbers: ");
    if (scanf("%f %f", &num1, &num2) != 2) {
        printf("Invalid input! Please enter valid numbers.\n");
        return 1;  // Exit the program if input is invalid
    }

    // Displaying menu for operation choice
    printf("\nSelect the operation you want to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1/2/3/4): ");
    scanf("%d", &choice);

    // Perform the operation based on user's choice
    switch (choice) {
        case 1:
            printf("The sum of two numbers is %.2f\n", num1 + num2);  // Addition
            break;
        case 2:
            printf("The subtraction of two numbers is %.2f\n", num1 - num2);  // Subtraction
            break;
        case 3:
            printf("The multiplication of two numbers is %.2f\n", num1 * num2);  // Multiplication
            break;
        case 4:
            if (num2 != 0) {
                printf("The division of two numbers is %.2f\n", num1 / num2);  // Division
            } else {
                printf("Error: Division by zero is not allowed.\n");  // Handle division by zero
            }
            break;
        default:
            printf("Invalid choice! Please select a valid operation.\n");
    }

    return 0;
}
