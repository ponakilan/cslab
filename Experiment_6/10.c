#include <stdio.h>

int main() {
    int arr[10], split1[10], split2[5], res[10], i;
    printf("Enter the elements of array : \n");
    for (i=0; i<10; i++) {
        scanf("%d", &arr[i]);
    }
    
    //Splitting the array
    printf("Split array 1 : ");
    for (i=0; i<(sizeof(arr)/sizeof(int))/2; i++) {
        split1[i] = arr[i];
        printf("%d ", split1[i]);
    }
    printf("\nSplit array 2 : ");
    for (i=(sizeof(arr)/sizeof(int))/2; i<10; i++) {
        split2[i-4] = arr[i];
        printf("%d ", split2[i-4]);
    }

    //Combining the array
    for (i=0; i<(sizeof(arr)/sizeof(int))/2; i++) {
        res[i] = split1[i];
    }
    for (i=(sizeof(arr)/sizeof(int))/2; i<10; i++) {
        res[i] = split2[i-4];
    }
    printf("\nCombined array : ");
    for (i=0; i<10; i++) {
        printf("%d ", res[i]);
    }
    return 0;
}