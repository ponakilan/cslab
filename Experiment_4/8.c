#include <stdio.h>
#include <string.h>

int vowels (char string[]);
int numbers (char string[]);
int uppercase (char string[]);
int lowercase (char string[]);

int main () {
    char string[40];
    printf("Enter a string : ");
    scanf("%s", string);
    printf("Number of vowels : %d", vowels(string));
    printf("\nNumber of numbers : %d", numbers(string));
    printf("\nLowercase : %d", lowercase(string));
    printf("\nUppercase : %d", uppercase(string));
    return 0;
}

int vowels (char string[]) {
    int count = 0, i, j;
    char vowels[10] = "aeiouAEIOU";
    for (i = 0; i < strlen(string); i++) {
        for (j=0; j < 10; j++) {
            if (string[i] == vowels[j]) {
                count++;
                break;
            }
        }
    }
    return count;
}

int numbers (char string[]) {
    int count = 0, i, j;
    char numbers[10] = "0123456789";
    for (i = 0; i < strlen(string); i++) {
        for (j=0; j < 10; j++) {
            if (string[i] == numbers[j]) {
                count++;
            }
        }
    }
    return count;
}

int uppercase (char string[]) {
    int count = 0, i, j;
    char upper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (i = 0; i < strlen(string); i++) {
        for (j=0; j < 26; j++) {
            if (string[i] == upper[j]) {
                count++;
            }
        }
    }
    return count;
}

int lowercase (char string[]) {
    int count = 0, i, j;
    char lower[26] = "abcdefghijklmnopqrstuvwxyz";
    for (i = 0; i < strlen(string); i++) {
        for (j=0; j < 26; j++) {
            if (string[i] == lower[j]) {
                count++;
            }
        }
    }
    return count;
}