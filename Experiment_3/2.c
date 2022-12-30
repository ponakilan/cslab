#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter the value of N : ");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        sum += i;
        i += 2;
    }
    printf("Sum of odd natural numbers upto %d : %d\n", n, sum);
    i = 0;
    sum = 0;
    do
    {
        sum += i;
        i += 2;
    } while (i <= n);
    printf("Sum of even natural numbers upto %d : %d\n", n, sum);
    return 0;
}