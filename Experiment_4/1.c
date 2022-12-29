/* Factorial and sum of digits of a given integer using functions */

#include <stdio.h>

double fact (int num) {
    int i;
    double factorial = 1;
    for (i=num; i>0; i--) {
        factorial *= i;
    }
    return factorial;
}

int sum (int num) {
    int i, sum=0;
    i = num;
    while (i != 0) {
        sum += i%10;
        i /= 10;
    }
    return sum;
}

int main () {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d is: %ld\n", num, fact(num));
    printf("Sum of digits of %d is: %d\n", num, sum(num));

    return 0;
}