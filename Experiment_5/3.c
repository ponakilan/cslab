#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int fibonacci(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main()
{
    int num, fact, i;
    printf("Enter a number : ");
    scanf("%d", &num);
    fact = factorial(num);
    printf("The factorial of %d is %d\n", num, fact);
    printf("Fibonacci series : ");
    for (i = 0; i < num; i++)
    {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
