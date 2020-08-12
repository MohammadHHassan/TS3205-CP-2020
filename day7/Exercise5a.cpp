// day7
// Exercise5a.c

/*
	Prompt a message for the user to enter 3 values
	Store the values entered in x (double)
	Sum all the values together
	Count the amount of large values
		(Large values are considered to be larger than 100)
	Calculate the average of the 3 values
	Print out:	Sum, Large values count & Average
*/

#include <stdio.h>

int main(void)
{
	int a, largeValues;
	double x, sum, average;
	
	largeValues=0;
	sum=0;
	
	for(a=0 ; a<3 ; a++)
	{
		printf("Please enter a value: ");
		scanf(" %lf", &x);
		
		sum = sum+x;
		
		if(x>100)
		{
			largeValues++;
		}
	}
	
	average = sum/3;
	
	printf("\nSum = %.1f", sum);
	printf("\nLarge values count = %d", largeValues);
	printf("\nAverage = %.1f", average);
	
	return 0;
}





