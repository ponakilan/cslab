/*
 * Roots of a quadratic equation
 */
//Including the header files
#include <stdio.h>
#include <math.h>

int main() {
    //Declaring required variables
    float a, b, c, x1, x2, discriminant;

    //Printing name and register number
    printf("Registration number: 126018002\n Name: Akilan K\n\n");

    //Getting the values of a, b and c from the user
    printf("Enter the values of a, b and c (format: a b c):");
    scanf("%f %f %f", &a, &b, &c);

    //Calculating the discriminant value
    discriminant = b*b - 4*a*c;

    //Calculating the roots using quadratic formula
    x1 = (-b + sqrt(discriminant))/(2*a);
    x2 = (-b - sqrt(discriminant))/(2*a);

    //Printing the roots
    printf("The roots are %f and %f.", x1, x2);

    return 0; //Returning an integer
}