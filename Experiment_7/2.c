#include<stdio.h>
struct play
{	char name[25];
	int age;
	int nmatch;
	int run;
	float avgrun;
} cri[100], t;
void main()
{	int n, i, j;
	float d;
	printf("\nEnter the no of players ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{	printf("\nEnter name,age,no of matches,total runs\n");
		scanf("%s%d%d%d", cri[i].name, &cri[i].age, &cri[i].nmatch, &cri[i].run);
	}
	for (i = 0; i < n; i++)
		cri[i].avgrun = cri[i].run / cri[i].nmatch;
	for (i = 0; i < n; i++)
		for (j = 0; j < n - i - 1; j++)
		{	if (cri[j].avgrun > cri[j + 1].avgrun)
			{	t = cri[j + 1];
				cri[j + 1] = cri[j];
				cri[j] = t;
			}
		}
	printf("\ndetails in ascending order\n");
	printf("\nName\tage\tmatches\truns\tavg_run");
	for (i = 0; i < n; i++)
		printf("\n%s\t%d\t%d\t%d\t%f", cri[i].name, cri[i].age, cri[i].nmatch, cri[i].run, cri[i].avgrun);
}