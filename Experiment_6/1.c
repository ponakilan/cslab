#include <stdio.h>

int main(void)
{
    int n, i, fib[50];
    printf("Enter the number of elements in the Fibonacci series: ");
    scanf("%d", &n);

    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("The Fibonacci series is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", fib[i]);
    }
    printf("\n");

    return 0;
}