#include<stdio.h>

void main()
{	
	char str[50], rev[50];
	char *sptr = str, *rptr = rev;
	int i = -1;
	printf("Enter any word : ");
	scanf("%s", str);
	while (*sptr) {
		sptr++;
		i++;
	}
	while (i >= 0)
	{	sptr--;
		*rptr = *sptr;
		rptr++;
		--i;
	}
	*rptr = '\0';
	printf("Reverse of string is : %s", rev);
}