/*
 * Largest among four numbers
 */
#include <stdio.h> //Including the header files

int main() {
    //Declaring required variables
    int numbers[4], largest=0, i;

    //Printing name and register number
    printf("Registration number: 126018002\n Name: Akilan K\n\n");

    //Getting the four values from the user
    for (i=0; i<4; i++) {
        printf("Enter number %d:", i+1);
        scanf("%d", &numbers[i]);
    }

    //Finding the largest number using for loop
    for (i=0; i<4; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    //Printing the largest number
    printf("\nThe largest among the given four numbers is %d.", largest);

    return 0; //Returning an integer
}