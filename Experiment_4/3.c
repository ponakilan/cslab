/*Fibonnaci and factorial of a number using functions*/

#include <stdio.h>

void fibonacci(int n)
{
    int i;

    // initialize first and second terms
    int t1 = 0, t2 = 1;

    // initialize the next term (3rd term)
    int nextTerm = t1 + t2;

    // print the first two terms t1 and t2
    printf("Fibonacci Series: %d %d ", t1, t2);

    // print 3rd to nth terms
    for (i = 3; i <= n; ++i)
    {
        printf("%d ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
}

int factorial (int n) {
    int i;
    double fact = 1;
    for (i=n; i!=0; i--) {
        fact = fact * i;
    }
    printf("\n");
    return fact;
}

int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    fibonacci(n);
    printf("Factorial of %d : %d", n, factorial(n));
    return 0;
}
