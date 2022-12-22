/*
 * Finding the largest among three using ternary operator
 */
#include <stdio.h> //Including the header files

int main() {
    //Declaring required variables
    int num[3], i, largest;

    //Printing name and register number
    printf("Registration number: 126018002\n Name: Akilan K\n\n");

    //Getting the input using for loop
    for (i=0; i<3; i++) {
        printf("Enter number %d:", i+1);
        scanf("%d", &num[i]);
    }

    //Finding the largest using ternary operator
    largest = (num[2]>num[1] && num[2]>num[0]) ? num[2] : ((num[1]>num[2] && num[1]>num[0]) ? num[1] : num[0]);

    //Printing the largest number
    printf("The largest number among the three is %d.", largest);

    return 0; //Returning an integer
}