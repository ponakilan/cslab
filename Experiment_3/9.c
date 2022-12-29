#include <stdio.h>

int main() {
    char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char upper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lower[26] = "abcdefghijklmnopqrstuvwxyz";
    char input[50];
    int i, j;
    
    printf("Enter a string: ");
    scanf("%s", input);

    for (i=0; i<50; i++) {
        for (j=0; j<10; j++) {
            if (input[i] == vowels[j]) {
                printf("%c ", vowels[j]);
                break;
            }
        }
    }

    printf("\nThe resultant string: ");
    for (i=0; i<50; i++) {
        for (j=0; j<26; j++) {
            if (input[i] == upper[j])
                printf("%c", lower[j]);
            else if (input[i] == lower[j])
                printf("%c", upper[j]);
        }
    }
}