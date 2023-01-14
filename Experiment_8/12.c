#include<stdio.h>

void main()
{	
	char str[80], search[10];
	int count1 = 0, count2 = 0, i, j, flag;
	puts("Enter a string:");
	while ((str[count1] = getchar()) != '\n')
		count1++;
	puts("Enter search substring:");
	while ((search[count2] = getchar()) != '\n')
		count2++;
	for (i = 0; i <= count1 - count2; i++)
	{	for (j = i; j < i + count2; j++)
		{	flag = 1;
			if (str[j] != search[j - i])
			{	flag = 0;
				break;
			}
		}
		if (flag == 1)
			break;
	}
	if (flag == 1)
		puts("SEARCH SUCCESSFUL!");
	else
		puts("SEARCH UNSUCCESSFUL!");
}