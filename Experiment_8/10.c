#include<stdio.h>
#include<string.h>

void main()
{	
	int n, i, f = 0, k = 0;
	char a[80];
	printf("\nEnter main string:-\n");
	gets(a);
	n = strlen(a);
	for (i = 0; i < n; i++)
	{
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
		{
			k = 1;
			if (a[i + 1] == 'a' || a[i + 1] == 'e' || a[i + 1] == 'i' || a[i + 1] == 'o' || a[i + 1]
			        == 'u')
			{	printf("vowals %c and %c are found in position %d\n", a[i], a[i + 1], i + 1);
				f = 1;
			}
		}
	}
	if (f == 0)
	{	if (k == 1)
			printf("vowals found seperately\n");
		printf("\n vowals are not found consequitively");
	}
}