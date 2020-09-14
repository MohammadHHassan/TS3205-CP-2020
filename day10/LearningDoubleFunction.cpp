// day10
// LearningDoubleFunction.c

#include <stdio.h>
#include <math.h>

double hypo(double a, double b);

int main(void)
{
	double x, y, z;
	
	printf("This program calculates the hypotenuse value.\n");
	
	printf("Please enter the value of a: ");
	scanf(" %lf", &y);
	printf("Please enter the value of b: ");
	scanf(" %lf", &z);
	
	printf("\nGiven a=%g, b=%g\n", y, z);
	
	x = hypo(y, z);
	printf("Hypotenuse = %.2f", x);
	
	return 0;
}

double hypo(double a, double b)
{
	double c;
	
	c = sqrt(pow(a,2)+pow(b,2));
	return c;
}
