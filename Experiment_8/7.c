#include<stdio.h>
int string_ln(char*);

void main()
{	
	char str[20];
	int l;
	printf("Enter any string: ");
	gets(str);
	l = string_ln(str);
	printf("The length of the given string %s is : %d", str, l);
}

int string_ln(char*p) /* p=&str[0] */
{	int count = 0;
	while (*p != '\0')
	{	count++;
		p++;
	}
	return count;
}