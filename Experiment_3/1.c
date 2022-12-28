#include <stdio.h>

int main(void) {
    int N, i, sum = 0;

    // Read the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Print all the natural numbers from 1 to N
    printf("The natural numbers from 1 to %d are: ", N);
    for (i = 1; i <= N; i++) {
        printf("%d ", i);
        sum += i; // Add the current number to the sum
    }

    // Print the sum of N natural numbers
    printf("\nThe sum of %d natural numbers is: %d\n", N, sum);

    return 0;
}
