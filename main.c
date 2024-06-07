#include <stdio.h>
#include <stdlib.h>
#include "include/calculator.h"

void print_menu() {
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Binary to Decimal\n");
    printf("6. Decimal to Binary\n");
    printf("7. Hex to Decimal\n");
    printf("8. Decimal to Hex\n");
    printf("9. Exit\n");
}

int main() {
    int choice;
    float num1, num2;
    char input[33];

    while (1) {
        print_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.2f\n", add(num1, num2));
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.2f\n", subtract(num1, num2));
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.2f\n", multiply(num1, num2));
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.2f\n", divide(num1, num2));
                break;
            case 5:
                printf("Enter a binary number: ");
                scanf("%s", input);
                printf("Decimal: %d\n", binary_to_decimal(input));
                break;
            case 6:
                printf("Enter a decimal number: ");
                int decimal;
                scanf("%d", &decimal);
                printf("Binary: %s\n", decimal_to_binary(decimal));
                break;
            case 7:
                printf("Enter a hex number: ");
                scanf("%s", input);
                printf("Decimal: %d\n", hex_to_decimal(input));
                break;
            case 8:
                printf("Enter a decimal number: ");
                scanf("%d", &decimal);
                printf("Hex: %s\n", decimal_to_hex(decimal));
                break;
            case 9:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
