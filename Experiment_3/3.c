#include <stdio.h>

int main()
{
    int i, j, s;

    // Printing the first pattern
    for (i = 1; i <= 5; i++)
    {
        for (j = 5 - i; j < 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // Printing the second pattern
    for (i = 1; i <= 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (5 - j <= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    // Printing the third pattern
    for (i = 1; i <= 3; i++)
    {
        for (s = i; s < 3; s++)
        {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}