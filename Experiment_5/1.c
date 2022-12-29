#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int sum_digits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n % 10) + sum_digits(n / 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d: %d\n", num, factorial(num));
    printf("Sum of digits of %d: %d\n", num, sum_digits(num));

    return 0;
}
