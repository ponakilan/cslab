/*
 * Swapping the values of two variables without using a third variable
 */
#include <stdio.h> //Including the header files

int main() {
    //Declaring required variables
    int a, b;

    //Printing name and register number
    printf("Registration number: 126018002\n Name: Akilan K\n\n");

    //Getting the values of a and b
    printf("Enter two integer values (format: a b):");
    scanf("%d %d", &a, &b);

    //Printing the values before swapping
    printf("The values before swapping:\na = %d\nb = %d\n", a, b);

    //Swapping the values of two variables
    a += b;
    b = a - b;
    a = a - b;

    //Printing the results after swapping
    printf("The values after swapping:\na = %d\nb = %d\n", a, b);

    return 0; //Returning an integer
}