/*
 * Odd or Even and Positive, Negative or zero
 */
#include <stdio.h> //Including the header files

int main() {
    //Declaring required variables
    int num;

    //Printing name and register number
    printf("Registration number: 126018002\n Name: Akilan K\n\n");

    //Getting the number from the user
    printf("Enter a number:");
    scanf("%d", &num);

    //Checking for odd or even
    if (num%2 == 0) {
        printf("%d is even.\n", num);
    }
    else {
        printf("%d is odd.\n", num);
    }

    //Checking for positive, negative or zero
    if (num > 0) {
        printf("%d is positive.\n", num);
    }
    else if (num < 0) {
        printf("%d is negative.\n", num);
    }
    else {
        printf("%d is zero.\n", num);
    }

    return 0; //Returning an integer
}