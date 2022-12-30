#include <stdio.h>

int main() {
    int i, n, t1=0, t2=1, next;
    printf("Fibonacci Series : %d %d ", t1, t2);
    while ((t1+t2) <= 200) {
        next = t1+t2;
        t1 = t2;
        t2 = next;
        printf("%d ", next);
    }
    return 0;
}