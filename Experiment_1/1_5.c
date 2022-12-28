/*
 * Simple and compound interest
 */
#include <stdio.h>
#include <math.h>

int main() {
    double simple, compound, principle, time, rate, n; //Declaring the required variables

    //Printing name and register number
    printf("Registration number: 126018002\n Name: Akilan K\n\n");

    //Getting the required input from the user
    printf("Simple Interest:-\nEnter the principle amount:");
    scanf("%lf", &principle);
    printf("Enter the time period in years:");
    scanf("%lf", &time);
    printf("Enter the rate of interest:");
    scanf("%lf", &rate);

    //Calculating simple interest
    simple = (principle*time*rate)/100;

    //Printing simple interest
    printf("Simple Interest: %f\n", simple);

    //Getting the required values for compound interest
    printf("\nCompound Interest:-\nEnter the principle amount:");
    scanf("%lf", &principle);
    printf("Enter the time period in years:");
    scanf("%lf", &time);
    printf("Enter the number of times compounded in an year:");
    scanf("%lf", &n);
    printf("Enter the rate of interest:");
    scanf("%lf", &rate);

    //Calculating compound interest
    compound = (principle * (pow((1 + rate / 100),time))) - principle;

    //Printing the compound interest
    printf("Compound Interest: %lf\n", compound);

    return 0; //Returning an integer
}