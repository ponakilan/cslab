/*
 * Average of five subjects
 */
#include <stdio.h> //Including the header files

int main() {
    //Declaring required variables
    int marks[5], i;
    float average, sum;
    char name[25];

    //Printing name and register number
    printf("Registration number: 126018002\n Name: Akilan K\n\n");

    //Getting the input from the user
    printf("Enter your name:");
    scanf("%s", name);
    printf("Enter your five subject marks:-\n");
    for (i=0; i<5; i++) {
        printf("Enter mark %d:", i+1);
        scanf("%d", &marks[i]);
    }

    //Calculating the sum of elements in the array
    sum = 0;
    for (i=0; i<5; i++) {
        sum += marks[i];
    }

    //Calculating the average
    average = sum/5.0;

    //Printing the results
    printf("\nName: %s\nAverage: %f", name, average);

    return 0; //Returning an integer
}