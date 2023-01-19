#include<stdio.h>
struct stu
{	char name[25];
	int rno;
	int m[5];
	struct date
	{	int d, m, y;
	}
	dob;
} s[20];
void main()
{	int total, tot, n, i, j;
	float avg, avgs;
	printf("\nenter the no of student ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{	printf("\nname,date,no\n");
		scanf("%s%d%d%d%d", s[i].name, &s[i].dob.d, &s[i].dob.m, &s[i].dob.y, &s[i].rno);
		printf("enter the marks1-5\n");
		total = 0;
		for (j = 0; j < 5; j++)
		{	printf("marks-%d \t", j + 1);
			scanf("%d", &s[i].m[j]);
			total += s[i].m[j];
		}
		printf("total \t %d", total);
		avg = total / 5.00;
		printf("\navg marks of student is %f\n", avg);
	}
	for (i = 0; i < 5; i++)
	{	tot = 0;
		for (j = 0; j <= n; j++)
		{ tot = tot + s[j].m[i]; }
		avgs = tot / n;
		printf("sub:%d \n avg%f\n", i + 1, avgs);
	}
}
