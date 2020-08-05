// day6
// LearningDoWhile.c

#include <stdio.h>

int main(void)
{
	double x;
	
	do
	{
		printf("\nPlease enter a negative number: ");
		scanf(" %lf", &x);
	}while(x>=0);
	
	printf("\nYour number is %g", x);
	printf("\nThank you!");
	
	return 0;
}



