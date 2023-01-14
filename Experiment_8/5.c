#include<stdio.h>
#include<string.h>

void main()
{
	int i, j, k = 0, l, ls;
	char a[80], b[80];
	printf("\nEnter string1:-\n");
	gets(a);
	printf("\nEnter string2:-\n");
	gets(b);
	l = strlen(b);
	ls = strlen(a);
	for (i = 0, j = 0; (i < l - 1) || (j < ls - 1); i++, j++)
	{
		if (a[i] == b[j])
			k = 1;
		if (a[i] != b[j])
		{	k = 0;
			break;
		}
	}
	if (k == 1)
		printf("strings are equal\n");
	else
	{	if (k == 0)
			printf("\n\nstrings are not equal.");
	}
}