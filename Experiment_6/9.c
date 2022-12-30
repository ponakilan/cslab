#include <stdio.h>

int main() {
    char names[60][100];
    int i, j;
    printf("Enter names : \n");
    for (i=0; i<60; i++) {
        scanf("%s", names[i]);
    }
    for (i=0; i<60; i++) {
        if (names[i][0] == 's') {
            printf("%s\n", names[i]);
        }
    }
    return 0;
}