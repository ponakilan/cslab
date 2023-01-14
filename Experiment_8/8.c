#include<stdio.h>

void main()
{	
	char str[200], pat[20], new_str[200], rep_pat[100];
	int i = 0, j = 0, k, n = 0, rep = 0;
	printf("enter source string ");
	gets(str);
	printf("enter string to be replaced ");
	gets(pat);
	printf("\n enter new string to replace pattern ");
	gets(rep_pat);
	while (str[i] != '\0')
	{
		j = 0; k = i; rep = 0;
		while (str[k] == pat[j] && pat[j] != '\0')
		{
			k++; j++;
		}
		if (pat[j] == '\0')
		{
			i = k;
			while (rep_pat[rep] != '\0')
			{
				new_str[n] = rep_pat[rep];
				rep++;
				n++;
			}
		}
		new_str[n] = str[i];
		i++;
		n++;
	}
	new_str[n] = '\0';
	printf("The String is ");
	puts(new_str);
}