#include <stdio.h>

int main() {
    int i, n, j,fact=1, prime=1;
    printf("Akilan\n126018002\n\n");

    printf("Enter a number:");
    scanf("%d",&n);

    i=n;
    while (i>0) {
        fact *= i;
        i--;
    }
    printf("The factorial of %d is %d\n", n, fact);

    for (i=2; i<=n/2; i++) {
        if (n%i == 0) {
            prime=0;
            break;
        }
    }

    if (!prime) {
        printf("%d is not a prime number\n", n);
    }
    else {
        printf("%d is a prime number.\n", n);
    }
    return 0;

}