#include<stdio.h>

void areaperi ( int r, float *a, float *p )
{	
	*a = 3.14 * r * r ;
	*p = 2 * 3.14 * r ;
}

void main( )
{	
	int radius ;
	float area, perimeter ;
	printf ( "\nEnter radius of a circle " ) ;
	scanf ( "%d", &radius ) ;
	areaperi ( radius, &area, &perimeter ) ;
	printf ( "\nArea = %f", area ) ;
	printf ( "\nPerimeter = %f", perimeter ) ;
}