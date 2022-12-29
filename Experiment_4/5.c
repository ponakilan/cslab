/* Print the array elements in reverse order using functions */

#include <stdio.h>

void reverse (int arr[10]) {
    int i;
    printf("The given array in reverse order : ");
    for (i=9; i>=0; i--) {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[10], i;

    for (i=0; i<10; i++) {
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    reverse(arr);

    return 0;
}