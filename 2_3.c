/*
 * Second smallest among numbers
 */
#include <stdio.h> //Including the header files

int main() {
    //Declaring required variables
    int numbers[3], largest=0, i, second_smallest;

    //Printing name and register number
    printf("Registration number: 126018002\n Name: Akilan K\n\n");

    //Getting the four values from the user
    for (i=0; i<3; i++) {
        printf("Enter number %d:", i+1);
        scanf("%d", &numbers[i]);
    }

    //Finding the second smallest
    if (numbers[0] < numbers[1] && numbers[0] > numbers[2]) {
        printf("%d is the second smallest.", numbers[0]);
    }
    else if (numbers[1] < numbers[2] && numbers[1] > numbers[0]) {
        printf("%d is the second smallest.", numbers[1];)
    }
    else {
        printf("%d is the second smallest.", numbers[2]);
    }

    return 0; //Returning an integer
}