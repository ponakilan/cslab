/* Largest and smallest by functions */

#include <stdio.h>

int largest(int input[]) {
    int largest=0, i;
    for (i=0; i<10; i++) {
        if (input[i] > largest)
            largest = input[i];
    }
    return largest;
}

int smallest(int input[]) {
    int smallest=input[0], i;
    for (i=0; i<10; i++) {
        if (input[i] < smallest)
            smallest = input[i];
    }
    return smallest;
}

int main() {
    int input[10], i;
    for (i=0; i<10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &input[i]);
    }
    printf("Largest number: %d\n", largest(input));
    printf("Smallest number: %d\n", smallest(input));
    return 0;
}