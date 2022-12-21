/*
 * Conversion of Fahrenheit to Celsius and Celsius to Fahrenheit
 */
#include <stdio.h> //Including the header files

int main() {
    //Declaring required variables
    float celsius, fahrenheit, input;

    //Printing name and register number
    printf("Registration number: 126018002\n Name: Akilan K\n\n");

    //Getting the required input from the user
    printf("Enter a temperature:");
    scanf("%f", &input);

    //Converting from Celsius to Fahrenheit
    fahrenheit = (9*input)/5 + 32;

    //Converting from Fahrenheit to Celsius
    celsius = ((input-32)*5)/9;

    //Printing the results
    printf("Fahrenheit to Celsius: %f degree Celsius\n", celsius);
    printf("Celsius to Fahrenheit: %f degree Fahrenheit\n", fahrenheit);

    return 0; //Returning an integer
}