#include<stdio.h>
#define MAX 20
struct addpolynomial {
	int exp, coef;
};
//function to read polynomial
int read_addpolynomial(struct addpolynomial p[]) {
	int i, texp;
	i = 0;
	printf("\nEnter exp ( use -1 to exit) : ");
	scanf("%d", &texp);
	while (texp != -1) {
		p[i].exp = texp;
		printf("\nEnter coef : ");
		scanf("%d", &p[i].coef);
		i++;
		printf("\nEnter exp ( use -1 to exit) : ");
		scanf("%d", &texp);
	}
	return (i);
}
//function to print polynomial
int print_addpolynomial(struct addpolynomial p[], int
                        max1) {
	int i;
	for (i = 0; i < max1; i++)
		printf("%+dX%d ", p[i].coef, p[i].exp);
	return 0;
}
//function to ad polynomials
int add_addpolynomial( p1, p2, p3, max1, max2)
struct addpolynomial p1[], p2[], p3[];
int max1, max2;
{	int i, j, k;
	i = j = k = 0;
	while ( i < max1 && j < max2)
	{	if ( p1[i].exp > p2[j].exp)
		{	p3[k] = p1[i];
			k++;
			i++;
		}
		else if ( p1[i].exp < p2[j].exp)
		{	p3[k] = p2[j];
			k++;
			j++;
		}
		else
		{	p3[k].exp = p1[i].exp;
			p3[k].coef = p1[i].coef + p2[j].coef;
			i++;
			j++;
			k++;
		}
	}
	while ( i < max1 )
	{	p3[k] = p1[i];
		k++;
		i++;
	}
	while ( j < max2 )
	{	p3[k] = p2[j];
		k++;
		j++;
	}
	return (k);
}
void main() {
	struct addpolynomial p1[MAX], p2[MAX], p3[MAX];
	int max1, max2, max3;
	printf("\nEnter first addpolynomial : ");
	max1 = read_addpolynomial(p1);
	printf("\nEnter second addpolynomial : ");
	max2 = read_addpolynomial(p2);
	max3 = add_addpolynomial(p1, p2, p3, max1, max2);
	printf("\nFirst addpolynomial is ");
	print_addpolynomial(p1, max1);
	printf("\nSecond addpolynomial is ");
	print_addpolynomial(p2, max2);
	printf("\n The resultant addpolynomial after addition is");
	print_addpolynomial(p3, max3);
}