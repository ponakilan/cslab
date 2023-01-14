#include <stdio.h>
#include <string.h>

int main()
{	
	int i, j, n;
	char a[10][20], t[20];
	printf("Enter the number of strings :");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%s", a[i]); // read the strings
	for (i = 0; i < n - 1; i++) //bubble sort
		for (j = 0; j < n - 1 - i; j++)
			if (strcmp(a[j], a[j + 1]) > 0)
			{	strcpy(t, a[j]);
				strcpy(a[j], a[j + 1]);
				strcpy(a[j + 1], t);
			}
	printf("The strings after sorting are : \n");
	for (i = 0; i < n; i++)
	{	printf(" %s ", a[i]); // print the strings
		printf("\n");
	}
}