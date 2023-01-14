#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/*low implies that position of pointer is within a
word*/
#define low 1

/*high implies that position of pointer is out of word.*/
#define high 0

void main()
{
	int nob, now, nod, nov, nos, pos = high;
	char *s;
	nob = now = nod = nov = nos = 0;
	printf("Enter any string:");
	gets(s);
	while (*s != '\0')
	{
		if (*s == ' ') /* counting number of blank spaces. */
		{	pos = high;
			++nob;
		}
		else if (pos == high) /* counting number of words. */
		{	pos = low;
			++now;
		}
		if (isdigit(*s)) /* counting number of digits. */
			++nod;
		if (isalpha(*s)) /* counting number of vowels */
			switch (*s)
			{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				++nov;
				break;
			}
		/* counting number of special characters */
		if (!isdigit(*s) && !isalpha(*s))
			++nos;
		s++;
	}
	printf("\nNumber of words %d", now);
	printf("\nNumber of spaces %d", nob);
	printf("\nNumber of vowels %d", nov);
	printf("\nNumber of digits %d", nod);
	printf("\nNumber of special characters %d", nos);
}