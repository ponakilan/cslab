/*
 * Giving results based on given condition using switch
 */
#include <stdio.h>
#include <math.h> //Including the header files

int main() {
    //Declaring required variables
    int num;

    //Printing name and register number
    printf("Registration number: 126018002\n Name: Akilan K\n\n");

    //Getting a number from the user
    printf("Enter a number:");
    scanf("%d", &num);

    //Printing the results based on given conditions using switch
    switch (num) {
        case 0:
            printf("You have given improper input for this program\n");
            break;
        default:
            if (num % 2 == 0) {
                printf("The square of %d is %d\n", num, pow(num, 2));
            } else if (num % 3 == 0 && num % 2 == 0) {
                printf("The cube of %d is %d\n", num, pow(num, 3));
            } else {
                printf("%d multiplied by 100 is %d\n", num, num * 100);
            }
            break;
    }

    return 0; //Returning an integer
}