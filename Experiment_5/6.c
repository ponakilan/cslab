#include <stdio.h>

void reverse(int i, int n, char string[])
{
    if (i == n)
    {
        return;
    }
    else
    {
        reverse(i + 1, n, string);
        printf("%c", string[i-1]);
    }
}

int main()
{
    static char string[25], i;
    printf("Enter a string : ");
    scanf("%s", string);
    reverse(0, 25, string);
    return 0;
}