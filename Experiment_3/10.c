/* Printing all prime numbers in the given range */

#include <stdio.h>

int main() {
    int i, j, a, b;

    printf("Akilan\n126018002\n\n");

    printf("Enter a range (a - b): ");
    scanf("%d - %d", &a, &b);

    printf("Prime numbers from %d to %d: ", a, b);
    for (i=a; i<=b; i++) {
        for (j=2; j<i/2; j++) {
            if (i%j != 0)
                printf("%d ", i);
                break;
        }
    }
}