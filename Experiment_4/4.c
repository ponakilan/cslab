#include <stdio.h>

// Function prototype
int sum(int n);

int main() {
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  int result = sumOfNaturalNumbers(n);
  printf("Sum of first %d natural numbers = %d\n", n, result);

  return 0;
}

// Function definition
int sum(int n) {
  int sum = 0, i;
  for (i = 1; i <= n; i++) {
    sum += i;
  }
  return sum;
}