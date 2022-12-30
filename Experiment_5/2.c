#include <stdio.h>

int findLargest(int arr[], int size)
{
    int largest;
    if (size == 1)
    {
        return arr[0];
    }
    else
    {
        largest = findLargest(arr + 1, size - 1);
        if (arr[size - 1] > largest)
        {
            return arr[size - 1];
        }
        else
        {
            return largest;
        }
    }
}

int findSmallest(int arr[], int size)
{
    if (size == 1)
    {
        return arr[0];
    }

    int smallest = findSmallest(arr + 1, size - 1);

    return (arr[0] < smallest) ? arr[0] : smallest;
}

int main()
{
    int arr[10], size, largest, i, smallest;
    printf("Enter the elements of the array:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    size = sizeof(arr) / sizeof(int);
    largest = findLargest(arr, size);
    smallest = findSmallest(arr, size);
    printf("The largest number in the array is %d\n", largest);
    printf("The smallest number in the array is %d\n", smallest);
    return 0;
}
