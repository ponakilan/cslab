#include <stdio.h>

int sum(int n)
{
    if (!n)
    {
        return 0;
    }
    else
    {
        return n + sum(n - 1);
    }
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("The sum of the numbers is : %d", sum(n));
    return 0;
}