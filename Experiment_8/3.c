#include<stdio.h>

void main()
{	
	char a[25];
	int i = 0;
	printf("enter your name\n");
	scanf("%s", a);
	while (a[i] != '\0')
	{	printf("%c=%d\n", a[i], a[i]);
		i++;
	}
}
