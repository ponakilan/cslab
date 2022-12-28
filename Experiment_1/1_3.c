/*
 * Sum of integer, float and double
 */
#include <stdio.h>

int main() {
    int a, b, c; //Declaring integer variables
    float x, y; //Declaring float variables
    double p, q, r, s; //Declaring double variables

    //Printing my name and register number
    printf("Registration number: 126018002\nName: Akilan K\n\n");

    //Getting the values from the user
    printf("Enter three integer values (format:a b c) : ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Enter two float values (format:a b) : ");
    scanf("%f %f", &x,  &y);
    printf("Enter three double values (format:a b c d) : ");
    scanf("%lf %lf %lf %lf", &p, &q, &r, &s);

    //Printing the sum of the given values
    printf("Sum of integers : %d\n", a+b+c);
    printf("Sum of floats : %f\n", x+y);
    printf("Sum of doubles : %lf\n", p+q+r+s);
    return 0; //Returning 0
}