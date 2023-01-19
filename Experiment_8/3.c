#include<stdio.h>

void main() 
{
	int arr[50];
	int *p;
	int i, j, k, size, t;
	printf("\nEnter size of the array: ");
	scanf("%d", & size);
	printf("\nEnter %d elements into the array: ", size);
	for (i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	p = arr;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (i == j) {
				continue;
			}
			else if (*(p + i) == *(p + j)) {
				k = j;
				size--;
				while (k < size) {
					*(p + k) = *(p + k + 1);
					k++;
				}
				j = 0;
			}
		}
	}
	for (i = 0; i < size; i++)
	{	for (j = i + 1; j < size; j++)
		{	if (*(p + i) > *(p + j))
			{	t = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = t;
			}
		}
	}
	printf("\nThe array after removing duplicates is: ");
	for (i = 0; i < size; i++)
		printf(" %d ", arr[i]);
}