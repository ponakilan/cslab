/*
 * Arithmetic calculator using switch case
 */
#include <stdio.h> //Including the header files

int main() {
    //Declaring required variables
    float num1, num2;
    char op;

    //Printing name and register number
    printf("Registration number: 126018002\n Name: Akilan K\n\n");

    //Getting the user input for doing the arithmetic operation
    printf("Enter an arithmetic expression (e.g. 3 + 4): ");
    scanf("%f %c %f", &num1, &op, &num2);

    //Performing the arithmetic operation by comparing the inputs using switch case
    switch (op) {
        case '+':
            printf("%.2lf\n", num1 + num2);
            break;
        case '-':
            printf("%.2lf\n", num1 - num2);
            break;
        case '*':
            printf("%.2lf\n", num1 * num2);
            break;
        case '/':
            printf("%.2lf\n", num1 / num2);
            break;
        case '%':
            printf("%d\n", (int)num1 % (int)num2);
            break;
        default:
            printf("Invalid operator\n");
            break;
    }

    return 0; //Returning an integer
}