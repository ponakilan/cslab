/*
 * Checking for leap year
 */
#include <stdio.h> //Including the header files

int main() {
    //Declaring required variables
    int year;

    //Printing name and register number
    printf("Registration number: 126018002\n Name: Akilan K\n\n");

    //Getting the year from the user
    printf("Enter the year:");
    scanf("%d", &year);

    //Checking for leap year
    if ((year%4==0 && year%100!=0) || year%400==0) {
        printf("%d is a leap year.", year);
    }
    else {
        printf("%d is not a leap year.", year);
    }

    return 0; //Returning an integer
}