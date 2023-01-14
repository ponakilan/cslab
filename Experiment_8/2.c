#include<stdio.h>
#include<string.h>

void main()
{	
	int j, i, k, c = 0;
	char a[80];
	printf("\nEnter main string:-\n");
	gets(a);
	k = strlen(a);
	for (i = 0, j = k - 1; i < k / 2; i++, j--)
	{	if (a[i] == a[j])
			c++;
	}
	if (c == k / 2)
		printf("Polyndrome");
	else
		printf("\nnot Polyndrome");
}