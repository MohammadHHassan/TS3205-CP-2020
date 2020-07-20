// day3
// LearningScanf.c

#include <stdio.h>		// Header file for input & output

int main(void)
{
	int a, b, c;		// Declaration of variables a, b, c
	
	printf("Please enter the value of a: ");	// Prompting a message for the user to enter value of a		
	scanf(" %d", &a);			// Storing the value user entered in a
	
	printf("Please enter the value of b: ");	// Prompting a message for the user to enter value of b
	scanf(" %d", &b);			// Storing the value user entered in b
	
	printf("\nc = a+b");		// Print out the formula for c
	c = a+b;					// Calculate c
	
	printf("\nc = %d", c);		// Show the result
	
	return 0;
}




