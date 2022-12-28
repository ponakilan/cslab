/*
 * Program title
 */
#include <stdio.h> //Including the header files

int main() {
    //Declaring required variables
    float basic_salary, gross_salary, da, hra, tra;

    //Printing name and register number
    printf("Registration number: 126018002\n Name: Akilan K\n\n");

    //Getting the input from the user
    printf("Enter the basic salary:");
    scanf("%f", &basic_salary);

    //Calculating the values of da(17% of basic salary), hra(10% of basic salary), tra(25% of dearness allowance) and gross salary
    if (basic_salary >= 250000) {
        da = 0.17 * basic_salary;
        hra = 0.1 * basic_salary;
        tra = 0.25 * da;
    }
    else if (basic_salary>250000 && basic_salary>=150000) {
        da = 0.2 * basic_salary;
        hra = 0.25 * basic_salary;
        tra = 0.5 * da;
    }
    else {
        da = 0.3 * basic_salary;
        hra = 0.35 * basic_salary;
        tra = 0.75 * da;
    }
    gross_salary = basic_salary + da + hra + tra;

    //Printing the gross salary
    printf("Gross salary: %.2f", gross_salary);

    return 0; //Returning an integer
}