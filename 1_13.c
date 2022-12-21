/*
 * Factorial of a number
 */
#include <stdio.h> //Including the header files

int main() {
    //Declaring required variables
    double num, factorial=1, i;

    //Printing name and register number
    printf("Registration number: 126018002\n Name: Akilan K\n\n");

    //Getting the number from user
    printf("Enter a number:");
    scanf("%lf", &num);

    //Finding the factorial
    i = num;
    while (i >= 1) {
        factorial = factorial*i;
        i--;
    }

    //Printing the results
    printf("Factorial of %.0lf is %.0lf", num, factorial);

    return 0; //Returning an integer
}