/*
Count the number of digits in a given integer
*/

#include <stdio.h>

int main()
{
    int n, digits=0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n!=0) {
        digits++;
        n /= 10;
    }

    printf("The number of digits is %d", digits);

    return 0;
}