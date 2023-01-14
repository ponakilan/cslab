#include<stdio.h>
#include<string.h>

void main()
{	
	int i, j, l, ls;
	char a[80], b[80];
	printf("\nEnter main string:-\n");
	gets(a);
	printf("enter the string to be concatinated\n");
	gets(b);
	l = strlen(a);
	ls = strlen(b);
	for (i = l, j = 0; j <= ls; i++, j++)
		a[i] = b[j];
	printf("\n\nConcatinated string is ");
	puts(a);
}