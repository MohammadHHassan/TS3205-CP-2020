// Exercise 2

#include <stdio.h>
#include <math.h>

int main(void)
{
	double s, v, u, a;
	a = 2.0;
	
	printf("Please enter the value of v: ");
	scanf(" %lf", &v);
	
	printf("Please enter the value of u: ");
	scanf(" %lf", &u);
	
	s = 0.5*(pow(v,2)-pow(u,2))/a;
	
	printf("\ns = 0.5*(pow(v,2)-pow(u,2))/a\n");
	
	printf("\n\ts = %.1f", s);
	
	return 0;
}




