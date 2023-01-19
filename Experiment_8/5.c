#include<stdio.h>

void main()
{	
	int a[10], i, sum = 0;
	int *ptr;
	printf("Enter 10 elements:");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	ptr = a; /* a=&a[0] */
	for (i = 0; i < 10; i++)
	{	
		sum = sum + *ptr; //*p=content pointed by 'ptr'
		ptr++;
	}
	printf("The sum of array elements is %d", sum);
}