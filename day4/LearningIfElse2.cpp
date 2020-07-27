// day4
// LearningIfElse2.c

#include <stdio.h>
#include <math.h>

int main(void)
{
	double x, y;
	
	printf("Please enter a number: ");
	scanf(" %lf", &x);
	
	if(x>=0)
	{
		y = sqrt(x);
		printf("Square root of %g is %g", x, y);
	}
	else
	{
		printf("A negative number has been entered.\n");
		printf("Changing sign...\n");
		x = -x;
		y = sqrt(x);
		printf("Square root of %g is %g", x, y);
	}
	
	printf("\nThank you");
	
	return 0;
}
