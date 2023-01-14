#include<stdio.h>
#include<string.h>

void main()
{	
	int i, j, ls;
	char a[80], b[80];
	printf("\nEnter main string:-\n");
	gets(b);
	ls = strlen(b);
	for (i = 0; i <= ls; i++)
		a[i] = b[i];
	printf("\n\ncopied string is %s ", a);
}
