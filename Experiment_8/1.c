#include<stdio.h>

int main()
{	int nb, nt, nl;
	char c;
	nb = nt = nl = 0;
	printf("\n Enter * to stop");
	while ((c = getchar()) != '*')
	{	if (c == ' ')
			++nb;
		if (c == '\t')
			++nt;
		if (c == '\n')
			++nl;
	}
	printf("No. of Blanks is %d,No. of Tabs is %d and No. of Newlines is %d", nb, nt, nl);
}