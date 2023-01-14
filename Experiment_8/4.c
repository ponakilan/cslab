#include<stdio.h>

void main()
{	
	int i = 1;
	char a[25];
	printf("Any Word\n");
	while ((a[i] = getchar()) != '\n')
		i++;
	printf("lenght is %d", i - 1);
}