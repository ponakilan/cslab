/*
 * Calculating grades of students
 */
#include <stdio.h> //Including the header files

int main() {
    //Declaring required variables
    int marks[5], i, total, result=1, grade;
    char name[25], reg_no[10];
    float average=0;

    //Printing name and register number
    printf("Registration number: 126018002\n Name: Akilan K\n\n");

    //Getting the name and register number
    printf("Enter your name:");
    scanf("%s", name);
    printf("Enter your register number:");
    scanf("%s", reg_no);

    //Getting the marks using for loop
    for (i=0; i<5; i++) {
        printf("Enter mark %d:", i+1);
        scanf("%d", &marks[i]);
    }

    //Calculating average
    for (i=0; i<5; i++) {
        if (marks[i] < 50) {
            result = 0;
            break;
        }
        total += marks[i];
    }
    average = total/5.0;

    //Assigning grades based on average
    grade = (average >= 75) ? 0 : ((average >= 60) ? 1 : 2);

    //Printing the results based on the value of result
    if (result) {
        printf("\nName: %s\nRegister number: %s\nTotal: %d\nAverage: %f", name, reg_no, total, average);
        (grade==0) ? printf("Grade: First class with distinction") : ((grade==1) ? printf("Grade: First class") : printf("Grade: Second class"));
        printf("\nResult: PASS");
    }
    else {
        printf("Name: %s\nRegister number: %s\nResult: FAIL", name, reg_no);
    }

    return 0; //Returning an integer
}