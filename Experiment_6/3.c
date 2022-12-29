#include <stdio.h>
#include <string.h>

void sortAscending(char arr[], int n)
{
    int i, j;
    char temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sortDescending(char arr[], int n)
{
    int i, j;
    char temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    char arr[50];
    int n;
    printf("Enter a string : ");
    scanf("%s", arr);
    
    n = strlen(arr);

    sortAscending(arr, n);
    printf("Sorted array in ascending order: %s\n", arr);

    sortDescending(arr, n);
    printf("Sorted array in descending order: %s\n", arr);

    return 0;
}