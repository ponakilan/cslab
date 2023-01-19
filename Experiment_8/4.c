#include<stdio.h>

void sort(int size, int *p);

void main()
{
	int i, a[8] = {11, 2, 34, 57, 890, 44, 33, 22};
	sort(8, a);
	for (i = 0; i < 8; i++)
		printf("\n%d", a[i]);
}

void sort(int size, int *p)
{	int j, t, i;
	for (i = 0; i < size; i++)
	{	for (j = i + 1; j < size; j++)
		{	if (*(p + i) > *(p + j))
			{	t = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = t;
			}
		}
	}
}