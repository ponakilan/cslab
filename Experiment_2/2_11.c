/*
 * Finding the quadrant for the given coordinates
 */
#include <stdio.h> //Including the header files

int main() {
    //Declaring required variables
    int x, y;

    //Printing name and register number
    printf("Registration number: 126018002\n Name: Akilan K\n\n");

    //Getting the values of x and y
    printf("Enter the values of x and y (eg. 3, 7):");
    scanf("%d,%d", &x, &y);

    //Finding the quadrant
    if (x>0 && y>0) {
        printf("The point (%d, %d) lies in first quadrant", x, y);
    }
    else if (x<0 && y>0) {
        printf("The point (%d, %d) lies in second quadrant", x, y);
    }
    else if (x<0 && y<0) {
        printf("The point (%d, %d) lies in third quadrant", x, y);
    }
    else {
        printf("The point (%d, %d) lies in fourth quadrant", x, y);
    }

    return 0; //Returning an integer
}