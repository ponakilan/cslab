#include<stdio.h>

void isprime(int *a);

void main()
{	
	int n, i, j;
	printf("\n Enter the number ");
	scanf("%d", &n);
	isprime(&n);
}

void isprime(int *a)
{	int i, fg = 0;
	for (i = 2; i < *a; i++)
	{	if (*a % i == 0)
			fg = 1;
	}
	if (fg == 0)
		printf("\n prime");
	else
		printf("\n not prime");
}