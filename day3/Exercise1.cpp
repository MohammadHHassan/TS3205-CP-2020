/* Exercise 1

Declare variables a, l and w in double
Print out a message "Area of rectangle calculator."
Ask the user to enter the values of length (l) and width (w)
Store the values entered in l and w respectively
Calculate the area of rectangle
Print out the result
	
*/

#include <stdio.h>

int main(void)
{
	double a, l, w;
	
	printf("Area of rectangle calculator.\n");
	
	printf("Please enter the value of l: ");
	scanf(" %lf", &l);
	
	printf("Please enter the value of w: ");
	scanf(" %lf", &w);
	
	printf("Area = length * width\n");
	a = l*w;
	
	printf("Area = %.2f", a);
	
	return 0;
}



