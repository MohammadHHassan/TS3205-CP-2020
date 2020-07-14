// Exercise2.c
// Copy and paste the lines of program in FathToCent.c
// Modify the program so that user can enter the value of Fahr

#include <stdio.h>

int main(void)
{
	double fahr, cent;
	
	printf("Please enter the value of Fahrenheit: ");
	scanf(" %lf", &fahr);
	
	cent = (fahr - 32.0)*5.0/9.0;
	
	printf("\nConverting Fahr to Cent:\n");
	printf("%.1f F = %.1f C", fahr, cent);
	
	return 0;
}
