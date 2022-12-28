/*
 * Sum of n natural numbers
 */
#include <stdio.h> //Including the header files

int main() {
    //Declaring required variables
    int num, sum=0, i;

    //Printing name and register number
    printf("Registration number: 126018002\n Name: Akilan K\n\n");

    //Getting the number from the user
    printf("Enter a number:");
    scanf("%d", &num);

    for (i=1; i<=num; i++) {
        sum += i; //Adding the values of i with sum
    }

    //Printing the value of sum
    printf("Sum of natural numbers upto %d: %d", num, sum);

    return 0; //Returning an integer
}