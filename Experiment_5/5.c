#include <stdio.h>

void reverse(int i, int n, int arr[])
{
    if (i == n)
    {
        return;
    }
    else
    {
        reverse(i + 1, n, arr);
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[10], i;
    printf("Enter the elements of the array : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverse(0, 10, arr);
}