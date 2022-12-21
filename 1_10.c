/*
 * Printing a formatted report card
 */
#include <stdio.h> //Including the header files

int main() {
    //Declaring required variables
    int marks[5], total=0, i;
    char reg_no[10], name[25];
    float average;

    //Printing name and register number
    printf("Registration number: 126018002\n Name: Akilan K\n\n");

    //Getting the required values from the user
    printf("Enter your name:");
    scanf("%s", name);
    printf("Enter your register number:");
    scanf("%s", reg_no);
    for (i=0; i<5; i++) {
        printf("Enter mark %d:", i+1);
        scanf("%d", &marks[i]);
    }

    //Calculating total and average
    for (i=0; i<5; i++) {
        total += marks[i];
    }

    //Calculating the average
    average = total/5.0;

    //Printing the results
    printf("\nName           : %s\nRegister number: %s\n", name, reg_no);
    for (i=0; i<5; i++) {
        printf("Mark %d         : %d\n", i+1, marks[i]);
    }
    printf("Total          : %d\n", total);
    printf("Average        : %f\n", average);
    return 0; //Returning an integer
}