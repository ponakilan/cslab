/*
 * Fibonacci Series with given number of terms
 */
#include <stdio.h> //Including the header files

int main() {
    //Declaring required variables
    int i, n, t1=0, t2=1, nextTerm;

    //Printing name and register number
    printf("Registration number: 126018002\nName: Akilan K\n\n");

    // initialize the next term
    nextTerm = t1 + t2;

    // get no. of terms from user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // print the first two terms t1 and t2
    printf("Fibonacci Series: %d, %d, ", t1, t2);

    // print 3rd to nth terms
    for (i = 3; i <= n; ++i) {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    return 0; //Returning an integer
}