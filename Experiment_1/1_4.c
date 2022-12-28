/*
 * Area and circumference of a circle
 */
#include <stdio.h>

int main() {
    //Declaring the variables
    int radius;
    float area, circumference;

    //Printing name and register number
    printf("Registration number: 126018002\n Name: Akilan K\n\n");

    //Getting the value of radius
    printf("Enter the value of radius:");
    scanf("%d", &radius);

    //Calculating area and radius
    area = 3.14*radius*radius;
    circumference = 2*3.14*radius;

    //Printing the results
    printf("The area of the circle is %f.\nThe circumference of the circle is %f.\n", area, circumference);

    //Returning an integer value
    return 0;
}