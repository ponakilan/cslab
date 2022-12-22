/*
 * Printing the corresponding day of the given day number
 */
#include <stdio.h> //Including the header files

int main() {
    //Declaring required variables
    int day;

    //Printing name and register number
    printf("Registration number: 126018002\n Name: Akilan K\n\n");

    //Getting the user input for day
    printf("Enter a number between 1 and 7:");
    scanf("%d", &day);

    //Printing the day name using switch statement
    switch (day) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0; //Returning an integer
}